/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_EQUAL_TO_IMPL_02012005_2133)
#define BOOST_FUSION_EQUAL_TO_IMPL_02012005_2133

#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/view/filter_view/filter_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct equal_to_impl< ::boost::fusion::filter_view_iterator_tag>
    {
        template <typename I1, typename I2>
        struct apply :
            ::boost::fusion::result_of
            ::equal_to<typename I1::first_type, typename I2::first_type>
        {
        };
    };
}}}

#endif  // include guard

