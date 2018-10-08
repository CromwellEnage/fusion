/*============================================================================
    Copyright (c) 2014 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VECTOR40_11052014_2316)
#define FUSION_VECTOR40_11052014_2316

#include <boost/fusion/container/vector/detail/config.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/vector_fwd.hpp>
#include <boost/fusion/container/vector/vector.hpp>

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/detail/cpp03/vector40.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_VECTOR
#endif  // include guard

