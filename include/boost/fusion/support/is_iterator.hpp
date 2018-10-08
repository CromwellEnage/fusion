/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_IS_ITERATOR_05062005_1219)
#define FUSION_IS_ITERATOR_05062005_1219

#include <boost/fusion/support/iterator_root_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_base_of.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename T>
    struct is_fusion_iterator :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of< ::boost::fusion::iterator_root, T>
#else
            ::std::is_base_of< ::boost::fusion::iterator_root, T>
#endif
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };
}}

#endif  // include guard

