/*============================================================================
    Copyright (c) 2015 Kohei Takahashi
    Copyright (c) 2018 Cromwell D. Enage

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/core/lightweight_test.hpp>
#include <boost/fusion/support/pair.hpp>

namespace test
{
    template <typename C>
    void copy()
    {
        boost::fusion::pair<int, C> src;
        boost::fusion::pair<int, C> dest = src;
        dest.second.second = 1.0f;
        BOOST_TEST_LT(src, dest);
    }
}

int main()
{
    test::copy<boost::fusion::pair<void, float> >();
    return boost::report_errors();
}

