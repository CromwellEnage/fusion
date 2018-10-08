/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ITERATOR_RANGE_SIZE_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_ITERATOR_RANGE_SIZE_IMPL_HPP_INCLUDED

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/iterator/distance.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct size_impl< ::boost::fusion::iterator_range_tag>
    {
        template <typename Seq>
        struct apply :
            ::boost::fusion::result_of::distance<
                typename Seq::begin_type
              , typename Seq::end_type
            >
        {
        };
    };
}}}

#endif  // include guard

