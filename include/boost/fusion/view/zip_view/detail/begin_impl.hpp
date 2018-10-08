/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_BEGIN_IMPL_20060123_2147)
#define FUSION_BEGIN_IMPL_20060123_2147

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/support/unused.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/mpl/assert.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_lvalue_reference.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    struct poly_begin
    {
        template <typename T>
        struct result;

        template <typename SeqRef>
        struct result< ::boost::fusion::detail::poly_begin(SeqRef)> :
            ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<SeqRef, ::boost::fusion::unused_type const&>
#else
                ::std::is_same<SeqRef, ::boost::fusion::unused_type const&>
#endif
              , ::boost::mpl::identity< ::boost::fusion::unused_type>
              , ::boost::fusion::result_of::begin<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    typename ::boost::remove_reference<SeqRef>::type
#else
                    typename ::std::remove_reference<SeqRef>::type
#endif
                >
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
        typename ::boost::fusion::detail::poly_begin::template result<
            ::boost::fusion::detail::poly_begin(Seq&)
        >::type
        operator()(Seq& seq) const
        {
            return ::boost::fusion::begin(seq);
        }

        template <typename Seq>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::poly_begin::template result<
            ::boost::fusion::detail::poly_begin(Seq const&)
        >::type
        operator()(Seq const& seq) const
        {
            return ::boost::fusion::begin(seq);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        ::boost::fusion::unused_type
        operator()(::boost::fusion::unused_type const&) const
        {
            return ::boost::fusion::unused_type();
        }
    };
}}}

#include <boost/fusion/view/zip_view/zip_view_tag_fwd.hpp>
#include <boost/fusion/view/zip_view/zip_view_iterator_fwd.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct begin_impl< ::boost::fusion::zip_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::zip_view_iterator<
                typename ::boost::fusion::result_of::transform<
                    typename Sequence::sequences
                  , ::boost::fusion::detail::poly_begin
                >::type
              , typename Sequence::category
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& sequence)
            {
                return type(
                    ::boost::fusion::transform(
                        sequence.sequences_
                      , ::boost::fusion::detail::poly_begin()
                    )
                );
            }
        };
    };
}}}

#endif  // include guard

