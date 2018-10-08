/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_MAIN_09232005_1340)
#define FUSION_CONVERT_MAIN_09232005_1340

#include <boost/fusion/container/map/map.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_MAP)

///////////////////////////////////////////////////////////////////////////////
// C++11 variadic implementation
///////////////////////////////////////////////////////////////////////////////

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

#include <boost/fusion/container/map/detail/pair_from.hpp>
#include <boost/fusion/iterator/next.hpp>

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

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/support/category_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct as_map :
        ::boost::fusion::detail::build_map<
            typename ::boost::fusion::result_of::begin<Sequence>::type
          , typename ::boost::fusion::result_of::end<Sequence>::type
          , ::boost::fusion::traits::is_associative<Sequence>::value
        >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_map<Sequence>::type
    as_map(Sequence& seq)
    {
        typedef ::boost::fusion::result_of::as_map<Sequence> gen;
        return gen::call(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_map<Sequence const>::type
    as_map(Sequence const& seq)
    {
        typedef ::boost::fusion::result_of::as_map<Sequence const> gen;
        return gen::call(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
    }
}}

#include <boost/fusion/sequence/convert_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct convert_impl< ::boost::fusion::map_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::as_map<Sequence>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                typedef ::boost::fusion::result_of::as_map<Sequence> gen;
                return gen::call(
                    ::boost::fusion::begin(seq)
                  , ::boost::fusion::end(seq)
                );
            }
        };
    };
}}}

#else

///////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
///////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/map/detail/cpp03/convert.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_MAP
#endif  // include guard

