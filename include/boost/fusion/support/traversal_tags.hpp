/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SUPPORT_TRAVERSAL_TAGS_HPP)
#define BOOST_FUSION_SUPPORT_TRAVERSAL_TAGS_HPP

#include <boost/fusion/support/traversal_tags_fwd.hpp>

namespace boost { namespace fusion
{
    struct incrementable_traversal_tag
    {
    };

    struct single_pass_traversal_tag : incrementable_traversal_tag
    {
    };

    struct forward_traversal_tag : single_pass_traversal_tag
    {
    };

    struct bidirectional_traversal_tag : forward_traversal_tag
    {
    };

    struct random_access_traversal_tag : bidirectional_traversal_tag
    {
    };

    struct associative_tag
    {
    };

    struct unbounded_tag
    {
    };
}}

#endif  // include guard

