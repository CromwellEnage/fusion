/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_BACK_09162005_0350)
#define FUSION_BACK_09162005_0350

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/iterator/deref.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct back :
        ::boost::fusion::result_of::deref<
            typename ::boost::fusion::result_of::prior<
                typename ::boost::fusion::result_of::end<Sequence>::type
            >::type
        >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::back<Sequence>::type
    back(Sequence& seq)
    {
        return *::boost::fusion::prior(::boost::fusion::end(seq));
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::back<Sequence const>::type
    back(Sequence const& seq)
    {
        return *::boost::fusion::prior(::boost::fusion::end(seq));
    }
}}

#endif  // include guard

