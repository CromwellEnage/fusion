/*============================================================================
    Copyright (c) 2014 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_MAKE_LIST_10262014_0647)
#define FUSION_MAKE_LIST_10262014_0647

#include <boost/fusion/container/list/list.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_LIST)

//////////////////////////////////////////////////////////////////////////////
// C++11 variadic interface
//////////////////////////////////////////////////////////////////////////////

#include <boost/fusion/support/detail/as_fusion_element.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename ...T>
    struct make_list
    {
        typedef ::boost::fusion::list<
            typename ::boost::fusion::detail::as_fusion_element<T>::type...
        > type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename ...T>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::make_list<T...>::type
    make_list(T const&... arg)
    {
        return typename ::boost::fusion::result_of::make_list<T...>
        ::type(arg...);
    }
}}

#else
#include <boost/fusion/container/generation/detail/pp_make_list.hpp>
#endif  // BOOST_FUSION_HAS_VARIADIC_LIST
#endif  // include guard

