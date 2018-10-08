/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SINGLE_VIEW_SIZE_IMPL_JUL_07_2011_1348PM)
#define FUSION_SINGLE_VIEW_SIZE_IMPL_JUL_07_2011_1348PM

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/single_view/single_view_fwd.hpp>
#include <boost/mpl/int.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct size_impl< ::boost::fusion::single_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::mpl::int_<1> type;
        };
    };
}}}

#endif  // include guard

