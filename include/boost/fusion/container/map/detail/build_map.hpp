/*============================================================================
    Copyright (c) 2005-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_BUILD_MAP_02042013_1448)
#define BOOST_FUSION_BUILD_MAP_02042013_1448

namespace boost { namespace fusion { namespace detail
{
    template <typename T, typename Rest>
    struct push_front_map;
}}}

#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename First
      , typename Last
      , bool is_assoc
      , bool is_empty = ::boost::fusion::result_of
        ::equal_to<First, Last>::value
    >
    struct build_map;
}}}

#include <boost/fusion/container/map/map.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, bool is_assoc>
    struct build_map<First, Last, is_assoc, true>
    {
        typedef ::boost::fusion::map<> type;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const&, Last const&)
        {
            return type();
        }
    };
}}}

#include <boost/fusion/algorithm/transformation/push_front.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename T, typename ...Rest>
    struct push_front_map<T, ::boost::fusion::map<Rest...> >
    {
        typedef ::boost::fusion::map<T, Rest...> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(T const& first, ::boost::fusion::map<Rest...> const& rest)
        {
            return type(::boost::fusion::push_front(rest, first));
        }
    };
}}}

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename It, bool is_assoc>
    struct pair_from
    {
        typedef typename ::boost::fusion::result_of::value_of<It>::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type call(It const& it)
        {
            return *it;
        }
    };
}}}

#include <boost/fusion/iterator/key_of.hpp>
#include <boost/fusion/iterator/value_of_data.hpp>
#include <boost/fusion/support/pair.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename It>
    struct pair_from<It, true>
    {
        typedef typename ::boost::fusion::result_of
        ::key_of<It>::type key_type;
        typedef typename ::boost::fusion::result_of
        ::value_of_data<It>::type data_type;
        typedef typename ::boost::fusion::pair<key_type, data_type> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type call(It const& it)
        {
            return type(deref_data(it));
        }
    };
}}}

#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, bool is_assoc>
    struct build_map<First, Last, is_assoc, false>
    {
        typedef ::boost::fusion::detail::build_map<
            typename ::boost::fusion::result_of::next<First>::type
          , Last
          , is_assoc
        > next_build_map;

        typedef ::boost::fusion::detail::push_front_map<
            typename ::boost::fusion::detail::pair_from<First, is_assoc>::type
          , typename next_build_map::type
        > push_front;

        typedef typename push_front::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const& f, Last const& l)
        {
            return push_front::call(
                ::boost::fusion::detail
                ::pair_from<First, is_assoc>::call(f)
              , next_build_map::call(::boost::fusion::next(f), l)
            );
        }
    };
}}}

#endif  // include guard

