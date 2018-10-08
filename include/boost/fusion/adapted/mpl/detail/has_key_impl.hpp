/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_HAS_KEY_IMPL_31122005_1647)
#define BOOST_FUSION_HAS_KEY_IMPL_31122005_1647

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/has_key.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct has_key_impl< ::boost::fusion::mpl_sequence_tag>
    {
        template <typename Sequence, typename Key>
        struct apply : ::boost::mpl::has_key<Sequence, Key>
        {
        };
    };
}}}

#endif  // include guard

