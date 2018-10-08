/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_OF_IMPL_05052005_1128)
#define FUSION_VALUE_OF_IMPL_05052005_1128

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_iterator_fwd.hpp>
#include <boost/fusion/container/vector/detail/value_at_impl.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::vector_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::vector vector;
            typedef typename Iterator::index index;
            typedef typename ::boost::fusion::extension::value_at_impl<
                ::boost::fusion::vector_tag
            >::template apply<vector, index>::type type;
        };
    };
}}}

#endif  // include guard

