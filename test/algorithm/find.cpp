/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/container/set/set.hpp>
#include <boost/fusion/container/map/map.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/algorithm/query/find.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/support/pair.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/core/lightweight_test.hpp>
#include <string>

struct X
{
    operator int() const
    {
        return 12345;
    }
};

int main()
{
    {
        typedef boost::fusion::vector<int, char, int, double> seq_type;
        seq_type seq(12345, 'x', 678910, 3.36);

        std::cout << *boost::fusion::find<char>(seq) << std::endl;
        BOOST_TEST(*boost::fusion::find<char>(seq) == 'x');

        std::cout << *boost::fusion::find<int>(seq) << std::endl;
        BOOST_TEST(*boost::fusion::find<int>(seq) == 12345);

        std::cout << *boost::fusion::find<double>(seq) << std::endl;
        BOOST_TEST(*boost::fusion::find<double>(seq) == 3.36);

        BOOST_TEST(
            boost::fusion::find<bool>(seq) == boost::fusion::end(seq)
        );
    }

    {
        typedef boost::fusion::set<int, char, double> seq_type;
        seq_type seq(12345, 'x', 3.36);
        std::cout << *boost::fusion::find<char>(seq) << std::endl;
        BOOST_TEST(*boost::fusion::find<char>(seq) == 'x');
        BOOST_TEST(
            boost::fusion::find<bool>(seq) == boost::fusion::end(seq)
        );
    }
    
    {
        typedef boost::fusion::map<
            boost::fusion::pair<int, char>
          , boost::fusion::pair<double, std::string>
        > map_type;

        map_type seq(
            boost::fusion::make_pair<int>('X')
          , boost::fusion::make_pair<double>("Men")
        );
        
        std::cout << *boost::fusion::find<int>(seq) << std::endl;
        std::cout << *boost::fusion::find<double>(seq) << std::endl;
        BOOST_TEST((*boost::fusion::find<int>(seq)).second == 'X');
        BOOST_TEST((*boost::fusion::find<double>(seq)).second == "Men");
        BOOST_TEST(
            boost::fusion::find<bool>(seq) == boost::fusion::end(seq)
        );
    }

    {
        typedef boost::mpl::vector<int, char, X, double> mpl_vec;
        BOOST_TEST((*boost::fusion::find<X>(mpl_vec()) == 12345));
        BOOST_TEST(
            boost::fusion::find<bool>(
                mpl_vec()
            ) == boost::fusion::end(mpl_vec())
        );
    }

    return boost::report_errors();
}

