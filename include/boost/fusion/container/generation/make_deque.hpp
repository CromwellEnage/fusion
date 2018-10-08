/*============================================================================
    Copyright (c) 2001-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_MAKE_DEQUE_01272013_1401)
#define FUSION_MAKE_DEQUE_01272013_1401

#include <boost/fusion/container/deque/deque.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_DEQUE)

//////////////////////////////////////////////////////////////////////////////
// C++11 variadic interface
//////////////////////////////////////////////////////////////////////////////

#include <boost/fusion/support/detail/as_fusion_element.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename ...T>
    struct make_deque
    {
        typedef ::boost::fusion::deque<
            typename ::boost::fusion::detail::as_fusion_element<T>::type...
        > type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename ...T>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::deque<
        typename ::boost::fusion::detail::as_fusion_element<T>::type...
    >
    make_deque(T const&... arg)
    {
        return ::boost::fusion::deque<
            typename ::boost::fusion::detail::as_fusion_element<T>::type...
        >(arg...);
    }
}}

#else
#include <boost/fusion/container/generation/detail/pp_make_deque.hpp>
#endif  // BOOST_FUSION_HAS_VARIADIC_DEQUE
#endif  // include guard

