/*============================================================================
    Copyright (c) 2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_LIST_TIE_06182015_0825)
#define FUSION_LIST_TIE_06182015_0825

#include <boost/fusion/container/list/list.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_LIST)

//////////////////////////////////////////////////////////////////////////////
// C++11 variadic interface
//////////////////////////////////////////////////////////////////////////////

namespace boost { namespace fusion { namespace result_of
{
    template <typename ...T>
    struct list_tie
    {
        typedef ::boost::fusion::list<T&...> type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename ...T>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T&...> list_tie(T&... arg)
    {
        return ::boost::fusion::list<T&...>(arg...);
    }
}}

#else
#include <boost/fusion/container/generation/detail/pp_list_tie.hpp>
#endif  // BOOST_FUSION_HAS_VARIADIC_LIST
#endif  // include guard

