/*============================================================================
    Copyright (c) 2013 Jamboree

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_FLATTEN_VIEW_ITERATOR_HPP_INCLUDED)
#define BOOST_FUSION_FLATTEN_VIEW_ITERATOR_HPP_INCLUDED

namespace boost { namespace fusion
{
    struct flatten_view_iterator_tag;
}}

namespace boost { namespace fusion { namespace detail
{
    template <typename Cons, typename Base>
    struct build_flatten_view_iterator;
}}}

#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Iterator, typename = void>
    struct make_descent_cons
    {
        typedef ::boost::fusion::cons<Iterator> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type apply(Iterator const& it)
        {
            return type(it);
        }
    };
}}}

#include <boost/fusion/iterator/mpl/convert_iterator.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>

namespace boost { namespace fusion
{
    template <typename First, typename Base>
    struct flatten_view_iterator :
        ::boost::fusion::iterator_base<
            ::boost::fusion::flatten_view_iterator<First, Base>
        >
    {
        typedef ::boost::fusion::flatten_view_iterator_tag fusion_tag;
        typedef ::boost::fusion::forward_traversal_tag category;
        typedef ::boost::fusion::convert_iterator<First> first_converter;
        typedef typename first_converter::type first_type;
        typedef Base base_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        flatten_view_iterator(First const& first, Base const& base) :
            first(first), base(base)
        {
        }

        first_type first;
        base_type base;
    };
}}

namespace boost { namespace fusion { namespace detail
{
    template <typename Car, typename Base>
    struct build_flatten_view_iterator< ::boost::fusion::cons<Car>, Base>
    {
        typedef ::boost::fusion::flatten_view_iterator<Car, Base> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type
        apply(::boost::fusion::cons<Car> const& cons, Base const& base)
        {
            return type(cons.car, base);
        }
    };

    template <typename Car, typename Cdr, typename Base>
    struct build_flatten_view_iterator< ::boost::fusion::cons<Car, Cdr>, Base>
    {
        typedef ::boost::fusion::flatten_view_iterator<Car, Base> next_base;
        typedef ::boost::fusion::detail
        ::build_flatten_view_iterator<Cdr, next_base> next;
        typedef typename next::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type
        apply(::boost::fusion::cons<Car, Cdr> const& cons, Base const& base)
        {
            return next::apply(cons.cdr, next_base(cons.car, base));
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename Iterator>
    struct make_descent_cons<
        Iterator
      , typename ::boost::enable_if<
            ::boost::fusion::traits::is_sequence<
                typename ::boost::fusion::result_of::value_of<Iterator>::type
            >
        >::type
    >
    {
        // we use 'value_of' above for convenience, assuming the value won't
        // be reference, while we must use the regular 'deref' here
        // for const issues...
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typedef typename ::boost::remove_reference<
#else
        typedef typename ::std::remove_reference<
#endif
            typename ::boost::fusion::result_of::deref<Iterator>::type
        >::type sub_sequence;

        typedef typename ::boost::fusion::result_of
        ::begin<sub_sequence>::type sub_begin;

        typedef ::boost::fusion::cons<
            Iterator
          , typename ::boost::fusion::detail
            ::make_descent_cons<sub_begin>::type
        > type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type apply(Iterator const& it)
        {
            return type(
                it
              , ::boost::fusion::detail::make_descent_cons<sub_begin>
                ::apply(::boost::fusion::begin(*it))
            );
        }
    };

    template <typename Base, typename Iterator, typename = void>
    struct seek_descent
    {
        typedef ::boost::fusion::detail
        ::make_descent_cons<Iterator> make_descent_cons_;
        typedef typename make_descent_cons_::type cons_type;
        typedef ::boost::fusion::detail::build_flatten_view_iterator<
            cons_type
          , Base
        > build_flatten_view_iterator_;
        typedef typename build_flatten_view_iterator_::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type apply(Base const& base, Iterator const& it)
        {
            return build_flatten_view_iterator_
            ::apply(make_descent_cons_::apply(it), base);
        }
    };
}}}

#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Base, typename Iterator>
    struct seek_descent<
        Base
      , Iterator
      , typename ::boost::enable_if<
            ::boost::fusion::result_of::equal_to<
                Iterator
              , typename ::boost::fusion::result_of::end<
                    typename ::boost::fusion::result_of::value_of<Base>::type
                >::type
            >
        >::type
    >
    {
        typedef typename ::boost::fusion::result_of::next<Base>::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type apply(Base const& base, Iterator const&)
        {
            return ::boost::fusion::next(base);
        }
    };
}}}

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct next_impl< ::boost::fusion::flatten_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename Iterator::base_type base_type;
            typedef typename ::boost::fusion::result_of
            ::next<first_type>::type next_type;
            typedef ::boost::fusion::detail
            ::seek_descent<base_type, next_type> seek_descent;
            typedef typename seek_descent::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static inline type call(Iterator const& it)
            {
                return seek_descent::apply(
                    it.base
                  , ::boost::fusion::next(it.first)
                );
            }
        };
    };

    template <>
    struct deref_impl< ::boost::fusion::flatten_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::deref<typename Iterator::first_type>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static inline type call(Iterator const& it)
            {
                return *it.first;
            }
        };
    };

    template <>
    struct value_of_impl< ::boost::fusion::flatten_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::value_of<typename Iterator::first_type>::type type;
        };
    };
}}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename First, typename Base>
    struct iterator_traits<
        ::boost::fusion::flatten_view_iterator<First, Base>
    >
    {
    };
}
#endif

#endif  // include guard

