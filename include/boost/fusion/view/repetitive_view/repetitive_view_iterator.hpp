/*============================================================================
    Copyright (c) 2007 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_REPETITIVE_VIEW_ITERATOR_HPP_INCLUDED)
#define BOOST_FUSION_REPETITIVE_VIEW_ITERATOR_HPP_INCLUDED

#include <boost/fusion/view/repetitive_view/repetitive_view_iterator_fwd.hpp>
#include <boost/fusion/iterator/mpl/convert_iterator.hpp>
#include <boost/fusion/adapted/mpl/mpl_iterator.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/support/iterator_base.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/fusion/view/repetitive_view/detail/deref_impl.hpp>
#include <boost/fusion/view/repetitive_view/detail/next_impl.hpp>
#include <boost/fusion/view/repetitive_view/detail/value_of_impl.hpp>

namespace boost { namespace fusion
{
    template <
        typename Sequence
      , typename Pos = typename ::boost::fusion::result_of
        ::begin<Sequence>::type
    >
    struct repetitive_view_iterator :
        ::boost::fusion::iterator_base<
            ::boost::fusion::repetitive_view_iterator<Sequence, Pos>
        >
    {
        typedef ::boost::fusion::repetitive_view_iterator_tag fusion_tag;
        typedef Sequence sequence_type;
        typedef typename ::boost::fusion
        ::convert_iterator<Pos>::type pos_type;
        typedef typename ::boost::fusion::convert_iterator<
            typename ::boost::fusion::result_of::begin<Sequence>::type
        >::type first_type;
        typedef typename ::boost::fusion::convert_iterator<
            typename ::boost::fusion::result_of::end<Sequence>::type
        >::type end_type;
        typedef ::boost::fusion::single_pass_traversal_tag category;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit repetitive_view_iterator(Sequence& in_seq) :
            seq(in_seq), pos(begin(in_seq))
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        repetitive_view_iterator(Sequence& in_seq, pos_type const& in_pos) :
            seq(in_seq), pos(in_pos)
        {
        }

        Sequence& seq;
        pos_type pos;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        repetitive_view_iterator& operator=(repetitive_view_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Sequence, typename Pos>
    struct iterator_traits<
        ::boost::fusion::repetitive_view_iterator<Sequence, Pos>
    >
    {
    };
}
#endif

#endif  // include guard

