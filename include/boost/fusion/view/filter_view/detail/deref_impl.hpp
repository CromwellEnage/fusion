/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DEREF_IMPL_05062005_0905)
#define FUSION_DEREF_IMPL_05062005_0905

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/detail/adapt_deref_traits.hpp>
#include <boost/fusion/view/filter_view/filter_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::filter_view_iterator_tag> :
        ::boost::fusion::detail::adapt_deref_traits
    {
    };
}}}

#endif  // include guard

