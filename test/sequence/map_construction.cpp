/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/

namespace test_detail
{
    struct key1
    {
    };

    struct key2
    {
    };

    struct key3
    {
    };

    // something to prevent warnings for unused variables
    template <typename T> void dummy(T const&)
    {
    }

    // no public default constructor
    class foo
    {
        int val;

        foo()
        {
        }

     public:
        explicit foo(int v) : val(v)
        {
        }

        bool operator==(foo const& other) const
        {
            return val == other.val;
        }
    };

    // another class without a public default constructor
    class no_def_constructor
    {
        no_def_constructor()
        {
        }

     public:
        no_def_constructor(test_detail::foo)
        {
        }
    };
}

#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/container/map/map.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/support/pair.hpp>
#include <boost/core/lightweight_test.hpp>

inline void test()
{
    boost::fusion::nil empty;
    (void)empty;

    boost::fusion::map<> empty0;
    (void)empty0;

#if !defined(NO_CONSTRUCT_FROM_NIL)
    boost::fusion::map<> empty1(empty);
    (void)empty1;
#endif

    boost::fusion::map<boost::fusion::pair<test_detail::key1, int> > t1;
    BOOST_TEST(boost::fusion::at_c<0>(t1).second == int());

    boost::fusion::map<
        boost::fusion::pair<test_detail::key1, float>
    > t2(5.5f);
    BOOST_TEST(
        (boost::fusion::at_c<0>(t2).second > 5.4f) && (
            (boost::fusion::at_c<0>(t2).second) < 5.6f
        )
    );

    boost::fusion::map<
        boost::fusion::pair<test_detail::key1, test_detail::foo>
    > t3(test_detail::foo(12));
    BOOST_TEST(boost::fusion::at_c<0>(t3).second == test_detail::foo(12));

    boost::fusion::map<
        boost::fusion::pair<test_detail::key1, double>
    > t4(t2);
    BOOST_TEST(
        (boost::fusion::at_c<0>(t4).second > 5.4) && (
            (boost::fusion::at_c<0>(t4).second) < 5.6
        )
    );

    boost::fusion::map<
        boost::fusion::pair<test_detail::key1, int>
      , boost::fusion::pair<test_detail::key2, float>
    > t5;
    BOOST_TEST(boost::fusion::at_c<0>(t5).second == int());
    BOOST_TEST(boost::fusion::at_c<1>(t5).second == float());

    boost::fusion::map<
        boost::fusion::pair<test_detail::key1, int>
      , boost::fusion::pair<test_detail::key2, float>
    > t6(12, 5.5f);
    BOOST_TEST(boost::fusion::at_c<0>(t6).second == 12);
    BOOST_TEST(
        (boost::fusion::at_c<1>(t6).second > 5.4f) && (
            (boost::fusion::at_c<1>(t6).second) < 5.6f
        )
    );

    boost::fusion::map<
        boost::fusion::pair<test_detail::key1, int>
      , boost::fusion::pair<test_detail::key2, float>
    > t7(t6);
    BOOST_TEST(boost::fusion::at_c<0>(t7).second == 12);
    BOOST_TEST(
        (boost::fusion::at_c<1>(t7).second > 5.4f) && (
            (boost::fusion::at_c<1>(t7).second) < 5.6f
        )
    );

    boost::fusion::map<
        boost::fusion::pair<test_detail::key1, long>
      , boost::fusion::pair<test_detail::key2, double>
    > t8(t6);
    BOOST_TEST(boost::fusion::at_c<0>(t8).second == 12);
    BOOST_TEST(
        (boost::fusion::at_c<1>(t8).second > 5.4f) && (
            (boost::fusion::at_c<1>(t8).second) < 5.6f
        )
    );

    test_detail::dummy(
        boost::fusion::map<
            boost::fusion::pair<
                test_detail::key1
              , test_detail::no_def_constructor
            >
          , boost::fusion::pair<
                test_detail::key2
              , test_detail::no_def_constructor
            >
          , boost::fusion::pair<
                test_detail::key3
              , test_detail::no_def_constructor
            >
        >(
            // ok, since the default constructor is not used
            boost::fusion::pair<
                test_detail::key1
              , test_detail::no_def_constructor
            >(test_detail::foo(0))
          , boost::fusion::pair<
                test_detail::key2
              , test_detail::no_def_constructor
            >(test_detail::foo(1))
          , boost::fusion::pair<
                test_detail::key3
              , test_detail::no_def_constructor
            >(test_detail::foo(2))
        )
    );

    test_detail::dummy(
        boost::fusion::map<
            boost::fusion::pair<test_detail::key1, int>
          , boost::fusion::pair<test_detail::key2, double>
        >()
    );
    test_detail::dummy(
        boost::fusion::map<
            boost::fusion::pair<test_detail::key1, int>
          , boost::fusion::pair<test_detail::key2, double>
        >(1, 3.14)
    );

#if defined(FUSION_TEST_FAIL)
    // should fail, no defaults for references
    test_detail::dummy(
        boost::fusion::map<
            boost::fusion::pair<test_detail::key1, double&>
        >()
    );

    // likewise
    test_detail::dummy(
        boost::fusion::map<
            boost::fusion::pair<test_detail::key1, double const&>
        >()
    );
#endif

    {
        double dd = 5;

        // ok
        test_detail::dummy(
            boost::fusion::map<
                boost::fusion::pair<test_detail::key1, double&>
            >(boost::fusion::pair<test_detail::key1, double&>(dd))
        );

        // ok, but dangerous
        test_detail::dummy(
            boost::fusion::map<
                boost::fusion::pair<test_detail::key1, double const&>
            >(
                boost::fusion::pair<test_detail::key1, double const&>(
                    dd + 3.14
                )
            )
        );
    }

#if defined(FUSION_TEST_FAIL)
    // temporary to non-const reference, should fail
    test_detail::dummy(
        boost::fusion::map<
            boost::fusion::pair<test_detail::key1, double&>
        >(dd + 3.14)
    );
#endif
}

int main()
{
    test();
    return boost::report_errors();
}

