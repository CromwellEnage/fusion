/*============================================================================
    Copyright (c) 2015 Louis Dionne

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/

struct Dummy { };

#include <boost/fusion/include/deque.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/mpl/aux_/test.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_constructible.hpp>
#else
#include <type_traits>
#endif

MPL_TEST_CASE()
{
    // Make sure deque's constructor is SFINAE-friendly.
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
    BOOST_MPL_ASSERT((
        boost::mpl::if_<
            boost::is_constructible<boost::fusion::deque<int>, Dummy const&>
          , boost::mpl::false_
          , boost::mpl::true_
        >::type
    ));
#else
    BOOST_MPL_ASSERT((
        boost::mpl::if_<
            std::is_constructible<boost::fusion::deque<int>, Dummy const&>
          , boost::mpl::false_
          , boost::mpl::true_
        >::type
    ));
#endif
}

