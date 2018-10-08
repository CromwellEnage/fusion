/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_DEQUE_DETAIL_CPP11_DEQUE_KEYED_VALUES_07042012_1901)
#define BOOST_FUSION_DEQUE_DETAIL_CPP11_DEQUE_KEYED_VALUES_07042012_1901

namespace boost { namespace fusion { namespace detail
{
    template <typename N, typename ...Elements>
    struct deque_keyed_values_impl;
}}}

#include <boost/fusion/support/void_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename N>
    struct deque_keyed_values_impl<N>
    {
        typedef ::boost::fusion::detail::nil_keyed_element type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type construct()
        {
            return type();
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type forward_()
        {
            return type();
        }
#endif
    };
}}}

#include <boost/fusion/container/deque/detail/keyed_element.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/mpl/int.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename N, typename Head, typename ...Tail>
    struct deque_keyed_values_impl<N, Head, Tail...>
    {
        typedef ::boost::mpl::int_<(N::value + 1)> next_index;
        typedef typename ::boost::fusion::detail
        ::deque_keyed_values_impl<next_index, Tail...>::type tail;
        typedef ::boost::fusion::detail::keyed_element<N, Head, tail> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        construct(
            typename ::boost::fusion::detail::call_param<Head>::type head
          , typename ::boost::fusion::detail::call_param<Tail>::type... tail
        )
        {
            return type(
                head
              , ::boost::fusion::detail
                ::deque_keyed_values_impl<next_index, Tail...>
                ::construct(tail...)
            );
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename Head_, typename ...Tail_>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type forward_(Head_&& head, Tail_&&... tail)
        {
            return type(
                BOOST_FUSION_FWD_ELEM(Head_, head)
              , ::boost::fusion::detail
                ::deque_keyed_values_impl<next_index, Tail_...>
                ::forward_(BOOST_FUSION_FWD_ELEM(Tail_, tail)...)
            );
        }
#endif
    };

    template <typename ...Elements>
    struct deque_keyed_values :
        ::boost::fusion::detail
        ::deque_keyed_values_impl< ::boost::mpl::int_<0>, Elements...>
    {
    };
}}}

#endif  // include guard

