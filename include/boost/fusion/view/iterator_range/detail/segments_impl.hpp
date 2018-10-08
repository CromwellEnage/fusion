/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ITERATOR_RANGE_SEGMENTS_HPP_INCLUDED)
#define BOOST_FUSION_ITERATOR_RANGE_SEGMENTS_HPP_INCLUDED

#include <boost/fusion/sequence/intrinsic/segments.hpp>
#include \
<boost/fusion/view/iterator_range/detail/segmented_iterator_range.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/is_segmented.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/assert.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct segments_impl< ::boost::fusion::iterator_range_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::detail::make_segmented_range<
                typename Sequence::begin_type
              , typename Sequence::end_type
            > impl;

            BOOST_MPL_ASSERT((
                ::boost::fusion::traits::is_segmented<typename impl::type>
            ));

            typedef typename ::boost::fusion::result_of::segments<
                typename impl::type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence & seq)
            {
                return ::boost::fusion
                ::segments(impl::call(seq.first, seq.last));
            }
        };
    };
}}}

#endif  // include guard

