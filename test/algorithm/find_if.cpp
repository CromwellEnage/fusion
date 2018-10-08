/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/

struct X
{
    operator int() const
    {
        return 12345;
    }
};

#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

template <typename T>
struct Y
{
    template <typename U>
    struct apply
    {
        typedef typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_same<T, U>
#else
            ::std::is_same<T, U>
#endif
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type type;
    };
};

#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/algorithm/query/find_if.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/mpl/vector_c.hpp>
#include <boost/mpl/less.hpp>
#include <boost/core/lightweight_test.hpp>

int main()
{
    {
        boost::fusion
        ::vector<int, char, int, double> v(12345, 'x', 678910, 3.36);

        BOOST_TEST((*boost::fusion::find_if<Y<char> >(v) == 'x'));
        BOOST_TEST((*boost::fusion::find_if<Y<int> >(v) == 12345));
        BOOST_TEST((*boost::fusion::find_if<Y<double> >(v) == 3.36));
    }

    {
        typedef boost::mpl::vector<int, char, X, double> mpl_vec;
        BOOST_TEST((*boost::fusion::find_if<Y<X> >(mpl_vec()) == 12345));
    }

    {
        typedef boost::mpl::vector_c<int, 1, 2, 3, 4> mpl_vec;
        BOOST_TEST((
            *boost::fusion::find_if<
                boost::mpl::less<boost::mpl::_, boost::mpl::int_<3> >
            >(mpl_vec()) == 1
        ));
    }

    return boost::report_errors();
}

