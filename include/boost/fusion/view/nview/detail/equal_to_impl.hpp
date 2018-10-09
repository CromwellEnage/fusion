/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_ITERATOR_SEP_24_2009_0329PM)
#define BOOST_FUSION_NVIEW_ITERATOR_SEP_24_2009_0329PM

#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct equal_to_impl< ::boost::fusion::nview_iterator_tag>
    {
        template <typename It1, typename It2>
        struct apply :
            ::boost::fusion::result_of::equal_to<
                typename It1::first_type
              , typename It2::first_type
            >
        {
        };
    };
}}}

#endif  // include guard

