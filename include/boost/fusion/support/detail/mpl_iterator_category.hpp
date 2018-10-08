/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_MPL_ITERATOR_CATEGORY_07212005_0923)
#define FUSION_MPL_ITERATOR_CATEGORY_07212005_0923

namespace boost { namespace mpl 
{
    struct forward_iterator_tag;
    struct bidirectional_iterator_tag;
    struct random_access_iterator_tag;
}}

namespace boost { namespace fusion { namespace detail
{
    template <typename Category>
    struct mpl_iterator_category;
}}}

#include <boost/fusion/support/traversal_tags_fwd.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <>
    struct mpl_iterator_category< ::boost::mpl::forward_iterator_tag>
    {
        typedef ::boost::fusion::forward_traversal_tag type;
    };

    template <>
    struct mpl_iterator_category< ::boost::mpl::bidirectional_iterator_tag>
    {
        typedef ::boost::fusion::bidirectional_traversal_tag type;
    };

    template <>
    struct mpl_iterator_category< ::boost::mpl::random_access_iterator_tag>
    {
        typedef ::boost::fusion::random_access_traversal_tag type;
    };

    template <>
    struct mpl_iterator_category< ::boost::fusion::forward_traversal_tag>
    {
        typedef ::boost::fusion::forward_traversal_tag type;
    };

    template <>
    struct mpl_iterator_category<
        ::boost::fusion::bidirectional_traversal_tag
    >
    {
        typedef ::boost::fusion::bidirectional_traversal_tag type;
    };

    template <>
    struct mpl_iterator_category<
        ::boost::fusion::random_access_traversal_tag
    >
    {
        typedef ::boost::fusion::random_access_traversal_tag type;
    };
}}}

#endif  // include guard

