/*============================================================================
    Copyright (c) 2016 Lee Clagett

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_AND_07152016_1625)
#define FUSION_AND_07152016_1625

#include <boost/fusion/support/config.hpp>

#if defined(BOOST_NO_CXX11_VARIADIC_TEMPLATES)
#error ::boost::fusion::detail::and_ requires variadic templates
#endif

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/integral_constant.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail {

#if defined(BOOST_NO_CXX17_FOLD_EXPRESSIONS) || \
    BOOST_WORKAROUND(BOOST_MSVC, BOOST_TESTED_AT(1913))
    template <typename ...Cond>
    struct and_impl :
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        ::boost::false_type
#else
        ::std::false_type
#endif
    {
    };

    template <typename ...T>
    struct and_impl<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        ::boost::integral_constant<T, true>...
    > : ::boost::true_type
#else
        ::std::integral_constant<T, true>...
    > : ::std::true_type
#endif
    {
    };

    // This helper metafunction is necessary
    // to avoid an MSVC-12 variadics bug.
    template <bool ...Cond>
    struct and_impl1 :
        ::boost::fusion::detail::and_impl<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::integral_constant<bool, Cond>...
#else
            ::std::integral_constant<bool, Cond>...
#endif
        >
    {
    };

    /* fusion::detail::and_ differs from mpl::and_ in the following ways:
      - The empty set is valid and returns true
      - A single element set is valid and returns the identity
      - There is no upper bound on the set size
      - The conditions are evaluated at once, and are not short-circuited.
        This reduces instantations when returning true;
        the implementation is not recursive.
    */
    template <typename ...Cond>
    struct and_ : ::boost::fusion::detail::and_impl1<Cond::value...>
    {
    };
#else   // C++17 fold expressions available && not MSVC-12
    template <typename ...Cond>
    struct and_ :
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        ::boost::integral_constant<
#else
        ::std::integral_constant<
#endif
            bool
          , static_cast<bool>(Cond::value) && ...
        >
    {
    };
#endif  // no C++17 fold expressions, or MSVC-12
}}}

#endif  // include guard

