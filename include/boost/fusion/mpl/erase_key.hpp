/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ERASE_KEY_10022005_1907)
#define FUSION_ERASE_KEY_10022005_1907

#include <boost/mpl/erase_key_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/tag_of.hpp>
#include <boost/fusion/algorithm/transformation/erase_key.hpp>
#include <boost/fusion/sequence/convert.hpp>

namespace boost { namespace mpl
{
    template <>
    struct erase_key_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence, typename Key>
        struct apply :
            ::boost::fusion::result_of::convert<
                typename ::boost::fusion::detail::tag_of<Sequence>::type
              , typename ::boost::fusion::result_of
                ::erase_key<Sequence, Key>::type
            >
        {
        };
    };
}}

#endif  // include guard

