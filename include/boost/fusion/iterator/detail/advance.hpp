/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ADVANCE_09172005_1149)
#define FUSION_ADVANCE_09172005_1149

namespace boost { namespace fusion { namespace advance_detail
{
    template <typename Iterator, int N>
    struct forward;

    template <typename Iterator, int N>
    struct backward;
}}}

#include <boost/fusion/iterator/next.hpp>

namespace boost { namespace fusion { namespace advance_detail
{
    template <typename Iterator, int N>
    struct next_forward
    {
        typedef typename ::boost::fusion::advance_detail::forward<
            typename ::boost::fusion::result_of::next<Iterator>::type
          , (N - 1)
        >::type type;
    };
}}}

#include <boost/fusion/iterator/prior.hpp>

namespace boost { namespace fusion { namespace advance_detail
{
    template <typename Iterator, int N>
    struct next_backward
    {
        typedef typename ::boost::fusion::advance_detail::backward<
            typename ::boost::fusion::result_of::prior<Iterator>::type
          , (N + 1)
        >::type type;
    };
}}}

#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace advance_detail
{
    // Default advance implementation, perform next(i)
    // or prior(i) N times.

    template <typename Iterator, int N>
    struct forward
    {
        typedef typename ::boost::mpl::eval_if_c<
            (N == 0)
          , ::boost::mpl::identity<Iterator>
          , ::boost::fusion::advance_detail::next_forward<Iterator, N>
        >::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type const& call(type const& i)
        {
            return i;
        }

        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(I const& i)
        {
            return call(::boost::fusion::next(i));
        }
    };

    template <typename Iterator, int N>
    struct backward
    {
        typedef typename ::boost::mpl::eval_if_c<
            (N == 0)
          , ::boost::mpl::identity<Iterator>
          , ::boost::fusion::advance_detail::next_backward<Iterator, N>
        >::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type const& call(type const& i)
        {
            return i;
        }

        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(I const& i)
        {
            return call(::boost::fusion::prior(i));
        }
    };
}}}

#endif  // include guard

