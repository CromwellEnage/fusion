/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_DEQUE_26112006_1649)
#define BOOST_FUSION_DEQUE_26112006_1649

#include <boost/fusion/container/deque/deque_fwd.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_DEQUE)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/deque/detail/keyed_element.hpp>
#include <boost/fusion/container/deque/detail/deque_keyed_values.hpp>
#include <boost/fusion/container/deque/detail/is_sequence_impl.hpp>
#include <boost/fusion/container/deque/detail/begin_impl.hpp>
#include <boost/fusion/container/deque/detail/end_impl.hpp>
#include <boost/fusion/container/deque/detail/value_at_impl.hpp>
#include <boost/fusion/container/deque/detail/at_impl.hpp>
#include <boost/fusion/container/deque/front_extended_deque.hpp>
#include <boost/fusion/container/deque/back_extended_deque.hpp>
#include <boost/fusion/sequence/intrinsic/empty.hpp>
#include <boost/fusion/support/detail/enabler.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/if.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_convertible.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename ...Elements>
    struct deque : ::boost::fusion::detail::nil_keyed_element
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
                typename ::boost::mpl::if_<
                    ::boost::fusion::traits::is_sequence<Sequence>
                  , ::boost::fusion::result_of::empty<Sequence>
                  , ::boost::mpl::false_
                >::type
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

    template <typename Head, typename ...Tail>
    struct deque<Head, Tail...>
      : ::boost::fusion::detail::deque_keyed_values<Head, Tail...>::type
      , ::boost::fusion::sequence_base<
            ::boost::fusion::deque<Head, Tail...>
        >
    {
        typedef ::boost::fusion::deque_tag fusion_tag;
        typedef ::boost::fusion::bidirectional_traversal_tag category;
        typedef typename ::boost::fusion::detail
        ::deque_keyed_values<Head, Tail...>::type base;
        typedef ::boost::mpl::int_<(sizeof ...(Tail) + 1)> size;
        typedef ::boost::mpl::int_<size::value> next_up;
        typedef ::boost::mpl::int_<-1> next_down;
        typedef ::boost::mpl::false_ is_view;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque()
        {
        }

        template <
            typename Head_
          , typename ...Tail_
          , typename = typename ::boost::enable_if<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Head_, Head>
#else
                    ::std::is_convertible<Head_, Head>
#endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type
        >
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque(::boost::fusion::deque<Head_, Tail_...> const& seq) : base(seq)
        {
        }

        template <
            typename Head_
          , typename ...Tail_
          , typename = typename ::boost::enable_if<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Head_, Head>
#else
                    ::std::is_convertible<Head_, Head>
#endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type
        >
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque(::boost::fusion::deque<Head_, Tail_...>& seq) : base(seq)
        {
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <
            typename Head_
          , typename ...Tail_
          , typename = typename ::boost::enable_if<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Head_, Head>
#else
                    ::std::is_convertible<Head_, Head>
#endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type
        >
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque(::boost::fusion::deque<Head_, Tail_...>&& seq) :
            base(
                ::std::forward< ::boost::fusion::deque<Head_, Tail_...> >(seq)
            )
        {
        }
#endif  // BOOST_NO_CXX11_RVALUE_REFERENCES

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque(deque const& seq) : base(seq)
        {
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque(deque&& seq) : base(::std::forward<deque>(seq))
        {
        }
#endif

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit deque(
            typename ::boost::fusion::detail::call_param<Head>::type head
          , typename ::boost::fusion::detail::call_param<Tail>::type... tail
        ) : base(
                ::boost::fusion::detail::deque_keyed_values<Head, Tail...>
                ::construct(head, tail...)
            )
        {
        }

#if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <
            typename Head_
          , typename ...Tail_
          , typename = typename ::boost::enable_if<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Head_, Head>
#else
                    ::std::is_convertible<Head_, Head>
#endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type
        >
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit deque(Head_ const& head, Tail_ const&... tail) :
            base(
                ::boost::fusion::detail::deque_keyed_values<Head_, Tail_...>
                ::construct(head, tail...)
            )
        {
        }
#else   // !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <
            typename Head_
          , typename ...Tail_
          , typename = typename ::boost::enable_if<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Head_, Head>
#else
                    ::std::is_convertible<Head_, Head>
#endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type
        >
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit deque(Head_&& head, Tail_&&... tail) :
            base(
                ::boost::fusion::detail::deque_keyed_values<Head, Tail...>
                ::forward_(
                    BOOST_FUSION_FWD_ELEM(Head_, head)
                  , BOOST_FUSION_FWD_ELEM(Tail_, tail)...
                )
            )
        {
        }
#endif  // BOOST_NO_CXX11_RVALUE_REFERENCES

        template <typename Sequence>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit deque(
            Sequence const& seq
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Sequence, Head>
#else
                    ::std::is_convertible<Sequence, Head>
#endif
                  , ::boost::mpl::false_
                  , ::boost::fusion::traits::is_sequence<Sequence>
                >::type
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) : base(base::from_iterator(::boost::fusion::begin(seq)))
        {
        }

        template <typename ...Elements>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque& operator=(::boost::fusion::deque<Elements...> const& rhs)
        {
            base::operator=(rhs);
            return *this;
        }

        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque& operator=(T const& rhs)
        {
            base::operator=(rhs);
            return *this;
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque& operator=(T&& rhs)
        {
            base::operator=(BOOST_FUSION_FWD_ELEM(T, rhs));
            return *this;
        }
#endif
    };
}}

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/deque/detail/cpp03/deque.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_DEQUE
#endif  // include guard

