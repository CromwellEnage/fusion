/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_LIST_CONS_ITERATOR_FWD_HPP)
#define BOOST_FUSION_CONTAINER_LIST_CONS_ITERATOR_FWD_HPP

namespace boost { namespace fusion
{
    struct cons_iterator_tag;
}}

#include <boost/fusion/container/list/cons_fwd.hpp>

namespace boost { namespace fusion
{
    template <typename Cons = ::boost::fusion::nil_>
    struct cons_iterator;
}}

#endif  // include guard

