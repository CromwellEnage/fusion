/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ADVANCE_IMPL_09172005_1156)
#define FUSION_ADVANCE_IMPL_09172005_1156

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct advance_impl< ::boost::fusion::vector_iterator_tag>
    {
        template <typename Iterator, typename N>
        struct apply
        {
            typedef typename Iterator::index index;
            typedef typename Iterator::vector vector;
            typedef ::boost::fusion::vector_iterator<
                vector
              , (index::value + N::value)
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

