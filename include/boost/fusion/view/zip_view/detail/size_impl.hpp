/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SIZE_IMPL_20060124_0800)
#define FUSION_SIZE_IMPL_20060124_0800

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/zip_view/zip_view_tag_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct size_impl< ::boost::fusion::zip_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::size type;
        };
    };
}}}

#endif  // include guard

