/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SEQUENCE_FACADE_09252006_1044)
#define FUSION_SEQUENCE_FACADE_09252006_1044

#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion
{
    template <
        typename Derived
      , typename Category
      , typename IsView = ::boost::mpl::false_
    >
    struct sequence_facade : ::boost::fusion::sequence_base<Derived>
    {
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::fusion::sequence_facade_tag fusion_tag;
        typedef Derived derived_type;
        typedef Category category;
        typedef IsView is_view;
        typedef ::boost::mpl::false_ is_segmented;
    };
}}

#endif  // include guard

