/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_INSERT_RANGE_10022005_1838)
#define FUSION_INSERT_RANGE_10022005_1838

#include <boost/mpl/insert_range_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/tag_of.hpp>
#include <boost/fusion/algorithm/transformation/insert_range.hpp>
#include <boost/fusion/sequence/convert.hpp>

namespace boost { namespace mpl
{
    template <>
    struct insert_range_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence, typename Pos, typename Range>
        struct apply :
            ::boost::fusion::result_of::convert<
                typename ::boost::fusion::detail::tag_of<Sequence>::type
              , typename ::boost::fusion::result_of
                ::insert_range<Sequence, Pos, Range>::type
            >
        {
        };
    };
}}

#endif  // include guard

