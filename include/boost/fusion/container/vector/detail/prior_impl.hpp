/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_PRIOR_IMPL_05042005_1145)
#define FUSION_PRIOR_IMPL_05042005_1145

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct prior_impl< ::boost::fusion::vector_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::vector vector;
            typedef typename Iterator::index index;
            typedef ::boost::fusion::vector_iterator<
                vector
              , (index::value - 1)
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.vec);
            }
        };
    };
}}}

#endif  // include guard

