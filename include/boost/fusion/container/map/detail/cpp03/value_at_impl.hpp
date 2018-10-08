/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2011 Brandon Kohn

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying  file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_MAP_DETAIL_VALUE_AT_IMPL_HPP)
#define BOOST_FUSION_MAP_DETAIL_VALUE_AT_IMPL_HPP

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/map/map_tag_fwd.hpp>
#include <boost/mpl/at.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::map_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename ::boost::mpl
            ::at<typename Sequence::storage_type::types, N>::type type;
        };
    };
}}}

#endif  // include guard

