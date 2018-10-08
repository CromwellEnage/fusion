/*============================================================================
    Copyright (c) 2014 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_AT_IMPL_16122014_1641)
#define FUSION_VALUE_AT_IMPL_16122014_1641

#include <boost/fusion/container/vector/detail/config.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////

namespace boost { namespace fusion { namespace vector_detail
{
    template < ::std::size_t I, typename T>
    struct store;

    template < ::std::size_t N, typename U>
    static BOOST_FUSION_GPU_ENABLED
    U
    value_at_impl(
        ::boost::fusion::vector_detail::store<N, U> const volatile*
    );
}}}

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_tag_fwd.hpp>
#include <boost/type_traits/declval.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::vector_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef decltype(
                ::boost::fusion::vector_detail::value_at_impl<N::value>(
                    ::boost::declval<Sequence*>()
                )
            ) type;
        };
    };
}}}

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/detail/cpp03/value_at_impl.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_VECTOR
#endif  // include guard

