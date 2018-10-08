/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_OF_05052005_1126)
#define FUSION_VALUE_OF_05052005_1126

#include <boost/fusion/iterator/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct value_of_impl
    {
        template <typename Iterator>
        struct apply
        {
        };
    };
}}}

#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename Iterator>
        struct apply : Iterator::template value_of<Iterator>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Iterator>
    struct value_of :
        ::boost::fusion::extension::value_of_impl<
            typename ::boost::fusion::detail::tag_of<Iterator>::type
        >::template apply<Iterator>
    {
    };
}}}

#endif  // include guard

