/*============================================================================
    Copyright (c) 2001-2007 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_DETAIL_EXTENSION_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_DETAIL_EXTENSION_HPP

namespace boost { namespace fusion { namespace extension
{
    struct no_such_member;

    struct access
    {
        template <typename Seq, int N>
        struct struct_member;

        template <typename Seq, int N>
        struct adt_attribute_access;
    };

    template <typename T, int N, bool Const>
    struct adt_attribute_proxy;

    template <typename Seq, int N>
    struct struct_member_name;

    template <typename Seq>
    struct struct_size;

    template <typename Seq>
    struct struct_is_view;

    template <typename Seq, int N>
    struct struct_assoc_key;
}}}

#include <boost/fusion/iterator/special_tags_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/traversal_tags.hpp>

namespace boost { namespace fusion
{
    struct assoc_struct_category
      : ::boost::fusion::random_access_traversal_tag
      , ::boost::fusion::associative_tag
    {
    };
}}

#endif  // include guard

