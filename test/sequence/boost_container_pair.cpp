/*============================================================================
    Copyright (c) 2013-2018 Cromwell D. Enage

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/core/lightweight_test.hpp>
#include <boost/fusion/adapted/boost_container_pair.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/sequence/intrinsic/empty.hpp>
#include <boost/fusion/sequence/intrinsic/front.hpp>
#include <boost/fusion/sequence/intrinsic/back.hpp>
#include <boost/fusion/sequence/io/out.hpp>
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/container/list/list.hpp>
#include <boost/fusion/container/generation/make_vector.hpp>
#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/sequence/comparison/equal_to.hpp>
#include <boost/fusion/sequence/comparison/not_equal_to.hpp>
#include <boost/fusion/sequence/comparison/less.hpp>
#include <boost/fusion/sequence/comparison/less_equal.hpp>
#include <boost/fusion/sequence/comparison/greater.hpp>
#include <boost/fusion/sequence/comparison/greater_equal.hpp>
#include <boost/fusion/mpl.hpp>
#include <boost/fusion/support/is_view.hpp>
#include <boost/mpl/is_sequence.hpp>
#include <boost/mpl/front.hpp>
#include <boost/mpl/back.hpp>
#include <boost/mpl/at.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/container/map.hpp>
#include <iostream>
#include <string>

int main()
{
    using boost::fusion::operator<<;

    std::cout << boost::fusion::tuple_open('[');
    std::cout << boost::fusion::tuple_close(']');
    std::cout << boost::fusion::tuple_delimiter(", ");

    {
        typedef boost::container::map<
            int
          , std::string
        >::movable_value_type pair_type;
        BOOST_MPL_ASSERT((boost::mpl::is_sequence<pair_type>));
        BOOST_MPL_ASSERT((
            boost::is_same<int, boost::mpl::front<pair_type>::type>
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<std::string, boost::mpl::back<pair_type>::type>
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<int, boost::mpl::at_c<pair_type,0>::type>
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<std::string, boost::mpl::at_c<pair_type,1>::type>
        ));
        BOOST_MPL_ASSERT_NOT((boost::fusion::traits::is_view<pair_type>));

        pair_type p(123, "Hola!!!");
        std::cout << boost::fusion::at_c<0>(p) << std::endl;
        std::cout << boost::fusion::at_c<1>(p) << std::endl;
        std::cout << p << std::endl;
        BOOST_TEST(p == boost::fusion::make_vector(123, "Hola!!!"));

        boost::fusion::at_c<0>(p) = 6;
        boost::fusion::at_c<1>(p) = "mama mia";
        BOOST_TEST(p == boost::fusion::make_vector(6, "mama mia"));

        BOOST_STATIC_ASSERT(
            boost::fusion::result_of::size<pair_type>::value == 2
        );
        BOOST_STATIC_ASSERT(
            !boost::fusion::result_of::empty<pair_type>::value
        );

        BOOST_TEST(boost::fusion::front(p) == 6);
        BOOST_TEST(boost::fusion::back(p) == "mama mia");
    }

    {
        typedef boost::container::map<
            short
          , float
        >::movable_value_type pair_type;
        boost::fusion::vector<int, float> v1(4, 3.3f);
        pair_type v2(5, 3.3f);
        boost::fusion::vector<long, double> v3(5, 4.4);
        BOOST_TEST(v1 < v2);
        BOOST_TEST(v1 <= v2);
        BOOST_TEST(v2 > v1);
        BOOST_TEST(v2 >= v1);
        BOOST_TEST(v2 < v3);
        BOOST_TEST(v2 <= v3);
        BOOST_TEST(v3 > v2);
        BOOST_TEST(v3 >= v2);
    }

    {
        // conversion from pair to vector
        typedef boost::container::map<
            int
          , std::string
        >::movable_value_type pair_type;
        pair_type p(123, "Hola!!!");
        boost::fusion::vector<int, std::string> v(p);
        BOOST_TEST(v == p);
        v = p;
        BOOST_TEST(v == p);
    }

    {
        // conversion from pair to list
        typedef boost::container::map<
            int
          , std::string
        >::movable_value_type pair_type;
        pair_type p(123, "Hola!!!");
        boost::fusion::list<int, std::string> l(p);
        BOOST_TEST(l == p);
        l = p;
        BOOST_TEST(l == p);
    }

    return boost::report_errors();
}

