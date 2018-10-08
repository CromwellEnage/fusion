/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_SET_DETAIL_VALUE_OF_IMPL_HPP)
#define BOOST_FUSION_CONTAINER_SET_DETAIL_VALUE_OF_IMPL_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/set/set_tag_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/value_at.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::set_iterator_tag>
    {
        template <typename It>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::value_at<
                typename It::seq_type::storage_type
              , typename It::index
            >::type type;
        };
    };
}}}

#endif  // include guard

