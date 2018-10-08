/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_SEQUENCE_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_SEQUENCE_HPP_INCLUDED

namespace boost { namespace fusion { namespace detail
{
    struct segment_sequence_tag
    {
    };
}}}

#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    // Here, Sequence is a sequence of ranges
    // (which may or may not be segmented).
    template <typename Sequence>
    struct segment_sequence :
        ::boost::fusion::sequence_base<
            ::boost::fusion::detail::segment_sequence<Sequence>
        >
    {
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::fusion::detail::segment_sequence_tag fusion_tag;
        typedef typename Sequence::is_view is_view;
        typedef typename Sequence::category category;
        typedef Sequence sequence_type;
        sequence_type sequence;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit segment_sequence(Sequence const & seq) : sequence(seq)
        {
        }
    };
}}}

#include <boost/fusion/support/is_segmented_fwd.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_segmented_impl< ::boost::fusion::detail::segment_sequence_tag>
    {
        template <typename Sequence>
        struct apply : ::boost::mpl::true_
        {
        };
    };
}}}

#include <boost/fusion/sequence/intrinsic/segments.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct segments_impl< ::boost::fusion::detail::segment_sequence_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::sequence_type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence & seq)
            {
                return seq.sequence;
            }
        };
    };
}}}

#endif  // include guard

