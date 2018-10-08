/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_OF_IMPL_07202005_0900)
#define FUSION_VALUE_OF_IMPL_07202005_0900

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::reverse_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::value_of<
                typename ::boost::fusion::result_of
                ::prior<typename Iterator::first_type>::type
            >::type type;
        };
    };
}}}

#endif  // include guard

