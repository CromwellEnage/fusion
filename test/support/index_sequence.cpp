/*============================================================================
    Copyright (c) 2015,2018 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/config.hpp>

#if defined(BOOST_NO_CXX11_VARIADIC_TEMPLATES)
#error "does not meet requirements"
#endif

#include <boost/fusion/support/detail/index_sequence.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/mpl/aux_/test.hpp>

MPL_TEST_CASE()
{
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<0>::type
          , boost::fusion::detail::index_sequence<>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<1>::type
          , boost::fusion::detail::index_sequence<0>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<2>::type
          , boost::fusion::detail::index_sequence<0, 1>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<3>::type
          , boost::fusion::detail::index_sequence<0, 1, 2>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<4>::type
          , boost::fusion::detail::index_sequence<0, 1, 2, 3>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<5>::type
          , boost::fusion::detail::index_sequence<0, 1, 2, 3, 4>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<6>::type
          , boost::fusion::detail::index_sequence<0, 1, 2, 3, 4, 5>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<7>::type
          , boost::fusion::detail::index_sequence<0, 1, 2, 3, 4, 5, 6>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<8>::type
          , boost::fusion::detail::index_sequence<0, 1, 2, 3, 4, 5, 6, 7>
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<15>::type
          , boost::fusion::detail::index_sequence<
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14
            >
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<16>::type
          , boost::fusion::detail::index_sequence<
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
            >
        >
    ));
    BOOST_MPL_ASSERT((
        boost::is_same<
            boost::fusion::detail::make_index_sequence<17>::type
          , boost::fusion::detail::index_sequence<
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16
            >
        >
    ));
}

