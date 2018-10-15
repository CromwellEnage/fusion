/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_PAIR_07222005_1203)
#define FUSION_PAIR_07222005_1203

#include <boost/fusion/support/pair_fwd.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Pair>
    struct first
    {
        typedef typename Pair::first_type type;
    };

    template <typename Pair>
    struct second
    {
        typedef typename Pair::second_type type;
    };
}}}

#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/config.hpp>

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#include <boost/tti/detail/dnullptr.hpp>
#include <boost/core/enable_if.hpp>

#if !(defined(BOOST_MSVC) && (BOOST_MSVC >= 1700) && (BOOST_MSVC < 1800))
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/eval_if.hpp>
#endif

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_convertible.hpp>
#include <boost/type_traits/is_lvalue_reference.hpp>
#else
#include <type_traits>
#endif
#endif  // BOOST_NO_CXX11_RVALUE_REFERENCES

#if defined(BOOST_MSVC)
#pragma warning(push)
#pragma warning(disable: 4512) // assignment operator could not be generated.
#endif

namespace boost { namespace fusion
{
    // A half runtime pair where the first type does not have data
    template <typename First, typename Second>
    struct pair
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair() : second()
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair(pair const& rhs) : second(rhs.second)
        {
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair(pair&& rhs) : second(BOOST_FUSION_FWD_ELEM(Second, rhs.second))
        {
        }
#endif

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair(typename ::boost::fusion::detail::call_param<Second>::type val) :
            second(val)
        {
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename Second2>
        BOOST_FUSION_GPU_ENABLED
        pair(
            Second2&& val
#if defined(BOOST_MSVC) && (BOOST_MSVC >= 1700) && (BOOST_MSVC < 1800)
          , typename disable_if<
                is_lvalue_reference<Second2>
            >::type* /*dummy*/ = BOOST_TTI_DETAIL_NULLPTR
          , typename enable_if<
                is_convertible<Second2, Second>
            >::type* /*dummy*/ = BOOST_TTI_DETAIL_NULLPTR
#else   // not MSVC-11.0
          , typename ::boost::enable_if<
                typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_lvalue_reference<Second2>
#else
                    ::std::is_lvalue_reference<Second2>
#endif
                  , ::boost::mpl::false_
                  , ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                        ::boost::is_convertible<Second2, Second>
#else
                        ::std::is_convertible<Second2, Second>
#endif
                      , ::boost::mpl::true_
                      , ::boost::mpl::false_
                    >
                >::type
            >::type* /*dummy*/ = BOOST_TTI_DETAIL_NULLPTR
#endif  // MSVC-11.0
        ) : second(BOOST_FUSION_FWD_ELEM(Second, val))
        {
        }
#endif  // BOOST_NO_CXX11_RVALUE_REFERENCES

        template <typename Second2>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair(
            ::boost::fusion::pair<First, Second2> const& rhs
        ) : second(rhs.second)
        {
        }

        template <typename Second2>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair& operator=(::boost::fusion::pair<First, Second2> const& rhs)
        {
            this->second = rhs.second;
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair& operator=(pair const& rhs)
        {
            this->second = rhs.second;
            return *this;
        }

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pair& operator=(pair&& rhs)
        {
            this->second = BOOST_FUSION_FWD_ELEM(Second, rhs.second);
            return *this;
        }
#endif

        typedef First first_type;
        typedef Second second_type;
        Second second;
    };

    template <typename First, typename SecondL, typename SecondR>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline bool
    operator==(
        ::boost::fusion::pair<First, SecondL> const& l
      , ::boost::fusion::pair<First, SecondR> const& r
    )
    {
        return l.second == r.second;
    }

    template <typename First, typename SecondL, typename SecondR>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline bool
    operator!=(
        ::boost::fusion::pair<First, SecondL> const& l
      , ::boost::fusion::pair<First, SecondR> const& r
    )
    {
        return l.second != r.second;
    }

    template <typename First, typename SecondL, typename SecondR>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline bool
    operator<(
        ::boost::fusion::pair<First, SecondL> const& l
      , ::boost::fusion::pair<First, SecondR> const& r
    )
    {
        return (l.second) < (r.second);
    }
}}

#include <boost/fusion/support/detail/as_fusion_element.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename First, typename Second>
    struct make_pair
    {
        typedef ::boost::fusion::pair<
            First
          , typename ::boost::fusion::detail
            ::as_fusion_element<Second>::type
        > type;
    };
}}}

namespace boost { namespace fusion
{
    template <typename First, typename Second>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::make_pair<First, Second>::type
    make_pair(Second const& val)
    {
        return ::boost::fusion::pair<
            First
          , typename ::boost::fusion::detail::as_fusion_element<Second>::type
        >(val);
    }
}}

#include <iosfwd>

namespace boost { namespace fusion
{
    template <typename First, typename Second>
    inline ::std::ostream&
    operator<<(
        ::std::ostream& os
      , ::boost::fusion::pair<First, Second> const& p
    )
    {
        return os << p.second;
    }

    template <typename First, typename Second>
    inline ::std::istream&
    operator>>(::std::istream& is, ::boost::fusion::pair<First, Second>& p)
    {
        return is >> p.second;
    }
}}

#if defined(BOOST_MSVC)
#pragma warning(pop)
#endif

#endif  // include guard

