/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_END_IMPL_05042005_1142)
#define FUSION_END_IMPL_05042005_1142

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_tag_fwd.hpp>
#include <boost/fusion/container/vector/vector_iterator.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::vector_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::size size;
            typedef ::boost::fusion
            ::vector_iterator<Sequence, size::value> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& v)
            {
                return type(v);
            }
        };
    };
}}}

#endif  // include guard

