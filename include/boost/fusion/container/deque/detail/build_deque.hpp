/*============================================================================
    Copyright (c) 2005-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_BUILD_DEQUE_02032013_1921)
#define BOOST_FUSION_BUILD_DEQUE_02032013_1921

namespace boost { namespace fusion { namespace detail
{
    template <typename T, typename Rest>
    struct push_front_deque;
}}}

#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename First
      , typename Last
      , bool is_empty = ::boost::fusion::result_of
        ::equal_to<First, Last>::value
    >
    struct build_deque;
}}}

#include <boost/fusion/container/deque/deque.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last>
    struct build_deque<First, Last, true>
    {
        typedef ::boost::fusion::deque<> type;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const&, Last const&)
        {
            return type();
        }
    };
}}}

#include <boost/fusion/container/deque/front_extended_deque.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename T, typename ...Rest>
    struct push_front_deque<T, ::boost::fusion::deque<Rest...> >
    {
        typedef ::boost::fusion::deque<T, Rest...> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(T const& first, ::boost::fusion::deque<Rest...> const& rest)
        {
            return type(
                ::boost::fusion
                ::front_extended_deque<deque<Rest...>, T>(rest, first)
            );
        }
    };
}}}

#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/value_of.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last>
    struct build_deque<First, Last, false>
    {
        typedef ::boost::fusion::detail::build_deque<
            typename ::boost::fusion::result_of::next<First>::type
          , Last
        > next_build_deque;

        typedef ::boost::fusion::detail::push_front_deque<
            typename ::boost::fusion::result_of::value_of<First>::type
          , typename next_build_deque::type
        > push_front;

        typedef typename push_front::type type;

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const& f, Last const& l)
        {
            typename ::boost::fusion::result_of
            ::value_of<First>::type v = *f;
            return push_front::call(
                v
              , next_build_deque::call(::boost::fusion::next(f), l)
            );
        }
    };
}}}

#endif  // include guard

