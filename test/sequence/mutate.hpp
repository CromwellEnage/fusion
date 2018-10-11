/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(LIBS_FUSION_TEST_SEQUENCE_MUTATE_HPP)
#define LIBS_FUSION_TEST_SEQUENCE_MUTATE_HPP

#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/core/lightweight_test.hpp>

#if !defined(FUSION_AT)
#define FUSION_AT boost::fusion::at_c
#endif

namespace test_detail
{
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
}

void test()
{
    boost::fusion::FUSION_SEQUENCE<
        int, float, bool, test_detail::foo
    > t1(5, 12.2f, true, test_detail::foo(4));
    FUSION_AT<0>(t1) = 6;
    FUSION_AT<1>(t1) = 2.2f;
    FUSION_AT<2>(t1) = false;
    FUSION_AT<3>(t1) = test_detail::foo(5);

    BOOST_TEST(FUSION_AT<0>(t1) == 6);
    BOOST_TEST(FUSION_AT<1>(t1) > 2.1f && FUSION_AT<1>(t1) < 2.3f);
    BOOST_TEST(FUSION_AT<2>(t1) == false);
    BOOST_TEST(FUSION_AT<3>(t1) == test_detail::foo(5));
}

#endif  // include guard

