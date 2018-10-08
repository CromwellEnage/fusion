/*============================================================================
    Copyright (c) 2014 Kohei Takahashi
    Copyright (c) 2018 Cromwell D. Enage

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/core/lightweight_test.hpp>
#include <boost/fusion/sequence/comparison/equal_to.hpp>
#include <boost/fusion/sequence/io/out.hpp>
#include <boost/fusion/support/pair.hpp>

namespace test
{
    template <typename C>
    void copy()
    {
        boost::fusion::pair<int, C> src;
        boost::fusion::pair<int, C> dest = src;
        BOOST_TEST_EQ(dest, src);
    }
}

int run()
{
    test::copy<FUSION_SEQUENCE<> >();
    test::copy<FUSION_SEQUENCE<TEST_TYPE> >();
    test::copy<FUSION_SEQUENCE<TEST_TYPE, TEST_TYPE> >();
    return boost::report_errors();
}

