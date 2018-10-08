/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_TRANSFORM_VIEW_ITERATOR_20070127_0957)
#define BOOST_FUSION_TRANSFORM_VIEW_ITERATOR_20070127_0957

#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/view/transform_view/transform_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct equal_to_impl< ::boost::fusion::transform_view_iterator_tag>
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

    template <>
    struct equal_to_impl< ::boost::fusion::transform_view_iterator2_tag>
    {
        template <typename It1, typename It2>
        struct apply :
            ::boost::fusion::result_of::equal_to<
                typename It1::first1_type
              , typename It2::first1_type
            >
        {
        };
    };
}}}

#endif  // include guard

