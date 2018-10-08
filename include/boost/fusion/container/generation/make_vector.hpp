/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_MAKE_VECTOR_11112014_2252)
#define FUSION_MAKE_VECTOR_11112014_2252

#include <boost/fusion/container/vector/vector.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)

//////////////////////////////////////////////////////////////////////////////
// C++11 variadic interface
//////////////////////////////////////////////////////////////////////////////

#include <boost/fusion/support/detail/as_fusion_element.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace result_of
{
    template <typename ...T>
    struct make_vector
    {
        typedef ::boost::fusion::vector<
            typename ::boost::fusion::detail::as_fusion_element<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                typename ::boost::remove_const<
                    typename ::boost::remove_reference<T>::type
#else
                typename ::std::remove_const<
                    typename ::std::remove_reference<T>::type
#endif
                >::type
            >::type...
        > type;
    };
}}}

#include <utility>

namespace boost { namespace fusion
{
    template <typename ...T>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::make_vector<T...>::type
    make_vector(T&&... arg)
    {
        return typename ::boost::fusion::result_of::make_vector<T...>
        ::type(::std::forward<T>(arg)...);
    }
}}

#else
#include <boost/fusion/container/generation/detail/pp_make_vector.hpp>
#endif  // BOOST_FUSION_HAS_VARIADIC_VECTOR
#endif  // include guard

