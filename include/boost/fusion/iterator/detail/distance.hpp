/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DISTANCE_09172005_0730)
#define FUSION_DISTANCE_09172005_0730

namespace boost { namespace fusion { namespace distance_detail
{
    template <typename First, typename Last>
    struct linear_distance;
}}}

#include <boost/fusion/iterator/next.hpp>
#include <boost/mpl/next.hpp>

namespace boost { namespace fusion { namespace distance_detail
{
    template <typename First, typename Last>
    struct next_distance
    {
        typedef typename ::boost::mpl::next<
            typename ::boost::fusion::distance_detail::linear_distance<
                typename ::boost::fusion::result_of::next<First>::type
              , Last
            >::type
        >::type type;
    };
}}}

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace distance_detail
{
    // Default distance implementation, linear
    // search for the Last iterator.

    template <typename First, typename Last>
    struct linear_distance :
        ::boost::mpl::eval_if<
            ::boost::fusion::result_of::equal_to<First, Last>
          , ::boost::mpl::identity<boost::mpl::int_<0> >
          , ::boost::fusion::distance_detail::next_distance<First, Last>
        >::type
    {
        typedef typename ::boost::mpl::eval_if<
            ::boost::fusion::result_of::equal_to<First, Last>
          , ::boost::mpl::identity<boost::mpl::int_<0> >
          , ::boost::fusion::distance_detail::next_distance<First, Last>
        >::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const&, Last const&)
        {
            return type();
        }
    };
}}}

#endif  // include guard

