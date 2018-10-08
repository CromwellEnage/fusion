/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_FRONT_09162005_0343)
#define FUSION_FRONT_09162005_0343

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/iterator/deref.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct front :
        ::boost::fusion::result_of::deref<
            typename ::boost::fusion::result_of::begin<Sequence>::type
        >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::front<Sequence>::type
    front(Sequence& seq)
    {
        return *::boost::fusion::begin(seq);
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::front<Sequence const>::type
    front(Sequence const& seq)
    {
        return *::boost::fusion::begin(seq);
    }
}}

#endif  // include guard

