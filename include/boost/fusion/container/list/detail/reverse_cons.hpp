/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_REVERSE_CONS_HPP_INCLUDED)
#define BOOST_FUSION_REVERSE_CONS_HPP_INCLUDED

#include <boost/fusion/container/list/cons.hpp>

namespace boost { namespace fusion { namespace detail
{
    //////////////////////////////////////////////////////////////////////////
    template <typename Cons, typename State = ::boost::fusion::nil_>
    struct reverse_cons;
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Car, typename Cdr, typename State>
    struct reverse_cons< ::boost::fusion::cons<Car, Cdr>, State>
    {
        typedef ::boost::fusion::detail::reverse_cons<
            Cdr
          , ::boost::fusion::cons<Car, State>
        > impl;
        typedef typename impl::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            ::boost::fusion::cons<Car, Cdr> const& cons
          , State const& state = State()
        )
        {
            typedef ::boost::fusion::cons<Car, State> cdr_type;
            return impl::call(cons.cdr, cdr_type(cons.car, state));
        }
    };

    template <typename State>
    struct reverse_cons< ::boost::fusion::nil_, State>
    {
        typedef State type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static State const&
        call(::boost::fusion::nil_ const&, State const& state = State())
        {
            return state;
        }
    };
}}}

#endif  // include guard

