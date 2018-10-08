/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/view/zip_view.hpp>
#include <boost/fusion/container/vector.hpp>
#include <boost/fusion/container/deque.hpp>
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
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/vector.hpp>
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
        typedef boost::fusion::deque<int, int> int_deque;
        typedef boost::fusion::deque<char, char> char_deque;
        typedef boost::fusion::vector<int_deque&, char_deque&> seqs_type;
        typedef boost::fusion::zip_view<seqs_type> view;

        BOOST_MPL_ASSERT((
            boost::mpl::equal_to<
                boost::fusion::result_of::size<view>
              , boost::fusion::result_of::size<int_deque>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::mpl::equal_to<
                boost::fusion::result_of::size<view>
              , boost::fusion::result_of::size<char_deque>
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
            boost::is_same<
                boost::fusion::result_of::value_at_c<view, 0>::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<
                boost::fusion::result_of::value_of<
                    boost::fusion::result_of::begin<view>::type
                >::type
              , boost::fusion::vector2<int, char>
            >
        ));
#else   // !defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::value_at_c<view, 0>::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::value_of<
                    boost::fusion::result_of::begin<view>::type
                >::type
              , boost::fusion::vector2<int, char>
            >
        ));
#endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS

        int_deque id(1, 2);
        char_deque cd('a', 'b');
        seqs_type seqs(id, cd);
        view v(seqs);

        BOOST_TEST((
            boost::fusion::at_c<0>(v) == boost::fusion::make_vector(1, 'a')
        ));
        BOOST_TEST((
            boost::fusion::at_c<1>(v) == boost::fusion::make_vector(2, 'b')
        ));
        BOOST_TEST((
            boost::fusion::front(v) == boost::fusion::make_vector(1, 'a')
        ));
        BOOST_TEST((
            boost::fusion::back(v) == boost::fusion::make_vector(2, 'b')
        ));
        BOOST_TEST((
            *boost::fusion::next(
                boost::fusion::begin(v)
            ) == boost::fusion::make_vector(2, 'b')
        ));
        BOOST_TEST((
            *boost::fusion::prior(
                boost::fusion::end(v)
            ) == boost::fusion::make_vector(2, 'b')
        ));
        BOOST_TEST((
            boost::fusion::advance_c<2>(
                boost::fusion::begin(v)
            ) == boost::fusion::end(v)
        ));
        BOOST_TEST((
            boost::fusion::advance_c<-2>(
                boost::fusion::end(v)
            ) == boost::fusion::begin(v)
        ));
        BOOST_TEST((
            2 == boost::fusion::distance(
                boost::fusion::begin(v)
              , boost::fusion::end(v)
            )
        ));
    }

    {
        typedef boost::mpl::vector2<int, bool> v1_type;
        typedef boost::mpl::vector2<char, long> v2_type;
        typedef boost::fusion::vector<v1_type&, v2_type&> seqs_type;
        typedef boost::fusion::zip_view<seqs_type> view;

        BOOST_MPL_ASSERT((
            boost::mpl::equal_to<
                boost::fusion::result_of::size<view>
              , boost::fusion::result_of::size<v1_type>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::mpl::equal_to<
                boost::fusion::result_of::size<view>
              , boost::fusion::result_of::size<v2_type>
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
            boost::is_same<
                boost::fusion::result_of::value_at_c<view, 0>::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<
                boost::fusion::result_of::value_at_c<view, 1>::type
              , boost::fusion::vector2<bool, long>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<
                boost::fusion::result_of::value_of<
                    boost::fusion::result_of::begin<view>::type
                >::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<
                boost::fusion::result_of::value_of<
                    boost::fusion::result_of::prior<
                        boost::fusion::result_of::end<view>::type
                    >::type
                >::type
              , boost::fusion::vector2<bool, long>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<
                boost::fusion::result_of::front<view>::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            boost::is_same<
                boost::fusion::result_of::back<view>::type
              , boost::fusion::vector2<bool, long>
            >
        ));
#else   // !defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::value_at_c<view, 0>::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::value_at_c<view, 1>::type
              , boost::fusion::vector2<bool, long>
            >
        ));
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::value_of<
                    boost::fusion::result_of::begin<view>::type
                >::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::value_of<
                    boost::fusion::result_of::prior<
                        boost::fusion::result_of::end<view>::type
                    >::type
                >::type
              , boost::fusion::vector2<bool, long>
            >
        ));
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::front<view>::type
              , boost::fusion::vector2<int, char>
            >
        ));
        BOOST_MPL_ASSERT((
            std::is_same<
                boost::fusion::result_of::back<view>::type
              , boost::fusion::vector2<bool, long>
            >
        ));
#endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS

        v1_type v1;
        v2_type v2;
        seqs_type seqs(v1, v2);
        view v(seqs);

        BOOST_TEST((
            boost::fusion::at_c<0>(v) == boost::mpl::vector2<int, char>()
        ));
        BOOST_TEST((
            boost::fusion::at_c<1>(v) == boost::mpl::vector2<bool, long>()
        ));
        BOOST_TEST((
            boost::fusion::front(v) == boost::mpl::vector2<int, char>()
        ));
        BOOST_TEST((
            boost::fusion::back(v) == boost::mpl::vector2<bool, long>()
        ));
        BOOST_TEST((
            *boost::fusion::next(
                boost::fusion::begin(v)
            ) == boost::mpl::vector2<bool, long>()
        ));
        BOOST_TEST((
            *boost::fusion::prior(
                boost::fusion::end(v)
            ) == boost::mpl::vector2<bool, long>()
        ));
        BOOST_TEST((
            boost::fusion::advance_c<2>(
                boost::fusion::begin(v)
            ) == boost::fusion::end(v)
        ));
        BOOST_TEST((
            boost::fusion::advance_c<-2>(
                boost::fusion::end(v)
            ) == boost::fusion::begin(v)
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

