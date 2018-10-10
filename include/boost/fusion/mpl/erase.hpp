/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ERASE_10022005_1835)
#define FUSION_ERASE_10022005_1835

#include <boost/mpl/erase_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/tag_of.hpp>
#include <boost/fusion/algorithm/transformation/erase.hpp>
#include <boost/fusion/sequence/convert.hpp>

namespace boost { namespace mpl
{
    template <>
    struct erase_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence, typename First, typename Last>
        struct apply :
            ::boost::fusion::result_of::convert<
                typename fusion::detail::tag_of<Sequence>::type
              , typename ::boost::fusion::result_of
                ::erase<Sequence, First, Last>::type
            >
        {
        };
    };
}}

#endif  // include guard

