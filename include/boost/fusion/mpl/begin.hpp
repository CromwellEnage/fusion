/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_BEGIN_10022005_1620)
#define FUSION_BEGIN_10022005_1620

#include <boost/mpl/begin_end_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/adapted/mpl/detail/begin_impl.hpp>
#include <boost/fusion/iterator/mpl/fusion_iterator.hpp>

namespace boost { namespace mpl
{
    template <>
    struct begin_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::mpl::fusion_iterator<
                typename ::boost::fusion::result_of::begin<Sequence>::type
            > type;
        };
    };
}}

#endif  // include guard

