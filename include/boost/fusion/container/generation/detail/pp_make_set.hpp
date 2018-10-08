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

    namespace result_of
    {
        template <BOOST_PP_ENUM_PARAMS(N, typename T)>
#define TEXT(z, n, text) , text
        struct make_set<
            BOOST_PP_ENUM_PARAMS(N, T)
            BOOST_PP_REPEAT_FROM_TO(
                BOOST_PP_DEC(N)
              , FUSION_MAX_SET_SIZE
              , TEXT
              , ::boost::fusion::void_
            )
        >
#undef TEXT
        {
            typedef ::boost::fusion::set<
                BOOST_PP_ENUM(N, BOOST_FUSION_AS_FUSION_ELEMENT, _)
            > type;
        };
    }

    template <BOOST_PP_ENUM_PARAMS(N, typename T)>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline set<
        BOOST_PP_ENUM(N, BOOST_FUSION_AS_FUSION_ELEMENT, _)
    >
    make_set(BOOST_PP_ENUM_BINARY_PARAMS(N, T, const& arg))
    {
        return ::boost::fusion::set<
            BOOST_PP_ENUM(N, BOOST_FUSION_AS_FUSION_ELEMENT, _)
        >(BOOST_PP_ENUM_PARAMS(N, arg));
    }

#undef N
#else   // !defined(BOOST_PP_IS_ITERATING)
#if !defined(FUSION_MAKE_SET_09162005_1125)
#define FUSION_MAKE_SET_09162005_1125

#include <boost/fusion/support/detail/as_fusion_element.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/preprocessor/iterate.hpp>
#include <boost/preprocessor/repetition/enum.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>
#include <boost/preprocessor/repetition/enum_binary_params.hpp>
#include <boost/preprocessor/repetition/enum_params_with_a_default.hpp>
#include <boost/preprocessor/repetition/repeat_from_to.hpp>

#if defined(BOOST_FUSION_DONT_USE_PREPROCESSED_FILES)
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 2, line: 0, output: "preprocessed/make_set" \
FUSION_MAX_SET_SIZE_STR".hpp")
#endif

/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 1)
#define FUSION_HASH #
#endif

namespace boost { namespace fusion
{
    namespace result_of
    {
        template <
            BOOST_PP_ENUM_PARAMS_WITH_A_DEFAULT(
                FUSION_MAX_VECTOR_SIZE, typename T, ::boost::fusion::void_
            )
          , typename Extra = ::boost::fusion::void_
        >
        struct make_set;

        template <>
        struct make_set<>
        {
            typedef ::boost::fusion::set<> type;
        };
    }

    // XXX:
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
FUSION_HASH else
    BOOST_CONSTEXPR
FUSION_HASH endif
#else
#if defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
#else
    BOOST_CONSTEXPR
#endif
#endif
    BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::set<> make_set()
    {
        return ::boost::fusion::set<>();
    }

#define BOOST_FUSION_AS_FUSION_ELEMENT(z, n, data)                           \
    typename ::boost::fusion::detail                                         \
    ::as_fusion_element<BOOST_PP_CAT(T, n)>::type

#define BOOST_PP_FILENAME_1 \
    <boost/fusion/container/generation/detail/pp_make_set.hpp>
#define BOOST_PP_ITERATION_LIMITS (1, FUSION_MAX_VECTOR_SIZE)
#include BOOST_PP_ITERATE()

#undef BOOST_FUSION_ELEMENT
#undef BOOST_FUSION_AS_ELEMENT

}}

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#undef FUSION_HASH
#pragma wave option(output: null)
#endif

#else
#include <boost/fusion/container/generation/detail/preprocessed/make_set.hpp>
#endif  // BOOST_FUSION_DONT_USE_PREPROCESSED_FILES
#endif  // include guard
#endif  // BOOST_PP_IS_ITERATING

