/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_DETAIL_CATEGORY_OF_IMPL_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_DETAIL_CATEGORY_OF_IMPL_HPP

#include <boost/fusion/support/category_of_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct category_of_impl< ::boost::fusion::struct_tag>
    {
        template <typename Seq>
        struct apply
        {
            typedef ::boost::fusion::random_access_traversal_tag type;
        };
    };
}}}

#include <boost/fusion/adapted/struct/detail/extension.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct category_of_impl< ::boost::fusion::assoc_struct_tag>
    {
        template <typename Seq>
        struct apply
        {
            typedef ::boost::fusion::assoc_struct_category type;
        };
    };
}}}

#endif  // include guard

