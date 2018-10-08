/*============================================================================
    Copyright (c) 2016 Lee Clagett
    Copyright (c) 2018 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/config.hpp>

#if defined(BOOST_NO_CXX11_VARIADIC_TEMPLATES)
#error "does not meet requirements"
#endif

#include <boost/core/lightweight_test.hpp>
#include <boost/fusion/support/detail/and.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/type_traits/integral_constant.hpp>

int main()
{
    BOOST_TEST((boost::fusion::detail::and_<>::value));
    BOOST_TEST(!(boost::fusion::detail::and_<boost::false_type>::value));
    BOOST_TEST((boost::fusion::detail::and_<boost::true_type>::value));
    BOOST_TEST(!(
        boost::fusion::detail::and_<
            boost::true_type
          , boost::false_type
        >::value
    ));
    BOOST_TEST((
        boost::fusion::detail::and_<
            boost::true_type
          , boost::true_type
        >::value
    ));
    BOOST_TEST(!(
        boost::fusion::detail::and_<
            boost::true_type
          , boost::true_type
          , boost::false_type
        >::value
    ));
    BOOST_TEST((
        boost::fusion::detail::and_<
            boost::true_type
          , boost::true_type
          , boost::true_type
        >::value
    ));
    BOOST_TEST((
        boost::fusion::detail::and_<
            boost::true_type
          , boost::mpl::true_
        >::value
    ));

    return boost::report_errors();
}

