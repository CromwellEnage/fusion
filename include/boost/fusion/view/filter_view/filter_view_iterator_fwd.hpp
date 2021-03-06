/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_VIEW_FILTER_VIEW_FILTER_VIEW_ITERATOR_FWD)
#define BOOST_FUSION_VIEW_FILTER_VIEW_FILTER_VIEW_ITERATOR_FWD

namespace boost { namespace fusion
{
    struct filter_view_iterator_tag;

    template <typename Category, typename First, typename Last, typename Pred>
    struct filter_iterator;
}}

#endif  // include guard

