/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_JOINT_VIEW_07162005_0140)
#define FUSION_JOINT_VIEW_07162005_0140

#include <boost/fusion/view/joint_view/joint_view_fwd.hpp>
#include <boost/fusion/view/joint_view/joint_view_iterator.hpp>
#include <boost/fusion/view/joint_view/detail/begin_impl.hpp>
#include <boost/fusion/view/joint_view/detail/end_impl.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_view.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/plus.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/inherit.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence1, typename Sequence2>
    struct joint_view :
        ::boost::fusion::sequence_base<
            ::boost::fusion::joint_view<Sequence1, Sequence2>
        >
    {
        typedef ::boost::fusion::joint_view_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef typename ::boost::mpl::eval_if<
            typename ::boost::mpl::if_<
                ::boost::fusion::traits::is_associative<Sequence1>
              , ::boost::fusion::traits::is_associative<Sequence2>
              , ::boost::mpl::false_
            >::type
          , ::boost::mpl::inherit2<
                ::boost::fusion::forward_traversal_tag
              , ::boost::fusion::associative_tag
            >
          , ::boost::mpl::identity< ::boost::fusion::forward_traversal_tag>
        >::type category;
        typedef ::boost::mpl::true_ is_view;

        typedef typename ::boost::fusion::result_of
        ::begin<Sequence1>::type first_type;

        typedef typename ::boost::fusion::result_of
        ::end<Sequence1>::type last_type;

        typedef typename ::boost::fusion::result_of
        ::begin<Sequence2>::type concat_type;

        typedef typename ::boost::fusion::result_of
        ::end<Sequence2>::type concat_last_type;

        typedef ::boost::mpl::int_<
            (
                ::boost::fusion::result_of::size<Sequence1>::value +
                ::boost::fusion::result_of::size<Sequence2>::value
            )
        > size;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        joint_view(Sequence1& in_seq1, Sequence2& in_seq2) :
            seq1(in_seq1), seq2(in_seq2)
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        first_type first() const
        {
            return ::boost::fusion::begin(seq1);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        concat_type concat() const
        {
            return ::boost::fusion::begin(this->seq2);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        concat_last_type concat_last() const
        {
            return ::boost::fusion::end(this->seq2);
        }

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        joint_view& operator=(joint_view const&);

        typename ::boost::mpl::if_<
            ::boost::fusion::traits::is_view<Sequence1>
          , Sequence1
          , Sequence1&
        >::type seq1;
        typename ::boost::mpl::if_<
            ::boost::fusion::traits::is_view<Sequence2>
          , Sequence2
          , Sequence2&
        >::type seq2;
    };
}}

#endif  // include guard

