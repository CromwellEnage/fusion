/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/sequence/intrinsic/value_at.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/core/lightweight_test.hpp>
#include <boost/static_assert.hpp>
#include <iostream>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#include <functional>
#endif

#if !defined(FUSION_AT)
#define FUSION_AT at_c
#endif

#if !defined(FUSION_VALUE_AT)
#define FUSION_VALUE_AT(S, N) boost::fusion::result_of::value_at_c<S, N>
#endif

namespace test_detail
{
    // something to prevent warnings for unused variables
    template <typename T>
    void dummy(T const&)
    {
    }

    class A
    {
    };
}

void test()
{
    using namespace boost::fusion;
    using namespace test_detail;

    double d = 2.7;
    A a;
#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    // Note: C++11 will pickup the rvalue overload for the d argument
    // since we do not have all permutations (expensive!) for all const&
    // and && arguments. We either have all && or all const& arguments only.
    // For that matter, use std::ref to disambiguate the call.

    FUSION_SEQUENCE<int, double&, const A&, int> t(1, std::ref(d), a, 2);
#else
    FUSION_SEQUENCE<int, double&, const A&, int> t(1, d, a, 2);
#endif
    FUSION_SEQUENCE<int, double&, const A, int> const ct(t);

    int i  = FUSION_AT<0>(t);
    int i2 = FUSION_AT<3>(t);

    BOOST_TEST(i == 1 && i2 == 2);

    int j  = FUSION_AT<0>(ct);
    BOOST_TEST(j == 1);

    FUSION_AT<0>(t) = 5;
    BOOST_TEST(FUSION_AT<0>(t) == 5);

#if defined(FUSION_TEST_FAIL)
    FUSION_AT<0>(ct) = 5; // can't assign to const
#endif

    double e = FUSION_AT<1>(t);
    BOOST_TEST(e > 2.69 && e < 2.71);

    FUSION_AT<1>(t) = 3.14+i;
    BOOST_TEST(FUSION_AT<1>(t) > 4.13 && FUSION_AT<1>(t) < 4.15);

#if defined(FUSION_TEST_FAIL)
    FUSION_AT<4>(t) = A(); // can't assign to const
    dummy(FUSION_AT<5>(ct)); // illegal index
#endif

    ++FUSION_AT<0>(t);
    BOOST_TEST(FUSION_AT<0>(t) == 6);

    typedef FUSION_SEQUENCE<int, float> seq_type;

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
    BOOST_STATIC_ASSERT(!(
        boost::is_const<FUSION_VALUE_AT(seq_type, 0)::type>::value
    ));

    // constness should not affect
    BOOST_STATIC_ASSERT(!(
        boost::is_const<FUSION_VALUE_AT(seq_type const, 0)::type>::value
    ));

    BOOST_STATIC_ASSERT(!(
        boost::is_const<FUSION_VALUE_AT(seq_type, 1)::type>::value
    ));

    // constness should not affect
    BOOST_STATIC_ASSERT(!(
        boost::is_const<FUSION_VALUE_AT(seq_type const, 1)::type>::value
    ));
#else
    BOOST_STATIC_ASSERT(!(
        std::is_const<FUSION_VALUE_AT(seq_type, 0)::type>::value
    ));

    // constness should not affect
    BOOST_STATIC_ASSERT(!(
        std::is_const<FUSION_VALUE_AT(seq_type const, 0)::type>::value
    ));

    BOOST_STATIC_ASSERT(!(
        std::is_const<FUSION_VALUE_AT(seq_type, 1)::type>::value
    ));

    // constness should not affect
    BOOST_STATIC_ASSERT(!(
        std::is_const<FUSION_VALUE_AT(seq_type const, 1)::type>::value
    ));
#endif

    dummy(i); dummy(i2); dummy(j); dummy(e); // avoid warns for unused variables
}

