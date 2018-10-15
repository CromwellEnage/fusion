/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2017 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VECTOR_07072005_1244)
#define FUSION_VECTOR_07072005_1244

#include <boost/fusion/container/vector/vector_fwd.hpp>
#include <boost/fusion/container/vector/detail/cpp03/vector_n_chooser.hpp>
#include <boost/fusion/support/detail/enabler.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/at.hpp>
#include <boost/core/enable_if.hpp>
#include <boost/preprocessor/iterate.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>
#include <boost/preprocessor/repetition/enum_binary_params.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/add_lvalue_reference.hpp>
#include <boost/type_traits/is_base_of.hpp>
#include <boost/type_traits/remove_cv_ref.hpp>
#else
#include <type_traits>
#endif

#define FUSION_HASH #

#if BOOST_WORKAROUND(BOOST_MSVC, <= 1600)

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#define BOOST_FUSION_VECTOR_COPY_INIT()                                      \
/*
*/\
    ctor_helper(                                                             \
/*
*/\
        rhs                                                                  \
/*
*/\
      , typename ::boost::mpl::if_<                                          \
/*
*/\
FUSION_HASH if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)       \
/*
*/\
            ::boost::is_base_of<vector, Sequence>                            \
/*
*/\
FUSION_HASH else                                                             \
/*
*/\
            ::std::is_base_of<vector, Sequence>                              \
/*
*/\
FUSION_HASH endif                                                            \
/*
*/\
          , ::boost::mpl::true_                                              \
/*
*/\
          , ::boost::mpl::false_                                             \
/*
*/\
        >::type()                                                            \
/*
*/\
    )
#elif defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#define BOOST_FUSION_VECTOR_COPY_INIT()                                      \
    ctor_helper(                                                             \
        rhs                                                                  \
      , typename ::boost::mpl::if_<                                          \
            ::boost::is_base_of<vector, Sequence>                            \
          , ::boost::mpl::true_                                              \
          , ::boost::mpl::false_                                             \
        >::type()                                                            \
    )
#else
#define BOOST_FUSION_VECTOR_COPY_INIT()                                      \
    ctor_helper(                                                             \
        rhs                                                                  \
      , typename ::boost::mpl::if_<                                          \
            ::std::is_base_of<vector, Sequence>                              \
          , ::boost::mpl::true_                                              \
          , ::boost::mpl::false_                                             \
        >::type()                                                            \
    )
#endif  // preprocess file, or BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS

#define BOOST_FUSION_VECTOR_CTOR_HELPER()                                    \
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED                                 \
    static vector_n const&                                                   \
    ctor_helper(vector const& rhs, ::boost::mpl::true_)                      \
    {                                                                        \
        return rhs.vec;                                                      \
    }                                                                        \
    template <typename T>                                                    \
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED                                 \
    static T const& ctor_helper(T const& rhs, ::boost::mpl::false_)          \
    {                                                                        \
        return rhs;                                                          \
    }

#else   // !BOOST_WORKAROUND(BOOST_MSVC, <= 1600)

#define BOOST_FUSION_VECTOR_COPY_INIT() rhs

#define BOOST_FUSION_VECTOR_CTOR_HELPER()

#endif

#if defined(BOOST_FUSION_DONT_USE_PREPROCESSED_FILES)
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 2, line: 0, output: "preprocessed/vvector" \
FUSION_MAX_VECTOR_SIZE_STR ".hpp")
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
    template <BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, typename T)>
    struct vector :
        ::boost::fusion::sequence_base<
            ::boost::fusion::vector<
                BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, T)
            >
        >
    {
     private:
        typedef typename ::boost::fusion::detail::vector_n_chooser<
            BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, T)
        >::type vector_n;

        template <BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, typename U)>
        friend struct vector;

     public:
        typedef typename vector_n::types types;
        typedef typename vector_n::fusion_tag fusion_tag;
        typedef typename vector_n::tag tag;
        typedef typename vector_n::size size;
        typedef typename vector_n::category category;
        typedef typename vector_n::is_view is_view;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector() : vec()
        {
        }

        template <BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, typename U)>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector(
            ::boost::fusion::vector<
                BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, U)
            > const& rhs
        ) : vec(rhs.vec)
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector(vector const& rhs) : vec(rhs.vec)
        {
        }

        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        vector(
            Sequence const& rhs
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
              , ::boost::fusion::detail::enabler_
            >::type = detail::enabler
        ) : vec(BOOST_FUSION_VECTOR_COPY_INIT())
        {
        }

        //  Expand a couple of forwarding constructors for arguments
        //  of type (T0), (T0, T1), (T0, T1, T2) etc. Example:
        //
        //  vector(
        //      typename ::boost::fusion::detail::call_param<T0>::type arg0
        //    , typename ::boost::fusion::detail::call_param<T1>::type arg1
        //  ) : vec(arg0, arg1)
        //  {
        //  }
