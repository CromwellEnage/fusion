/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_AT_IMPL_20060124_1933)
#define FUSION_AT_IMPL_20060124_1933

#include <boost/fusion/sequence/intrinsic/at.hpp>
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
    template <typename N>
    struct poly_at
    {
        template <typename T>
        struct result;

        template <typename N1, typename SeqRef>
        struct result< ::boost::fusion::detail::poly_at<N1>(SeqRef)> :
            ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<SeqRef, ::boost::fusion::unused_type const&>
#else
                ::std::is_same<SeqRef, ::boost::fusion::unused_type const&>
#endif
              , ::boost::mpl::identity< ::boost::fusion::unused_type>
              , ::boost::fusion::result_of::at<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    typename ::boost::remove_reference<SeqRef>::type
#else
                    typename ::std::remove_reference<SeqRef>::type
#endif
                  , N
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
        typename ::boost::fusion::detail::poly_at<N>::template result<
            ::boost::fusion::detail::poly_at<N>(Seq&)
        >::type
        operator()(Seq& seq) const
        {
            return ::boost::fusion::at<N>(seq);
        }

        template <typename Seq>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::poly_at<N>::template result<
            ::boost::fusion::detail::poly_at<N>(Seq const&)
        >::type
        operator()(Seq const& seq) const
        {
            return ::boost::fusion::at<N>(seq);
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
#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::zip_view_tag>
    {
        template <typename Seq, typename N>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::as_vector<
                typename ::boost::fusion::result_of::transform<
                    typename Seq::sequences
                  , ::boost::fusion::detail::poly_at<N>
                >::type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Seq& seq)
            {
                return type(
                    ::boost::fusion::transform(
                        seq.sequences_
                      , ::boost::fusion::detail::poly_at<N>()
                    )
                );
            }
        };
    };
}}}

#endif  // include guard

