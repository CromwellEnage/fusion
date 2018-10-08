/*============================================================================
    Copyright (c) 2006 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SUPPORT_IS_SEGMENTED_FWD_HPP)
#define BOOST_FUSION_SUPPORT_IS_SEGMENTED_FWD_HPP

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct is_segmented_impl;
}}}

namespace boost { namespace fusion { namespace traits
{
    template <typename Sequence>
    struct is_segmented;
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_segmented_impl< ::boost::fusion::iterator_range_tag>;
}}}

#endif  // include guard

