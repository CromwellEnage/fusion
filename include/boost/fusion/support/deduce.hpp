/*============================================================================
    Copyright (c) 2007 Tobias Schwinger
  
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SUPPORT_DEDUCE_HPP_INCLUDED)
#define BOOST_FUSION_SUPPORT_DEDUCE_HPP_INCLUDED

namespace boost { namespace fusion { namespace traits
{
    // Non-references pass unchanged

    template <typename T>
    struct deduce
    {
        typedef T type; 
    };

    template <typename T>
    struct deduce<T const>
    {
        typedef T type;
    };

    template <typename T>
    struct deduce<T volatile>
    {
        typedef T type;
    };

    template <typename T>
    struct deduce<T const volatile>
    {
        typedef T type;
    };

    // Keep references on mutable LValues

    template <typename T>
    struct deduce<T&>
    {
        typedef T& type;
    };

    template <typename T>
    struct deduce<T volatile&>
    {
        typedef T volatile& type;
    };

    // Store away potential RValues

    template <typename T>
    struct deduce<T const&>
    {
        typedef T type;
    };

    template <typename T>
    struct deduce<T const volatile&>
    {
        typedef T type;
    };

    // Keep references on arrays, even if const

    template <typename T, int N>
    struct deduce<T(&)[N]>
    {
        typedef T(&type)[N];
    };

    template <typename T, int N>
    struct deduce<volatile T(&)[N]>
    {
        typedef volatile T(&type)[N]; 
    };

    template <typename T, int N>
    struct deduce<const T(&)[N]>
    {
        typedef const T(&type)[N];
    };

    template <typename T, int N>
    struct deduce<const volatile T(&)[N]>
    {
        typedef const volatile T(&type)[N];
    };
}}}

#include <boost/ref.hpp>

namespace boost { namespace fusion { namespace traits
{
    // Unwrap ::boost.ref() (referencee cv is deduced)

    template <typename T>
    struct deduce< ::boost::reference_wrapper<T>&>
    {
        typedef T& type;
    };

    template <typename T>
    struct deduce< ::boost::reference_wrapper<T> const&>
    {
        typedef T& type;
    };
}}}

#include <boost/fusion/support/config.hpp>

#if !defined(BOOST_NO_CXX11_HDR_FUNCTIONAL)
#include <functional>

namespace boost { namespace fusion { namespace traits
{
    // Also unwrap C++11 ::std::ref() if available (referencee cv is deduced)

    template <typename T>
    struct deduce< ::std::reference_wrapper<T>&>
    {
        typedef T& type;
    };

    template <typename T>
    struct deduce< ::std::reference_wrapper<T> const&>
    {
        typedef T& type;
    };
}}}
#endif

#endif  // include guard

