/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_IMPL_07162005_0132)
#define FUSION_VALUE_IMPL_07162005_0132

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/detail/adapt_value_traits.hpp>
#include <boost/fusion/view/joint_view/joint_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::joint_view_iterator_tag> :
        ::boost::fusion::detail::adapt_value_traits
    {
    };
}}}

#endif  // include guard

