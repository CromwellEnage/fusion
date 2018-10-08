/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_LIST_MAIN_10262014_0447)
#define FUSION_LIST_MAIN_10262014_0447

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/container/list/list_fwd.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_LIST)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/support/detail/access.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename ...T>
    struct list_to_cons;

    template <>
    struct list_to_cons<>
    {
        typedef ::boost::fusion::nil_ type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call()
        {
            return type();
        }
    };

    template <typename Head, typename ...Tail>
    struct list_to_cons<Head, Tail...>
    {
        typedef Head head_type;
        typedef ::boost::fusion::detail
        ::list_to_cons<Tail...> tail_list_to_cons;
        typedef typename tail_list_to_cons::type tail_type;
        typedef ::boost::fusion::cons<head_type, tail_type> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<Head>::type _h
          , typename ::boost::fusion::detail::call_param<Tail>::type ..._t
        )
        {
            return type(_h, tail_list_to_cons::call(_t...));
        }
    };
}}}

#else   // !defined(BOOST_FUSION_HAS_VARIADIC_LIST)

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/list/detail/cpp03/list_to_cons.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_LIST
#endif  // include guard

