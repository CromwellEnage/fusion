/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SIZE_IMPL_09232005_1058)
#define FUSION_SIZE_IMPL_09232005_1058

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/view/filter_view/filter_view_tag_fwd.hpp>
#include <boost/fusion/iterator/distance.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct size_impl< ::boost::fusion::filter_view_tag>
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

#endif  // include guard

