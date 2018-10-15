/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if defined(BOOST_PP_IS_ITERATING)
//////////////////////////////////////////////////////////////////////////////
//
//  Preprocessor vertical repetition code
//
//////////////////////////////////////////////////////////////////////////////

#define N BOOST_PP_ITERATION()

    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if N == 1
    explicit
#endif
    map(
        BOOST_PP_ENUM_BINARY_PARAMS(
            N, typename ::boost::fusion::detail::call_param<T, >::type arg
        )
    ) : data(BOOST_PP_ENUM_PARAMS(N, arg))
    {
    }

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#endif
#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES) || \
    (defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES))
    template <BOOST_PP_ENUM_PARAMS(N, typename U)>
    BOOST_FUSION_GPU_ENABLED
#if N == 1
    explicit
#endif
    map(
        BOOST_PP_ENUM_BINARY_PARAMS(N, U, && arg)
#if N == 1
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if defined(BOOST_MSVC) && (BOOST_MSVC >= 1700) && \
(BOOST_MSVC < 1800)
      , typename enable_if<is_same<U0, T0> >::type* = BOOST_TTI_DETAIL_NULLPTR
FUSION_HASH endif
#elif defined(BOOST_MSVC) && (BOOST_MSVC >= 1700) && (BOOST_MSVC < 1800)
        // workaround for MSVC 11
      , typename enable_if<is_same<U0, T0> >::type* = BOOST_TTI_DETAIL_NULLPTR
#endif  // preprocessed file creation, or workaround for MSVC 11
#endif  // N == 1
    ) : data(BOOST_PP_ENUM(N, FUSION_FORWARD_CTOR_FORWARD, arg))
    {
    }
#endif  // rvalue reference support or preprocessed-file creation
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH endif
#endif

#undef N
#else   // !defined(BOOST_PP_IS_ITERATING)
#if !defined(FUSION_MAP_FORWARD_CTOR_07222005_0106)
#define FUSION_MAP_FORWARD_CTOR_07222005_0106

#define FUSION_FORWARD_CTOR_FORWARD(z, n, arg) \
    BOOST_FUSION_FWD_ELEM(BOOST_PP_CAT(U, n), BOOST_PP_CAT(arg, n))
#define BOOST_PP_FILENAME_1 \
    <boost/fusion/container/map/detail/cpp03/map_forward_ctor.hpp>
#define BOOST_PP_ITERATION_LIMITS (1, FUSION_MAX_MAP_SIZE)
#include BOOST_PP_ITERATE()

#undef FUSION_FORWARD_CTOR_FORWARD
#endif  // include guard
#endif  // defined(BOOST_PP_IS_ITERATING)

