/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_EQUAL_TO_IMPL_05052005_1215)
#define FUSION_EQUAL_TO_IMPL_05052005_1215

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct equal_to_impl< ::boost::fusion::vector_iterator_tag>
    {
        template <typename I1, typename I2>
        struct apply :
            ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<typename I1::identity, typename I2::identity>
#else
                ::std::is_same<typename I1::identity, typename I2::identity>
#endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >
        {
        };
    };
}}}

#endif  // include guard

