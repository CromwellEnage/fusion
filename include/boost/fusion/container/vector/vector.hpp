/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VECTOR_11052014_1625)
#define FUSION_VECTOR_11052014_1625

#include <boost/fusion/container/vector/detail/config.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
namespace boost { namespace fusion { namespace vector_detail
{
    struct each_elem
    {
    };

    template <typename I, typename ...T>
    struct vector_data;
}}}

#include <boost/type_traits/integral_constant.hpp>
#include <cstddef>

namespace boost { namespace fusion { namespace vector_detail
{
    template <
        typename This
      , typename T
      , typename T_
      , ::std::size_t Size
      , bool IsSeq
    >
    struct can_convert_impl : ::boost::false_type
    {
    };

    template <
        typename This
      , typename T
      , typename Sequence
      , ::std::size_t Size
    >
    struct can_convert_impl<This, T, Sequence, Size, true> :
        ::boost::true_type
    {
    };

    template <typename T, bool IsSeq, ::std::size_t Size>
    struct is_longer_sequence_impl : ::boost::false_type
    {
    };
}}}

#include <boost/fusion/container/vector/detail/value_at_impl.hpp>
#include <boost/mpl/int.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_convertible.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace vector_detail
{
    template <typename This, typename Sequence, typename T>
    struct can_convert_impl<This, Sequence, T, 1, true> :
        ::boost::integral_constant<
            bool
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
          , !::boost::is_convertible<
#else
          , !::std::is_convertible<
#endif
                Sequence
              , typename ::boost::fusion::extension::value_at_impl<
                    ::boost::fusion::vector_tag
                >::template apply<This, ::boost::mpl::int_<0> >::type
            >::value
        >
    {
    };
}}}

#include <boost/fusion/support/is_sequence.hpp>

namespace boost { namespace fusion { namespace vector_detail
{
    template <typename This, typename T, typename T_, ::std::size_t Size>
    struct can_convert :
        ::boost::fusion::vector_detail::can_convert_impl<
            This
          , T
          , T_
          , Size
          , ::boost::fusion::traits::is_sequence<T_>::value
        >
    {
    };
}}}

#include <boost/fusion/sequence/intrinsic/size.hpp>

namespace boost { namespace fusion { namespace vector_detail
{
    template <typename Sequence, ::std::size_t Size>
    struct is_longer_sequence_impl<Sequence, true, Size> :
        ::boost::integral_constant<
            bool
          , (::boost::fusion::result_of::size<Sequence>::value >= Size)
        >
    {
    };

    template <typename T, ::std::size_t Size>
    struct is_longer_sequence :
        ::boost::fusion::vector_detail::is_longer_sequence_impl<
            T
          , ::boost::fusion::traits::is_sequence<T>::value
          , Size
        >
    {
    };
}}}

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/iterator/deref.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_reference.hpp>
#endif

namespace boost { namespace fusion {
namespace vector_detail { namespace result_of
{
    template <typename Sequence, int N>
    struct forward_at_c :
        ::boost::fusion::result_of::deref<
            typename ::boost::fusion::result_of::advance_c<
                typename ::boost::fusion::result_of::begin<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    typename ::boost::remove_reference<Sequence>::type
#else
                    typename ::std::remove_reference<Sequence>::type
#endif
                >::type
              , N
            >::type
        >
    {
    };
}}}}

#include <utility>

namespace boost { namespace fusion { namespace vector_detail
{
    // forward_at_c allows to access Nth element even if ForwardSequence
    // since fusion::at_c requires RandomAccessSequence.

    template <int N, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::vector_detail::result_of
    ::forward_at_c<Sequence, N>::type
    forward_at_c(Sequence&& seq)
    {
        typedef typename ::boost::fusion::vector_detail::result_of
        ::forward_at_c<Sequence, N>::type result;
        return ::std::forward<result>(
            *::boost::fusion::advance_c<N>(::boost::fusion::begin(seq))
        );
    }
}}}

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_base_of.hpp>
#endif

