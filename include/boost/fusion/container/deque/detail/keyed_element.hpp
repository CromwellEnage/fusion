/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_DEQUE_DETAIL_KEYED_ELEMENT_26112006_1330)
#define BOOST_FUSION_DEQUE_DETAIL_KEYED_ELEMENT_26112006_1330

#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    struct nil_keyed_element
    {
        typedef ::boost::fusion::fusion_sequence_tag tag;

        BOOST_FUSION_GPU_ENABLED
        void get();

        template <typename It>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static nil_keyed_element from_iterator(It const&)
        {
            return nil_keyed_element();
        }
    };
}}}

#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/tti/detail/dnullptr.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_convertible.hpp>
#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES) && \
    BOOST_WORKAROUND(BOOST_GCC, / 100 == 404)
#include <boost/type_traits/is_same.hpp>
#endif
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename Key, typename Value, typename Rest>
    struct keyed_element : Rest
    {
        typedef Rest base;
        typedef ::boost::fusion::fusion_sequence_tag tag;
        using Rest::get;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element() : Rest(), value_()
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element(keyed_element const& rhs) :
            Rest(rhs.get_base()), value_(rhs.value_)
        {
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element(keyed_element&& rhs)
          : Rest(rhs.forward_base())
          , value_(BOOST_FUSION_FWD_ELEM(Value, rhs.value_))
        {
        }
#endif

        template <typename U, typename Rst>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element(
            ::boost::fusion::detail::keyed_element<Key, U, Rst> const& rhs
          , typename ::boost::enable_if_c<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<U, Value>::value
#else
                ::std::is_convertible<U, Value>::value
#endif
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : Rest(rhs.get_base()), value_(rhs.value_)
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element(
            typename ::boost::fusion::detail::call_param<Value>::type value
          , Rest const& rest
        ) : Rest(rest), value_(value)
        {
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#if BOOST_WORKAROUND(BOOST_GCC, / 100 == 404)
        template <
            typename Value_
          , typename = typename ::boost::enable_if_c<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<Value_, Value>::value
#else
                ::std::is_same<Value_, Value>::value
#endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS, or MSVC-10/11/12
            >::type
        >
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element(Value_&& value, Rest&& rest)
#else
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element(Value&& value, Rest&& rest)
#endif  // GCC 4.4
          : Rest(::std::move(rest))
          , value_(BOOST_FUSION_FWD_ELEM(Value, value))
        {
        }
#endif  // BOOST_NO_CXX11_RVALUE_REFERENCES

        template <typename U, typename Rst>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element&
        operator=(
            ::boost::fusion::detail::keyed_element<Key, U, Rst> const& rhs
        )
        {
#if BOOST_WORKAROUND(BOOST_MSVC, < 1900) || defined(__MINGW32__) || \
    !defined(__cplusplus) || (__cplusplus < 201103L)
            Rst const& rhs_base = rhs.get_base();
            base::operator=(rhs_base);
#else
            this->get_base() = rhs.get_base();
#endif
            this->value_ = rhs.value_;
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element& operator=(keyed_element const& rhs)
        {
            base::operator=(rhs);
            this->value_ = rhs.value_;
            return *this;
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        keyed_element& operator=(keyed_element&& rhs)
        {
            base::operator=(rhs.forward_base());
            this->value_ = ::std::move(rhs.value_);
            return *this;
        }
#endif

        template <typename It>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static keyed_element from_iterator(It const& it)
        {
            return keyed_element(
                *it
              , base::from_iterator(::boost::fusion::next(it))
            );
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        Rest& get_base() BOOST_NOEXCEPT
        {
            return *this;
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        Rest const& get_base() const BOOST_NOEXCEPT
        {
            return *this;
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        Rest&& forward_base() BOOST_NOEXCEPT
        {
            return ::std::move(*static_cast<Rest*>(this));
        }
#endif

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::cref_result<Value>::type
        get(Key) const
        {
            return this->value_;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::ref_result<Value>::type get(Key)
        {
            return this->value_;
        }

        Value value_;
    };

    template <typename Elem, typename Key>
    struct keyed_element_value_at :
        ::boost::fusion::detail::keyed_element_value_at<
            typename Elem::base
          , Key
        >
    {
    };

    template <typename Key, typename Value, typename Rest>
    struct keyed_element_value_at<
        ::boost::fusion::detail::keyed_element<Key, Value, Rest>
      , Key
    >
    {
        typedef Value type;
    };
}}}

#endif  // include guard

