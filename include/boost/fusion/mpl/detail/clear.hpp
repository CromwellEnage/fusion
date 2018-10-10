/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CLEAR_10022005_1442)
#define FUSION_CLEAR_10022005_1442

#include <boost/fusion/container/list/list_fwd.hpp>
#include <boost/fusion/container/vector/vector_fwd.hpp>
#include <boost/fusion/container/deque/deque_fwd.hpp>
#include <boost/fusion/container/set/set_tag_fwd.hpp>
#include <boost/fusion/container/set/set_fwd.hpp>
#include <boost/fusion/container/map/map_tag_fwd.hpp>
#include <boost/fusion/container/map/map_fwd.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Tag>
    struct clear;

    template <>
    struct clear< ::boost::fusion::cons_tag> :
        ::boost::mpl::identity< ::boost::fusion::list<> >
    {
    };

    template <>
    struct clear< ::boost::fusion::map_tag> :
        ::boost::mpl::identity< ::boost::fusion::map<> >
    {
    };

    template <>
    struct clear< ::boost::fusion::set_tag> :
        ::boost::mpl::identity< ::boost::fusion::set<> >
    {
    };

    template <>
    struct clear< ::boost::fusion::vector_tag> :
        ::boost::mpl::identity< ::boost::fusion::vector<> >
    {
    };

    template <>
    struct clear< ::boost::fusion::deque_tag> :
        ::boost::mpl::identity< ::boost::fusion::deque<> >
    {
    };
}}}

#endif  // include guard

