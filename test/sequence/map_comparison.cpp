/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/container/map/map.hpp>
#include <boost/fusion/sequence/comparison.hpp>
#include <boost/fusion/support/pair.hpp>
#include <boost/core/lightweight_test.hpp>

struct key1
{
};

struct key2
{
};

struct key3
{
};

void equality_test()
{
    boost::fusion::map<
        boost::fusion::pair<key1, int>
      , boost::fusion::pair<key2, char>
    > v1(5, 'a');
    boost::fusion::map<
        boost::fusion::pair<key1, int>
      , boost::fusion::pair<key2, char>
    > v2(5, 'a');
    BOOST_TEST(v1 == v2);

    boost::fusion::map<
        boost::fusion::pair<key1, int>
      , boost::fusion::pair<key2, char>
    > v3(5, 'b');
    boost::fusion::map<
        boost::fusion::pair<key1, int>
      , boost::fusion::pair<key2, char>
    > t4(2, 'a');
    BOOST_TEST(v1 != v3);
    BOOST_TEST(v1 != t4);
    BOOST_TEST(!(v1 != v2));

    boost::fusion::map<
        boost::fusion::pair<key1, int>
      , boost::fusion::pair<key2, char>
      , boost::fusion::pair<key2, bool>
    > v5(5, 'a', true);
    BOOST_TEST(v1 != v5);
    BOOST_TEST(!(v1 == v5));
    BOOST_TEST(v5 != v1);
    BOOST_TEST(!(v5 == v1));
}

void ordering_test()
{
    boost::fusion::map<
        boost::fusion::pair<key1, int>
      , boost::fusion::pair<key2, float>
    > v1(4, 3.3f);
    boost::fusion::map<
        boost::fusion::pair<key1, short>
      , boost::fusion::pair<key2, float>
    > v2(5, 3.3f);
    boost::fusion::map<
        boost::fusion::pair<key1, long>
      , boost::fusion::pair<key2, double>
    > v3(5, 4.4);
    BOOST_TEST(v1 < v2);
    BOOST_TEST(v1 <= v2);
    BOOST_TEST(v2 > v1);
    BOOST_TEST(v2 >= v1);
    BOOST_TEST(v2 < v3);
    BOOST_TEST(v2 <= v3);
    BOOST_TEST(v3 > v2);
    BOOST_TEST(v3 >= v2);

#if defined(FUSION_TEST_FAIL)
    boost::fusion::map<int, char, bool> v5(5, 'a', true);
    v1 >= v5;
#endif
}

int main()
{
    equality_test();
    ordering_test();
    return boost::report_errors();
}

