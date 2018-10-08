/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/algorithm/iteration/for_each.hpp>
#include <boost/fusion/sequence/comparison.hpp>
#include <boost/mpl/vector_c.hpp>
#include <boost/core/lightweight_test.hpp>
#include "increment_and_print.hpp"

int main()
{
    {
        boost::fusion
        ::vector<int, char, double, char const*> v(1, 'x', 3.3, "Ruby");
        boost::fusion::for_each(v, test::print());
        std::cout << std::endl;
    }

    {
        char const ruby[] = "Ruby";
        typedef boost::fusion
        ::vector<int, char, double, char const*> vector_type;
        vector_type v(1, 'x', 3.3, ruby);
        boost::fusion::for_each(v, test::increment());
        BOOST_TEST_EQ(v, vector_type(2, 'y', 4.3, ruby + 1));
        std::cout << v << std::endl;
    }

    {
        char const ruby[] = "Ruby";
        typedef boost::fusion
        ::vector<int, char, double, char const*> vector_type;
        vector_type v(1, 'x', 3.3, ruby);
        boost::fusion::for_each(v, test::mutable_increment());
        BOOST_TEST_EQ(v, vector_type(2, 'y', 4.3, ruby + 1));
        std::cout << v << std::endl;
    }

    {
        typedef boost::mpl::vector_c<int, 2, 3, 4, 5, 6> mpl_vec;
        boost::fusion::for_each(mpl_vec(), test::print());
        std::cout << std::endl;
    }

    return boost::report_errors();
}

