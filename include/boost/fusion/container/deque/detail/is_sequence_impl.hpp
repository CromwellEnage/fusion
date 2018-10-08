/*============================================================================
    Copyright (c) 2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_DEQUE_DETAIL_IS_SEQUENCE_IMPL_HPP)
#define BOOST_FUSION_CONTAINER_DEQUE_DETAIL_IS_SEQUENCE_IMPL_HPP

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/container/deque/deque_fwd.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_sequence_impl< ::boost::fusion::deque_tag>
    {
        template <typename Sequence>
        struct apply : ::boost::mpl::true_
        {
        };
    };
}}}

#endif  // include guard

