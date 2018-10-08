/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_IS_VIEW_IMPL_03202006_0048)
#define BOOST_FUSION_IS_VIEW_IMPL_03202006_0048

#include <boost/fusion/support/is_view_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_view_impl< ::boost::fusion::mpl_sequence_tag>
    {
        template <typename T>
        struct apply : ::boost::mpl::true_
        {
        };
    };
}}}

#endif  // include guard

