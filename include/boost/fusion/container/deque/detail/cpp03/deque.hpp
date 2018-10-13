/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_PP_FUSION_DEQUE_26112006_1649)
#define BOOST_PP_FUSION_DEQUE_26112006_1649

#if defined(BOOST_FUSION_HAS_VARIADIC_DEQUE)
#error "C++03 only! This file should not have been included"
#endif

#include <boost/fusion/container/deque/detail/cpp03/limits.hpp>
#include <boost/fusion/container/deque/detail/cpp03/deque_keyed_values.hpp>
#include <boost/fusion/container/deque/detail/cpp03/deque_initial_size.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/container/deque/detail/keyed_element.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>
#include <boost/preprocessor/repetition/enum_binary_params.hpp>
#include <boost/preprocessor/repetition/enum_params_with_a_default.hpp>
#include <boost/type_traits/is_convertible.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_reference.hpp>

#include <boost/fusion/container/deque/deque_fwd.hpp>
#include <boost/fusion/container/deque/detail/value_at_impl.hpp>
#include <boost/fusion/container/deque/detail/at_impl.hpp>
#include <boost/fusion/container/deque/detail/begin_impl.hpp>
#include <boost/fusion/container/deque/detail/end_impl.hpp>
#include <boost/fusion/container/deque/detail/is_sequence_impl.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/mpl/bool.hpp>

#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/fusion/support/detail/enabler.hpp>
#include <boost/core/enable_if.hpp>

#if !defined(BOOST_FUSION_DONT_USE_PREPROCESSED_FILES)
#include <boost/fusion/container/deque/detail/cpp03/preprocessed/deque.hpp>
#else
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 2, line: 0, output: "preprocessed/deque" \
FUSION_MAX_DEQUE_SIZE_STR ".hpp")
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

#define FUSION_HASH #

namespace boost { namespace fusion
{
    template <BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, typename T)>
    struct deque :
        ::boost::fusion::detail::deque_keyed_values<
            BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, T)
        >::type
      , ::boost::fusion::sequence_base<
            ::boost::fusion::deque<
                BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, T)
            >
        >
    {
        typedef ::boost::fusion::deque_tag fusion_tag;
        typedef ::boost::fusion::bidirectional_traversal_tag category;
        typedef typename ::boost::fusion::detail::deque_keyed_values<
            BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, T)
        >::type base;
        typedef typename ::boost::fusion::detail::deque_initial_size<
            BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, T)
        >::type size;
        typedef ::boost::mpl::int_<size::value> next_up;
        typedef ::boost::mpl::int_<-1> next_down;
        typedef ::boost::mpl::false_ is_view;

#include <boost/fusion/container/deque/detail/cpp03/deque_forward_ctor.hpp>

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque()
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit deque(
            typename ::boost::fusion::detail::call_param<T0>::type t0
        ) : base(t0, detail::nil_keyed_element())
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit deque(deque const& rhs) : base(rhs)
        {
        }

        template <BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, typename U)>
        BOOST_FUSION_GPU_ENABLED
        deque(
            ::boost::fusion::deque<
                BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, U)
            > const& seq
        ) : base(seq)
        {
        }

        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        deque(
            Sequence const& seq
          , typename ::boost::disable_if<
                ::boost::is_convertible<Sequence, T0>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) : base(base::from_iterator(::boost::fusion::begin(seq)))
        {
        }

        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque& operator=(T const& rhs)
        {
            base::operator=(rhs);
            return *this;
        }

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#endif
#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES) || \
    (defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES))
        template <typename T0_>
        BOOST_FUSION_GPU_ENABLED
        explicit deque(
            T0_&& t0
          , typename ::boost::enable_if<
                ::boost::is_convertible<T0_, T0>
              , detail::enabler_
            >::type = detail::enabler
          , typename ::boost::disable_if_c<
                ::boost::is_same<
                    deque const
                  , typename ::boost::remove_reference<T0_>::type const
                >::value
              , detail::enabler_
            >::type = detail::enabler
        ) : base(
                BOOST_FUSION_FWD_ELEM(T0_, t0)
              , ::boost::fusion::detail::nil_keyed_element()
            )
        {
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit deque(deque&& rhs) : base(::std::forward<deque>(rhs))
        {
        }

        template<BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, typename U)>
        BOOST_FUSION_GPU_ENABLED
        deque(
            ::boost::fusion::deque<
                BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, U)
            >&& seq
          , typename ::boost::disable_if<
                ::boost::is_convertible<
                    ::boost::fusion::deque<
                        BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, U)
                    >
                  , T0
                >
              , ::boost::fusion::detail::enabler_
            >::type = detail::enabler
        ) : base(
                ::std::forward<
                    ::boost::fusion::deque<
                        BOOST_PP_ENUM_PARAMS(FUSION_MAX_DEQUE_SIZE, U)
                    >
                >(seq)
            )
        {
        }

        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque& operator=(T&& rhs)
        {
            base::operator=(BOOST_FUSION_FWD_ELEM(T, rhs));
            return *this;
        }

        // This copy op= is required because move ctor deletes copy op=.
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque& operator=(deque const& rhs)
        {
            base::operator=(static_cast<base const&>(rhs));
            return *this;
        }
#endif
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
FUSION_HASH endif
#endif
    };

    template <>
    struct ::boost::fusion::deque<> :
        ::boost::fusion::detail::nil_keyed_element
    {
        typedef ::boost::fusion::deque_tag fusion_tag;
        typedef ::boost::fusion::bidirectional_traversal_tag category;
        typedef ::boost::mpl::int_<0> size;
        typedef ::boost::mpl::int_<0> next_up;
        typedef ::boost::mpl::int_<-1> next_down;
        typedef ::boost::mpl::false_ is_view;

        template <typename Sequence>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque(
            Sequence const&
          , typename ::boost::enable_if<
                ::boost::mpl::and_<
                    ::boost::fusion::traits::is_sequence<Sequence>
                  , ::boost::fusion::result_of::empty<Sequence>
                >
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) BOOST_NOEXCEPT
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque() BOOST_NOEXCEPT
        {
        }
    };
}}

#undef FUSION_HASH

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(output: null)
#endif

#endif // BOOST_FUSION_DONT_USE_PREPROCESSED_FILES

#endif  // include guard

