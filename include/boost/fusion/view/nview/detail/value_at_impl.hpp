/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_VALUE_AT_IMPL_SEP_24_2009_0234PM)
#define BOOST_FUSION_NVIEW_VALUE_AT_IMPL_SEP_24_2009_0234PM

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/view/nview/nview_tag_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::nview_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename Sequence::sequence_type sequence_type;
            typedef typename Sequence::index_type index_type;
            typedef typename ::boost::fusion::result_of
            ::at<index_type, N>::type index;
            typedef typename ::boost::fusion::result_of
            ::at<sequence_type, index>::type type;
        };
    };
}}}

#endif  // include guard

