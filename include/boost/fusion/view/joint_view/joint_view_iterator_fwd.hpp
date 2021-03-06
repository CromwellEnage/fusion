/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_VIEW_JOINT_VIEW_JOINT_VIEW_ITERATOR_FWD_HPP)
#define BOOST_FUSION_VIEW_JOINT_VIEW_JOINT_VIEW_ITERATOR_FWD_HPP

namespace boost { namespace fusion
{
    struct joint_view_iterator_tag;

    template <
        typename Category
      , typename First
      , typename Last
      , typename Concat
    >
    struct joint_view_iterator;
}}

#endif  // include guard

