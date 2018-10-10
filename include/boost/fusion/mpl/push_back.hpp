/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_PUSH_BACK_10022005_1647)
#define FUSION_PUSH_BACK_10022005_1647

#include <boost/mpl/push_back_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/tag_of.hpp>
#include <boost/fusion/algorithm/transformation/push_back.hpp>
#include <boost/fusion/sequence/convert.hpp>

namespace boost { namespace mpl
{
    template <>
    struct push_back_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence, typename T>
        struct apply :
            ::boost::fusion::result_of::convert<
                typename ::boost::fusion::detail::tag_of<Sequence>::type
              , typename ::boost::fusion::result_of
                ::push_back<Sequence, T>::type
            >
        {
        };
    };
}}

#endif  // include guard

