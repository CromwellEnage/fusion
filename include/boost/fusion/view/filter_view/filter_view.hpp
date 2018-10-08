/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SEQUENCE_FILTER_VIEW_HPP)
#define FUSION_SEQUENCE_FILTER_VIEW_HPP

#include <boost/fusion/view/filter_view/filter_view_tag_fwd.hpp>
#include <boost/fusion/view/filter_view/filter_view_iterator.hpp>
#include <boost/fusion/view/filter_view/detail/size_impl.hpp>
#include <boost/fusion/view/filter_view/detail/begin_impl.hpp>
#include <boost/fusion/view/filter_view/detail/end_impl.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_view.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/inherit.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence, typename Pred>
    struct filter_view :
        ::boost::fusion::sequence_base<
            ::boost::fusion::filter_view<Sequence, Pred>
        >
    {
        typedef ::boost::fusion::filter_view_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef typename ::boost::mpl::eval_if<
            ::boost::fusion::traits::is_associative<Sequence>
          , ::boost::mpl::inherit2<
                ::boost::fusion::forward_traversal_tag
              , ::boost::fusion::associative_tag
            >
          , ::boost::mpl::identity< ::boost::fusion::forward_traversal_tag>
        >::type category;
        typedef ::boost::mpl::true_ is_view;

        typedef typename ::boost::fusion::result_of
        ::begin<Sequence>::type first_type;
        typedef typename ::boost::fusion::result_of
        ::end<Sequence>::type last_type;
        typedef Pred pred_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        filter_view(Sequence& in_seq) : seq(in_seq)
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        first_type first() const
        {
            return ::boost::fusion::begin(this->seq);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        last_type last() const
        {
            return ::boost::fusion::end(this->seq);
        }

        typename ::boost::mpl::if_<
            ::boost::fusion::traits::is_view<Sequence>
          , Sequence
          , Sequence&
        >::type seq;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        filter_view& operator=(filter_view const&);
    };
}}

#endif  // include guard

