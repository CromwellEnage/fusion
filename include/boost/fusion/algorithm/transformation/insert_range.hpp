/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_INSERT_RANGE_009172005_1147)
#define FUSION_INSERT_RANGE_009172005_1147

#include <boost/fusion/view/joint_view/joint_view.hpp>
#include <boost/fusion/view/iterator_range/iterator_range.hpp>
#include <boost/fusion/iterator/mpl/convert_iterator.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename Position, typename Range>
    struct insert_range
    {
        typedef typename ::boost::fusion
        ::convert_iterator<Position>::type pos_type;
        typedef typename ::boost::fusion::result_of
        ::begin<Sequence>::type first_type;
        typedef typename ::boost::fusion::result_of
        ::end<Sequence>::type last_type;

        typedef ::boost::fusion
        ::iterator_range<first_type, pos_type> left_type;
        typedef ::boost::fusion
        ::iterator_range<pos_type, last_type> right_type;
        typedef ::boost::fusion
        ::joint_view<left_type, Range> left_insert_type;
        typedef ::boost::fusion
        ::joint_view<left_insert_type, right_type> type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence, typename Position, typename Range>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename result_of
    ::insert_range<Sequence const, Position, Range const>::type
    insert_range(Sequence const& seq, Position const& pos, Range const& range)
    {
        typedef ::boost::fusion::result_of
        ::insert_range<Sequence const, Position, Range const> result_of;
        typedef typename result_of::left_type left_type;
        typedef typename result_of::right_type right_type;
        typedef typename result_of::left_insert_type left_insert_type;
        typedef typename result_of::type result;

        left_type left(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::convert_iterator<Position>::call(pos)
        );
        right_type right(
            ::boost::fusion::convert_iterator<Position>::call(pos)
          , ::boost::fusion::end(seq)
        );
        left_insert_type left_insert(left, range);
        return result(left_insert, right);
    }
}}

#endif  // include guard