#include <boost/fusion/container/vector/detail/cpp03/vector_forward_ctor.hpp>

        template <BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, typename U)>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(
            ::boost::fusion::vector<
                BOOST_PP_ENUM_PARAMS(FUSION_MAX_VECTOR_SIZE, U)
            > const& rhs
        )
        {
            this->vec = rhs.vec;
            return *this;
        }

        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector& operator=(T const& rhs)
        {
            this->vec = rhs;
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector& operator=(vector const& rhs)
        {
            this->vec = rhs.vec;
            return *this;
        }

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#endif
#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES) || \
    (defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES))
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector(vector&& rhs) : vec(::std::forward<vector_n>(rhs.vec))
        {
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector& operator=(vector&& rhs)
        {
            this->vec = ::std::forward<vector_n>(rhs.vec);
            return *this;
        }

        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if defined(BOOST_MSVC) && (BOOST_MSVC >= 1700) && \
(BOOST_MSVC < 1800)
        typename disable_if_c<
FUSION_HASH else
        typename ::boost::disable_if_c<
FUSION_HASH endif
FUSION_HASH if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_same<
                typename ::boost::remove_cv_ref<T>::type
FUSION_HASH else
            ::std::is_same<
                // TODO:
                // replace the statements below with ::std::remove_cvref
                // if C++20 type_traits is detectable.
                typename ::std::remove_cv<
                    typename ::std::remove_reference<T>::type
                >::type
FUSION_HASH endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS
#else
#if defined(BOOST_MSVC) && (BOOST_MSVC >= 1700) && (BOOST_MSVC < 1800)
        typename disable_if_c<
#else
        typename ::boost::disable_if_c<
#endif
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_same<
                typename ::boost::remove_cv_ref<T>::type
#else
            ::std::is_same<
                // TODO:
                // replace the statements below with ::std::remove_cvref
                // if C++20 type_traits is detectable.
                typename ::std::remove_cv<
                    typename ::std::remove_reference<T>::type
                >::type
#endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS
#endif  // preprocessed file creation
              , vector
            >::value
          , vector&
        >::type
        operator=(T&& rhs)
        {
            this->vec = BOOST_FUSION_FWD_ELEM(T, rhs);
            return *this;
        }
#endif  // rvalue reference support or preprocessed-file creation
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH endif
#endif

        template <int N>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
FUSION_HASH else
        typename ::std::add_lvalue_reference<
FUSION_HASH endif
#elif defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
#else
        typename ::std::add_lvalue_reference<
#endif
            typename ::boost::mpl::at_c<types, N>::type
        >::type
        at_impl(::boost::mpl::int_<N> index)
        {
            return this->vec.at_impl(index);
        }

        template <int N>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
FUSION_HASH else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
FUSION_HASH endif
#elif defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
#else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
#endif
                typename ::boost::mpl::at_c<types, N>::type
            >::type
        >::type
        at_impl(::boost::mpl::int_<N> index) const
        {
            return this->vec.at_impl(index);
        }

        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
FUSION_HASH else
        typename ::std::add_lvalue_reference<
FUSION_HASH endif
#elif defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
#else
        typename ::std::add_lvalue_reference<
#endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->vec.at_impl(::boost::mpl::int_<I::value>());
        }

        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
FUSION_HASH else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
FUSION_HASH endif
#elif defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
#else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
#endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->vec.at_impl(::boost::mpl::int_<I::value>());
        }

     private:
        BOOST_FUSION_VECTOR_CTOR_HELPER()
        vector_n vec;
    };
}}

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(output: null)
#endif

#else
#include <boost/fusion/container/vector/detail/cpp03/preprocessed/vector.hpp>
#endif  // BOOST_FUSION_DONT_USE_PREPROCESSED_FILES

#undef FUSION_HASH
#endif  // include guard

