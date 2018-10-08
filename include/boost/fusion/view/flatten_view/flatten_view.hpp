/*============================================================================
    Copyright (c) 2013 Jamboree

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_FLATTEN_VIEW_HPP_INCLUDED)
#define BOOST_FUSION_FLATTEN_VIEW_HPP_INCLUDED

namespace boost { namespace fusion
{
    struct flatten_view_tag;
}}

#include <boost/fusion/sequence/intrinsic/empty.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct empty_impl< ::boost::fusion::flatten_view_tag>
    {
        template <typename Sequence>
        struct apply :
            ::boost::fusion::result_of
            ::empty<typename Sequence::sequence_type>
        {
        };
    };
}}}

#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/single_view.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::flatten_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::last_type last_type;

            typedef typename ::boost::fusion::result_of::end<
                ::boost::mpl::single_view<typename Sequence::sequence_type>
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static inline type call(Sequence&)
            {
                return type();
            }
        };
    };
}}}

#include <boost/fusion/view/flatten_view/flatten_view_iterator.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct begin_impl< ::boost::fusion::flatten_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::first_type first_type;

            typedef typename ::boost::fusion::result_of::begin<
                ::boost::mpl::single_view<typename Sequence::sequence_type>
            >::type root_iterator;

            typedef ::boost::fusion::detail
            ::seek_descent<root_iterator, first_type> seek_descent;

            typedef typename seek_descent::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static inline type call(Sequence& seq)
            {
                return seek_descent::apply(root_iterator(), seq.first());
            }
        };
    };
}}}

#include <boost/fusion/iterator/distance.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct size_impl< ::boost::fusion::flatten_view_tag>
    {
        template <typename Sequence>
        struct apply :
            ::boost::fusion::result_of::distance<
                typename ::boost::fusion::result_of::begin<Sequence>::type
              , typename ::boost::fusion::result_of::end<Sequence>::type
            >
        {
        };
    };
}}}

#include <boost/fusion/support/is_view.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    struct flatten_view :
        ::boost::fusion::sequence_base<
            ::boost::fusion::flatten_view<Sequence>
        >
    {
        typedef ::boost::fusion::flatten_view_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::true_ is_view;
        typedef ::boost::fusion::forward_traversal_tag category;

        typedef Sequence sequence_type;
        typedef typename ::boost::fusion::result_of
        ::begin<Sequence>::type first_type;
        typedef typename ::boost::fusion::result_of
        ::end<Sequence>::type last_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit flatten_view(Sequence& seq) : seq(seq)
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
    };
}}

#endif  // include guard

