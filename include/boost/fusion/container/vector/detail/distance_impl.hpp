/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DISTANCE_IMPL_09172005_0751)
#define FUSION_DISTANCE_IMPL_09172005_0751

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/minus.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct distance_impl< ::boost::fusion::vector_iterator_tag>
    {
        template <typename First, typename Last>
        struct apply :
            ::boost::mpl::minus<typename Last::index, typename First::index>
        {
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static typename ::boost::mpl
            ::minus<typename Last::index, typename First::index>::type
            call(First const&, Last const&)
            {
                typedef typename ::boost::mpl::minus<
                    typename Last::index
                  , typename First::index
                >::type result;
                return result();
            }
        };
    };
}}}

#endif  // include guard

