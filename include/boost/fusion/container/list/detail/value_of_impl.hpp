/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_OF_IMPL_07172005_0838)
#define FUSION_VALUE_OF_IMPL_07172005_0838

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/list/cons_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::cons_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::cons_type cons_type;
            typedef typename cons_type::car_type type;
        };
    };
}}}

#endif  // include guard

