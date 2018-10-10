/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_PUSH_FRONT_10022005_1720)
#define FUSION_PUSH_FRONT_10022005_1720

#include <boost/mpl/push_front_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/tag_of.hpp>
#include <boost/fusion/algorithm/transformation/push_front.hpp>
#include <boost/fusion/sequence/convert.hpp>

namespace boost { namespace mpl
{
    template <>
    struct push_front_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence, typename T>
        struct apply :
            ::boost::fusion::result_of::convert<
                typename ::boost::fusion::detail::tag_of<Sequence>::type
              , typename ::boost::fusion::result_of
                ::push_front<Sequence, T>::type
            >
        {
        };
    };
}}

#endif  // include guard

