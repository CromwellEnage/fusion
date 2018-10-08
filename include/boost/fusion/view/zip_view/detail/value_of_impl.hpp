/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_OF_IMPL_20060124_2147)
#define FUSION_VALUE_OF_IMPL_20060124_2147

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/support/unused.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    struct poly_value_of
    {
        template <typename T>
        struct result;

        template <typename It>
        struct result< ::boost::fusion::detail::poly_value_of(It)> :
            ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<It, ::boost::fusion::unused_type>
#else
                ::std::is_same<It, ::boost::fusion::unused_type>
#endif
              , ::boost::mpl::identity< ::boost::fusion::unused_type>
              , ::boost::fusion::result_of::value_of<It>
            >
        {
        };

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        // never called, but needed for decltype-based result_of (C++0x)
        template <typename It>
        BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::poly_value_of::template result<
            ::boost::fusion::detail::poly_value_of(It)
        >::type
        operator()(It&&) const;
#endif
    };
}}}

#include <boost/fusion/view/zip_view/zip_view_iterator_fwd.hpp>
#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::zip_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::transform<
                typename Iterator::iterators
              , ::boost::fusion::detail::poly_value_of
            >::type values;
            typedef typename ::boost::fusion::result_of
            ::as_vector<values>::type type;
        };
    };
}}}

#endif  // include guard

