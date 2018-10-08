/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_AT_IMPL_05052005_0232)
#define FUSION_VALUE_AT_IMPL_05052005_0232

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_tag_fwd.hpp>
#include <boost/mpl/at.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::vector_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename ::boost::mpl
            ::at<typename Sequence::types, N>::type type;
        };
    };
}}}

#endif  // include guard

