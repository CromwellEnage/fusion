/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_DISTANCE_IMPL_SEP_23_2009_0328PM)
#define BOOST_FUSION_NVIEW_DISTANCE_IMPL_SEP_23_2009_0328PM

#include <boost/fusion/iterator/distance.hpp>
#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct distance_impl< ::boost::fusion::nview_iterator_tag>
    {
        template <typename First, typename Last>
        struct apply :
            ::boost::fusion::result_of::distance<
                typename First::first_type
              , typename Last::first_type
            >
        {
            typedef typename ::boost::fusion::result_of::distance<
                typename First::first_type
              , typename Last::first_type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(First const& /*first*/, Last const& /*last*/)
            {
                return type();
            }
        };
    };
}}}

#endif  // include guard

