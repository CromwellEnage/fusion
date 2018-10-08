/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/view/zip_view.hpp>
#include <boost/fusion/container/vector.hpp>
#include <boost/fusion/container/list.hpp>
#include <boost/fusion/container/generation/make_vector.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/sequence/intrinsic/front.hpp>
#include <boost/fusion/sequence/intrinsic/back.hpp>
#include <boost/fusion/sequence/comparison/equal_to.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/core/lightweight_test.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

int main()
{
    {
        typedef boost::fusion::vector2<int, int> int_vector;
        typedef boost::fusion::vector2<char, char> char_vector;
        typedef boost::fusion::list<char, char> char_list;
        typedef boost::fusion
        ::vector<int_vector&, char_vector&, char_list&> seqs_type;
        typedef boost::fusion::zip_view<seqs_type> view;

        BOOST_MPL_ASSERT((
            boost::mpl::equal_to<
                boost::fusion::result_of::size<view>
              , boost::fusion::result_of::size<int_vector>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::mpl::equal_to<
                boost::fusion::result_of::size<view>
              , boost::mpl::int_<2>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::mpl::equal_to<
                boost::fusion::result_of::distance<
                    boost::fusion::result_of::begin<view>::type
                  , boost::fusion::result_of::end<view>::type
                >
              , boost::mpl::int_<2>
            >
        ));
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        BOOST_MPL_ASSERT((
            boost::mpl::if_<
                boost::is_same<
                    boost::fusion::result_of::value_at_c<view, 0>::type
                  , boost::fusion::vector3<int, char, char>
                >
              , boost::mpl::true_
              , boost::mpl::false_
            >::type
        ));
        BOOST_MPL_ASSERT((
            boost::mpl::if_<
                boost::is_same<
                    boost::fusion::result_of::value_of<
                        boost::fusion::result_of::begin<view>::type
                    >::type
                  , boost::fusion::vector3<int, char, char>
                >
              , boost::mpl::true_
              , boost::mpl::false_
            >::type
        ));
#else   // !defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        BOOST_MPL_ASSERT((
            boost::mpl::if_<
                std::is_same<
                    boost::fusion::result_of::value_at_c<view, 0>::type
                  , boost::fusion::vector3<int, char, char>
                >
              , boost::mpl::true_
              , boost::mpl::false_
            >::type
        ));
        BOOST_MPL_ASSERT((
            boost::mpl::if_<
                std::is_same<
                    boost::fusion::result_of::value_of<
                        boost::fusion::result_of::begin<view>::type
                    >::type
                  , boost::fusion::vector3<int, char, char>
                >
              , boost::mpl::true_
              , boost::mpl::false_
            >::type
        ));
#endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS

        int_vector iv(1, 2);
        char_vector cv('a', 'b');
        char_list cl('y', 'z');
        seqs_type seqs(iv, cv, cl);
        view v(seqs);

        BOOST_TEST((
            boost::fusion::at_c<0>(
                v
            ) == boost::fusion::make_vector(1, 'a', 'y')
        ));
        BOOST_TEST((
            boost::fusion::at_c<1>(
                v
            ) == boost::fusion::make_vector(2, 'b', 'z')
        ));
        BOOST_TEST((
            boost::fusion::front(
                v
            ) == boost::fusion::make_vector(1, 'a', 'y')
        ));
        BOOST_TEST((
            *boost::fusion::next(
                boost::fusion::begin(v)
            ) == boost::fusion::make_vector(2, 'b', 'z')
        ));
        BOOST_TEST((
            boost::fusion::advance_c<2>(
                boost::fusion::begin(v)
            ) == boost::fusion::end(v)
        ));
        BOOST_TEST((
            2 == boost::fusion::distance(
                boost::fusion::begin(v)
              , boost::fusion::end(v)
            )
        ));

    }
    return boost::report_errors();
}