namespace boost { namespace fusion { namespace vector_detail
{
    // Object proxy since preserve object order
    template < ::std::size_t, typename T>
    struct store
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        store() : elem() // value-initialized explicitly
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        store(store const& rhs) : elem(rhs.elem)
        {
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        store& operator=(store const& rhs)
        {
            this->elem = rhs.elem;
            return *this;
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        store(store&& rhs) : elem(static_cast<T&&>(rhs.elem))
        {
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        store& operator=(store&& rhs)
        {
            this->elem = static_cast<T&&>(rhs.elem);
            return *this;
        }

        template <
            typename U
          , typename = typename ::boost::disable_if<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_base_of<
#else
                    ::std::is_base_of<
#endif
                        store
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                      , typename ::boost::remove_reference<U>::type
#else
                      , typename ::std::remove_reference<U>::type
#endif
                    >
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type
        >
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        store(U&& rhs) : elem(::std::forward<U>(rhs))
        {
        }

        T elem;
    };
}}}

#include <boost/fusion/container/vector/vector_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/detail/index_sequence.hpp>

namespace boost { namespace fusion { namespace vector_detail
{
    template < ::std::size_t ...I, typename ...T>
    struct vector_data< ::boost::fusion::detail::index_sequence<I...>, T...>
      : ::boost::fusion::vector_detail::store<I, T>...
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector_detail::vector_data<
                ::boost::fusion::detail::index_sequence<I...>
              , T...
            >
        >
    {
        typedef ::boost::fusion::vector_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<sizeof...(T)> size;
        typedef ::boost::fusion::vector<T...> type_sequence;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        BOOST_DEFAULTED_FUNCTION(vector_data(), {})

        template <
            typename Sequence
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
          , typename Sequence_ = typename ::boost::remove_reference<
#else
          , typename Sequence_ = typename ::std::remove_reference<
#endif
                Sequence
            >::type
          , typename = typename ::boost::enable_if<
                ::boost::fusion::vector_detail::can_convert<
                    vector_data
                  , Sequence
                  , Sequence_
                  , sizeof...(I)
                >
            >::type
        >
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit vector_data(each_elem, Sequence&& rhs) :
            ::boost::fusion::vector_detail::store<I, T>(
                ::boost::fusion::vector_detail::forward_at_c<I>(
                    ::std::forward<Sequence>(rhs)
                )
            )...
        {
        }

        template <typename ...U>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit vector_data(each_elem, U&&... var) :
            ::boost::fusion::vector_detail::store<I, T>(
                ::std::forward<U>(var)
            )...
        {
        }

        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        void assign_sequence(Sequence&& seq)
        {
            this->assign(
                ::std::forward<Sequence>(seq)
              , ::boost::fusion::detail::index_sequence<I...>()
            );
        }

        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        void assign(Sequence&&, ::boost::fusion::detail::index_sequence<>)
        {
        }

        template <typename Sequence, ::std::size_t N, ::std::size_t ...M>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        void
        assign(
            Sequence&& seq
          , ::boost::fusion::detail::index_sequence<N, M...>
        )
        {
            this->at_impl(
                ::boost::mpl::int_<N>()
            ) = ::boost::fusion::vector_detail::forward_at_c<N>(seq);
            this->assign(
                ::std::forward<Sequence>(seq)
              , ::boost::fusion::detail::index_sequence<M...>()
            );
        }

        template < ::std::size_t N, typename U>
        static BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        U& at_detail(::boost::fusion::vector_detail::store<N, U>* this_)
        {
            return this_->elem;
        }

        template < ::std::size_t N, typename U>
        static BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        U const&
        at_detail(::boost::fusion::vector_detail::store<N, U> const* this_)
        {
            return this_->elem;
        }

        template <typename J>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        auto at_impl(J) -> decltype(
            vector_data
            ::at_detail<J::value>(&::std::declval<vector_data&>())
        )
        {
            return this->at_detail<J::value>(this);
        }

        template <typename J>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        auto at_impl(J) const -> decltype(
            vector_data
            ::at_detail<J::value>(&::std::declval<vector_data const&>())
        )
        {
            return this->at_detail<J::value>(this);
        }
    };
}}}

#include <boost/fusion/container/vector/detail/begin_impl.hpp>
#include <boost/fusion/container/vector/detail/end_impl.hpp>
#include <boost/fusion/container/vector/detail/at_impl.hpp>
#include <boost/fusion/sequence/intrinsic/empty.hpp>
#include <boost/fusion/support/detail/and.hpp>

namespace boost { namespace fusion
{
    template <typename... T>
    struct vector :
        ::boost::fusion::vector_detail::vector_data<
            typename ::boost::fusion::detail::make_index_sequence<
                sizeof...(T)
            >::type
          , T...
        >
    {
        typedef ::boost::fusion::vector_detail::vector_data<
            typename ::boost::fusion::detail::make_index_sequence<
                sizeof...(T)
            >::type
          , T...
        > base;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        BOOST_DEFAULTED_FUNCTION(vector(), {})

        template <
            typename... U
          , typename = typename ::boost::enable_if_c<(
                sizeof...(U) >= 1 &&
                ::boost::fusion::detail::and_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U, T>...
#else
                    ::std::is_convertible<U, T>...
#endif
                >::value &&
                !::boost::fusion::detail::and_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_base_of<
#else
                    ::std::is_base_of<
#endif
                        vector
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                      , typename ::boost::remove_reference<U>::type
#else
                      , typename ::std::remove_reference<U>::type
#endif
                    >...
                >::value
            )>::type
        >
        // XXX: constexpr become error due to pull-request #79, booooo!!
        //      In the (near) future release, should be fixed.
        /* BOOST_CONSTEXPR */ BOOST_FUSION_GPU_ENABLED
        explicit vector(U&&... u) :
            base(
                ::boost::fusion::vector_detail::each_elem()
              , ::std::forward<U>(u)...
            )
        {
        }

        template <
            typename Sequence
          , typename = typename ::boost::enable_if_c<
                ::boost::fusion::vector_detail::is_longer_sequence<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    typename ::boost::remove_reference<Sequence>::type
#else
                    typename ::std::remove_reference<Sequence>::type
#endif
                  , sizeof...(T)
                >::value
            >::type
        >
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector(Sequence&& seq) :
            base(
                ::boost::fusion::vector_detail::each_elem()
              , ::std::forward<Sequence>(seq)
            )
        {
        }

        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector& operator=(Sequence&& rhs)
        {
            base::assign_sequence(::std::forward<Sequence>(rhs));
            return *this;
        }
    };
}}

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/detail/cpp03/vector.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_VECTOR
#endif  // include guard

