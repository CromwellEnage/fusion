/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DISTANCE_09172005_0721)
#define FUSION_DISTANCE_09172005_0721

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/detail/distance.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct distance_impl
    {
        // default implementation
        template <typename First, typename Last>
        struct apply :
            ::boost::fusion::distance_detail::linear_distance<First, Last>
        {
        };
    };
}}}

#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct distance_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename First, typename Last>
        struct apply : First::template distance<First, Last>
        {
        };
    };
}}}

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion
{
    namespace result_of
    {
        template <typename First, typename Last>
        struct distance :
            ::boost::fusion::extension::distance_impl<
                typename ::boost::fusion::detail::tag_of<First>::type
            >::template apply<First, Last>
        {
            typedef typename ::boost::fusion::extension::distance_impl<
                typename ::boost::fusion::detail::tag_of<First>::type
            >::template apply<First, Last>::type distance_application;
            BOOST_STATIC_CONSTANT(int, value = distance_application::value);
        };
    }
        
    template <typename First, typename Last>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::distance<First, Last>::type
    distance(First const& a, Last const& b)
    {
        return ::boost::fusion::result_of::distance<First, Last>::call(a, b);
    }
}}

#endif  // include guard

