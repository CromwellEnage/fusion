/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_FRONT_10022005_1618)
#define FUSION_FRONT_10022005_1618

#include <boost/mpl/front_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/iterator/value_of.hpp>

namespace boost { namespace mpl
{
    template <>
    struct front_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence>
        struct apply : 
            ::boost::fusion::result_of::value_of<
                typename ::boost::fusion::result_of::begin<Sequence>::type
            >
        {
        };
    };
}}

#endif  // include guard

