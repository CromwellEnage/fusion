/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VECTOR_FORWARD_11052014_1626)
#define FUSION_VECTOR_FORWARD_11052014_1626

#include <boost/fusion/container/vector/detail/config.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
namespace boost { namespace fusion
{
    template <typename ...T>
    struct vector;
}}

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>

#define FUSION_VECTOR_N_ALIASES(z, N, d)                                    \
    template <typename ...T>                                                \
    using BOOST_PP_CAT(vector, N) = vector<T...>;

namespace boost { namespace fusion
{
    BOOST_PP_REPEAT(51, FUSION_VECTOR_N_ALIASES, ~)
}}

#undef FUSION_VECTOR_N_ALIASES

#else

//////////////////////////////////////////////////////////////////////////////
// With no variadics, we will use the C++03 version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/detail/cpp03/vector_fwd.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_VECTOR
#endif  // include guard

