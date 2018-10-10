/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_EMPTY_10022005_1619)
#define FUSION_EMPTY_10022005_1619

#include <boost/mpl/empty_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/empty.hpp>

namespace boost { namespace mpl
{
    template <>
    struct empty_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence>
        struct apply : ::boost::fusion::result_of::empty<Sequence>
        {
        };
    };
}}

#endif  // include guard

