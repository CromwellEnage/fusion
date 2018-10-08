/*============================================================================
    Copyright (c) 2001-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DEQUE_TIE_01272013_1401)
#define FUSION_DEQUE_TIE_01272013_1401

#include <boost/fusion/container/deque/deque.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_DEQUE)

//////////////////////////////////////////////////////////////////////////////
// C++11 variadic interface
//////////////////////////////////////////////////////////////////////////////

namespace boost { namespace fusion { namespace result_of
{
    template <typename ...T>
    struct deque_tie
    {
        typedef ::boost::fusion::deque<T&...> type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename ...T>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::deque<T&...> deque_tie(T&... arg)
    {
        return ::boost::fusion::deque<T&...>(arg...);
    }
}}

#else
#include <boost/fusion/container/generation/detail/pp_deque_tie.hpp>
#endif  // BOOST_FUSION_HAS_VARIADIC_DEQUE
#endif  // include guard

