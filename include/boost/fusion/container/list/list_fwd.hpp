/*============================================================================
    Copyright (c) 2014 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_LIST_FORWARD_10262014_0528)
#define FUSION_LIST_FORWARD_10262014_0528

#include <boost/fusion/container/list/cons_fwd.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_NO_CXX11_VARIADIC_TEMPLATES) || ( \
        defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES) \
    )
# if defined(BOOST_FUSION_HAS_VARIADIC_LIST)
#   undef BOOST_FUSION_HAS_VARIADIC_LIST
# endif
#else
# if !defined(BOOST_FUSION_HAS_VARIADIC_LIST)
#   define BOOST_FUSION_HAS_VARIADIC_LIST
# endif
#endif

#if defined(BOOST_FUSION_HAS_VARIADIC_LIST)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
namespace boost { namespace fusion
{
    template <typename ...T>
    struct list;
}}

#else

//////////////////////////////////////////////////////////////////////////////
// With no variadics, we will use the C++03 version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/list/detail/cpp03/list_fwd.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_LIST
#endif  // include guard

