/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SIZE_IMPL_31122005_1508)
#define BOOST_FUSION_SIZE_IMPL_31122005_1508

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/size.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct size_impl< ::boost::fusion::mpl_sequence_tag>
    {
        template <typename Sequence>
        struct apply : ::boost::mpl::size<Sequence>
        {
        };
    };
}}}

#endif  // include guard

