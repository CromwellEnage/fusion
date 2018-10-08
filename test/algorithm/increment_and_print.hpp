/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(LIBS_FUSION_TEST_ALGORITHM_INCREMENT_AND_PRINT_HPP)
#define LIBS_FUSION_TEST_ALGORITHM_INCREMENT_AND_PRINT_HPP

namespace test
{
    struct increment
    {
        template <typename T>
        void operator()(T& v) const
        {
            ++v;
        }
    };

    struct mutable_increment : test::increment
    {
        template <typename T>
        void operator()(T& v)
        {
            return test::increment::operator()(v);
        }
    };
}

#include <boost/fusion/sequence/io/out.hpp>

namespace test
{
    struct print
    {
        template <typename T>
        void operator()(T const& v) const
        {
            std::cout << "[ " << v << " ] ";
        }
    };
}

#endif  // include guard

