/*============================================================================
    Copyright (c) 2006 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_IS_SEGMENTED_03202006_0015)
#define FUSION_IS_SEGMENTED_03202006_0015

#include <boost/fusion/support/is_segmented_fwd.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct is_segmented_impl
    {
        template <typename Sequence>
        struct apply : ::boost::mpl::false_
        {
        };
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_segmented_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence>
        struct apply : Sequence::is_segmented
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <typename Sequence>
    struct is_segmented :
        boost::mpl::bool_<
            static_cast<bool>(
                boost::fusion::extension::is_segmented_impl<
                    typename boost::fusion::traits::tag_of<Sequence>::type
                >::template apply<Sequence>::type::value
            )
        >
    {
    };
}}}

#endif  // include guard

