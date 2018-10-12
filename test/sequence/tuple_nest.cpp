/*============================================================================
    Copyright (C) 2015 Kohei Takahshi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/tuple/tuple.hpp>
#include <boost/core/lightweight_test.hpp>

#define FUSION_SEQUENCE boost::fusion::tuple
#include "nest.hpp"

// tuple does not support conversion construction from sequence by design
template <typename T>
struct skip_constructor_conversion
{
    template <typename Source, typename Expected>
    bool operator()(Source const& source, Expected const& expected) const
    {
        return test_detail::run<
            test_detail::can_copy<T>
        >(source, expected) && test_detail::run<
            test_detail::can_convert_using<test_detail::can_assign>::to<T>
        >(source, expected) && test_detail::run<
            test_detail::can_construct_from_elements<T>
        >(source, expected);            
    }
};

int main()
{
    test<skip_constructor_conversion>();
    return boost::report_errors();
}

