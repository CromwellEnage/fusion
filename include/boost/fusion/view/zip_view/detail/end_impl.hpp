/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_END_IMPL_20060123_2208)
#define FUSION_END_IMPL_20060123_2208

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename SeqRef, typename M>
    struct get_endpoint
    {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typedef typename ::boost::remove_reference<SeqRef>::type Seq;
#else
        typedef typename ::std::remove_reference<SeqRef>::type Seq;
#endif
        typedef typename ::boost::fusion::result_of::begin<Seq>::type begin;
        typedef typename ::boost::fusion::result_of
        ::advance<begin, M>::type type;
    };
}}}

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/mpl/assert.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_lvalue_reference.hpp>
#include <boost/type_traits/is_same.hpp>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename M>
    struct endpoints
    {
        template <typename T>
        struct result;

        template <typename M1, typename SeqRef>
        struct result< ::boost::fusion::detail::endpoints<M1>(SeqRef)> :
            ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<SeqRef, ::boost::fusion::unused_type const&>
#else
                ::std::is_same<SeqRef, ::boost::fusion::unused_type const&>
#endif
              , ::boost::mpl::identity< ::boost::fusion::unused_type>
              , ::boost::fusion::detail::get_endpoint<SeqRef, M>
            >
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            BOOST_MPL_ASSERT((
                typename ::boost::mpl::if_<
                    ::boost::is_lvalue_reference<SeqRef>
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            ));
#else
            BOOST_MPL_ASSERT((
                typename ::boost::mpl::if_<
                    ::std::is_lvalue_reference<SeqRef>
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            ));
#endif
        };

        template <typename Seq>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::endpoints<M>::template result<
            ::boost::fusion::detail::endpoints<M>(Seq&)
        >::type
        operator()(Seq& seq) const
        {
            return ::boost::fusion::advance<M>(::boost::fusion::begin(seq));
        }

        template <typename Seq>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::endpoints<M>::template result<
            ::boost::fusion::detail::endpoints<M>(Seq const&)
        >::type
        operator()(Seq const& seq) const
        {
            return ::boost::fusion::advance<M>(::boost::fusion::begin(seq));
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        ::boost::fusion::unused_type
        operator()(::boost::fusion::unused_type const&) const
        {
            return ::boost::fusion::unused_type();
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/zip_view/zip_view_tag_fwd.hpp>
#include <boost/fusion/view/zip_view/zip_view_iterator_fwd.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::zip_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::zip_view_iterator<
                typename ::boost::fusion::result_of::transform<
                    typename Sequence::sequences
                  , ::boost::fusion::detail::endpoints<
                        typename Sequence::size
                    >
                >::type
              , typename Sequence::category
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& sequence)
            {
                return type(
                    ::boost::fusion::transform(
                        sequence.sequences_
                      , ::boost::fusion::detail::endpoints<
                            typename Sequence::size
                        >()
                    )
                );
            }
        };
    };
}}}

#endif  // include guard

