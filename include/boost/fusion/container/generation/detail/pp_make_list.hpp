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
        struct make_list<
            BOOST_PP_ENUM_PARAMS(N, T)
            BOOST_PP_REPEAT_FROM_TO(
                BOOST_PP_DEC(N)
              , FUSION_MAX_LIST_SIZE
              , TEXT
              , ::boost::fusion::void_
            )
        >
#undef TEXT
        {
            typedef ::boost::fusion::list<
                BOOST_PP_ENUM(N, BOOST_FUSION_AS_FUSION_ELEMENT, _)
            > type;
        };
    }

    template <BOOST_PP_ENUM_PARAMS(N, typename T)>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        BOOST_PP_ENUM(N, BOOST_FUSION_AS_FUSION_ELEMENT, _)
    >
    make_list(BOOST_PP_ENUM_BINARY_PARAMS(N, T, const& arg))
    {
        return ::boost::fusion::list<
            BOOST_PP_ENUM(N, BOOST_FUSION_AS_FUSION_ELEMENT, _)
        >(BOOST_PP_ENUM_PARAMS(N, arg));
    }

#undef N
#else   // !defined(BOOST_PP_IS_ITERATING)
#if !defined(FUSION_PP_MAKE_LIST_07192005_1239)
#define FUSION_PP_MAKE_LIST_07192005_1239

#include <boost/fusion/support/detail/as_fusion_element.hpp>
#include <boost/preprocessor/iterate.hpp>
#include <boost/preprocessor/repetition/enum.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>
#include <boost/preprocessor/repetition/enum_binary_params.hpp>
#include <boost/preprocessor/repetition/enum_params_with_a_default.hpp>
#include <boost/preprocessor/repetition/repeat_from_to.hpp>

#if defined(BOOST_FUSION_DONT_USE_PREPROCESSED_FILES)
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 2, line: 0, output: "preprocessed/make_list" \
FUSION_MAX_LIST_SIZE_STR".hpp")
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
#endif

namespace boost { namespace fusion
{
    namespace result_of
    {
        template <
            BOOST_PP_ENUM_PARAMS_WITH_A_DEFAULT(
                FUSION_MAX_LIST_SIZE, typename T, ::boost::fusion::void_
            )
          , typename Extra = ::boost::fusion::void_
        >
        struct make_list;

        template <>
        struct make_list<>
        {
            typedef ::boost::fusion::list<> type;
        };
    }

    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<> make_list()
    {
        return ::boost::fusion::list<>();
    }

#define BOOST_FUSION_AS_FUSION_ELEMENT(z, n, data)                           \
    typename ::boost::fusion::detail                                         \
    ::as_fusion_element<BOOST_PP_CAT(T, n)>::type

#define BOOST_PP_FILENAME_1 \
    <boost/fusion/container/generation/detail/pp_make_list.hpp>
#define BOOST_PP_ITERATION_LIMITS (1, FUSION_MAX_LIST_SIZE)
#include BOOST_PP_ITERATE()

#undef BOOST_FUSION_AS_FUSION_ELEMENT

}}

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(output: null)
#endif

#else
#include <boost/fusion/container/generation/detail/preprocessed/make_list.hpp>
#endif  // BOOST_FUSION_DONT_USE_PREPROCESSED_FILES
#endif  // include guard
#endif  // defined(BOOST_PP_IS_ITERATING)

