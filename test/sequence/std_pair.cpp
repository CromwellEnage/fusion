/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/adapted/std_pair.hpp>
#include <string>
#include "adapted_pair.hpp"

int main()
{
    {
        std::pair<int, std::string> p(123, "Hola!!!");
        test::pair_access_and_modify(p);
        BOOST_TEST(boost::fusion::back(p) == "mama mia");
    }

    {
        std::pair<short, float> p(5, 3.3f);
        test::pair_compare(p);
    }

    return boost::report_errors();
}

