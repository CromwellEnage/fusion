/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/container/generation/make_vector.hpp>
#include <boost/fusion/container/generation/make_list.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/algorithm/transformation/push_back.hpp>
#include <boost/fusion/sequence/comparison/equal_to.hpp>
#include <boost/fusion/sequence/io/out.hpp>
#include <boost/mpl/vector_c.hpp>
#include <boost/core/lightweight_test.hpp>
#include <string>

int main()
{
    std::cout << boost::fusion::tuple_open('[');
    std::cout << boost::fusion::tuple_close(']');
    std::cout << boost::fusion::tuple_delimiter(", ");

    {
        boost::fusion::vector0<> empty;
        std::cout << boost::fusion::as_vector(
            boost::fusion::make_list(1, 1.23, "harru")
        ) << std::endl;
        std::cout << boost::fusion::as_vector(
            boost::fusion::push_back(empty, 999)
        ) << std::endl;
        BOOST_TEST((
            boost::fusion::as_vector(
                boost::fusion::make_list(1, 1.23, "harru")
            ) == boost::fusion::make_list(1, 1.23, std::string("harru"))
        ));
        BOOST_TEST((
            boost::fusion::as_vector(
                boost::fusion::push_back(empty, 999)
            ) == boost::fusion::push_back(empty, 999)
        ));
    }

    {
        std::cout << boost::fusion::as_vector(
            boost::mpl::vector_c<int, 1, 2, 3, 4, 5>()
        ) << std::endl;
        BOOST_TEST((
            boost::fusion::as_vector(
                boost::mpl::vector_c<int, 1, 2, 3, 4, 5>()
            ) == boost::mpl::vector_c<int, 1, 2, 3, 4, 5>()
        ));
    }

    {
        // test conversion
        boost::fusion::vector<int, std::string> v(
            boost::fusion::make_list(123, "harru")
        );
        BOOST_TEST((v == boost::fusion::make_list(123, "harru")));
        v = boost::fusion::make_list(235, "hola");  // test assign
        BOOST_TEST((v == boost::fusion::make_list(235, "hola")));
    }

    return boost::report_errors();
}

