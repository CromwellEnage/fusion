/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CLEAR_10022005_1817)
#define FUSION_CLEAR_10022005_1817

#include <boost/mpl/clear_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/tag_of.hpp>
#include <boost/fusion/mpl/detail/clear.hpp>

namespace boost { namespace mpl
{
    template <>
    struct clear_impl< ::boost::fusion::fusion_sequence_tag>
    {
        template <typename Sequence>
        struct apply :
            ::boost::fusion::detail::clear<
                typename ::boost::fusion::detail::tag_of<Sequence>::type
            >
        {            
        };
    };
}}

#endif  // include guard

