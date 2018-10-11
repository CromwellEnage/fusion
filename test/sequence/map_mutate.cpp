/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/container/map/map.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/support/pair.hpp>
#include <boost/core/lightweight_test.hpp>

struct k1
{
};

struct k2
{
};

struct k3
{
};

struct k4
{
};

namespace test_detail
{
    // no public default constructor
    class foo
    {
    public:

        explicit foo(int v) : val(v) {}

        bool operator==(const foo& other) const
        {
            return val == other.val;
        }

    private:

        foo() {}
        int val;
    };
}

void test()
{
    boost::fusion::map<
        boost::fusion::pair<k1, int>
      , boost::fusion::pair<k1, float>
      , boost::fusion::pair<k1, bool>
      , boost::fusion::pair<k1, test::detail::foo>
    > t1(5, 12.2f, true, test::detail::foo(4));

    boost::fusion::at_c<0>(t1).second = 6;
    boost::fusion::at_c<1>(t1).second = 2.2f;
    boost::fusion::at_c<2>(t1).second = false;
    boost::fusion::at_c<3>(t1).second = test::detail::foo(5);

    BOOST_TEST(boost::fusion::at_c<0>(t1).second == 6);
    BOOST_TEST(
        (boost::fusion::at_c<1>(t1).second > 2.1f) && (
            boost::fusion::at_c<1>(t1).second < 2.3f
        )
    );
    BOOST_TEST(boost::fusion::at_c<2>(t1).second == false);
    BOOST_TEST(boost::fusion::at_c<3>(t1).second == test::detail::foo(5));
}

int main()
{
    test();
    return boost::report_errors();
}

