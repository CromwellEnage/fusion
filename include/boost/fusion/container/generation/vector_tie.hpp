/*============================================================================
    Copyright (c) 2014 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VECTOR_TIE_11112014_2302)
#define FUSION_VECTOR_TIE_11112014_2302

#include <boost/fusion/container/vector/vector.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)

//////////////////////////////////////////////////////////////////////////////
// C++11 variadic interface
//////////////////////////////////////////////////////////////////////////////

namespace boost { namespace fusion { namespace result_of
{
    template <typename ...T>
    struct vector_tie
    {
        typedef ::boost::fusion::vector<T&...> type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename ...T>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector<T&...> vector_tie(T&... arg)
    {
        return ::boost::fusion::vector<T&...>(arg...);
    }
}}

#else
#include <boost/fusion/container/generation/detail/pp_vector_tie.hpp>
#endif  // BOOST_FUSION_HAS_VARIADIC_VECTOR
#endif  // include guard

