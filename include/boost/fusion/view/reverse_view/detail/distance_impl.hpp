/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DISTANCE_IMPL_14122005_2104)
#define FUSION_DISTANCE_IMPL_14122005_2104

#include <boost/fusion/iterator/distance.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct distance_impl< ::boost::fusion::reverse_view_iterator_tag>
    {
        template <typename First, typename Last>
        struct apply
        {
            typedef typename First::first_type first_type;
            typedef typename Last::first_type last_type;
            typedef typename ::boost::fusion::result_of
            ::distance<last_type, first_type>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(First const& first, Last const& last)
            {
                return ::boost::fusion::distance(last.first, first.first);
            }
        };
    };
}}}

#endif  // include guard

