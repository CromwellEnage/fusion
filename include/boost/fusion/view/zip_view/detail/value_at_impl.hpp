/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_AT_IMPL_20060124_2129)
#define FUSION_VALUE_AT_IMPL_20060124_2129

#include <boost/fusion/sequence/intrinsic/value_at.hpp>
#include <boost/fusion/support/unused.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename N>
    struct poly_value_at
    {
        template <typename T>
        struct result;

        template <typename N1, typename Seq>
        struct result< ::boost::fusion::detail::poly_value_at<N1>(Seq)> :
            ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<Seq, ::boost::fusion::unused_type const&>
#else
                ::std::is_same<Seq, ::boost::fusion::unused_type const&>
#endif
              , ::boost::mpl::identity< ::boost::fusion::unused_type>
              , ::boost::fusion::result_of::value_at<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    typename ::boost::remove_reference<Seq>::type
#else
                    typename ::std::remove_reference<Seq>::type
#endif
                  , N
                >
            >
        {
        };

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        // never called, but needed for decltype-based result_of (C++0x)
        template <typename Seq>
        BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::poly_value_at<N>::template result<
            ::boost::fusion::detail::poly_value_at<N>(Seq)
        >::type
        operator()(Seq&&) const;
#endif
    };
}}}

#include <boost/fusion/view/zip_view/zip_view_tag_fwd.hpp>
#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::zip_view_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::transform<
                typename Sequence::sequences
              , ::boost::fusion::detail::poly_value_at<N>
            >::type values;
            typedef typename ::boost::fusion::result_of
            ::as_vector<values>::type type;
        };
    };
}}}

#endif  // include guard

