/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_HAS_KEY_10022005_1617)
#define FUSION_HAS_KEY_10022005_1617

#include <boost/mpl/has_key_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/has_key.hpp>

namespace boost { namespace mpl
{
    template <>
    struct has_key_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence, typename Key>
        struct apply : ::boost::fusion::result_of::has_key<Sequence, Key>
        {
        };
    };
}}

#endif  // include guard

