/*============================================================================
    Copyright (c) 2014 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SET_FORWARD_11062014_1720)
#define FUSION_SET_FORWARD_11062014_1720

#include <boost/fusion/container/vector/detail/config.hpp>

#if !defined(BOOST_FUSION_HAS_VARIADIC_VECTOR) \
  || (defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES))
# if defined(BOOST_FUSION_HAS_VARIADIC_SET)
#   undef BOOST_FUSION_HAS_VARIADIC_SET
# endif
#else
# if !defined(BOOST_FUSION_HAS_VARIADIC_SET)
#   define BOOST_FUSION_HAS_VARIADIC_SET
# endif
#endif

#if defined(BOOST_FUSION_HAS_VARIADIC_SET)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
namespace boost { namespace fusion
{
    template <typename ...T>
    struct set;
}}

#else

//////////////////////////////////////////////////////////////////////////////
// With no variadics, we will use the C++03 version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/set/detail/cpp03/set_fwd.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_SET
#endif  // include guard

