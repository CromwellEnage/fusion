/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_SET_DETAIL_KEY_OF_IMPL_HPP)
#define BOOST_FUSION_CONTAINER_SET_DETAIL_KEY_OF_IMPL_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/set/set_tag_fwd.hpp>
#include <boost/fusion/container/set/detail/value_of_impl.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct key_of_impl< ::boost::fusion::set_iterator_tag> :
        ::boost::fusion::extension::value_of_impl<
            ::boost::fusion::set_iterator_tag
        >
    {
    };
}}}

#endif  // include guard

