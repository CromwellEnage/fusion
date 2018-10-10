/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SUPPORT_DETAIL_USE_DEFAULT_HELP_HPP)
#define BOOST_FUSION_SUPPORT_DETAIL_USE_DEFAULT_HELP_HPP

#include <boost/fusion/support/use_default.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <class T, class Default>
    struct use_default_help :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_same<T, ::boost::fusion::result_of::use_default>
#else
            ::std::is_same<T, ::boost::fusion::result_of::use_default>
#endif
          , Default
          , T
        >
    {
    };
}}}

#endif  // include guard

