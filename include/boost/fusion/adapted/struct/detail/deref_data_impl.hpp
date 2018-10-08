/*============================================================================
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_DETAIL_DEREF_DATA_IMPL_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_DETAIL_DEREF_DATA_IMPL_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/special_tags_fwd.hpp>
#include <boost/fusion/adapted/struct/detail/deref_impl.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_data_impl< ::boost::fusion::struct_iterator_tag> :
        ::boost::fusion::extension
        ::deref_impl< ::boost::fusion::struct_iterator_tag>
    {
    };
}}}

#endif  // include guard

