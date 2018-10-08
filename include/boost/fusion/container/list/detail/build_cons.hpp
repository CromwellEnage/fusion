/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_BUILD_CONS_09232005_1222)
#define FUSION_BUILD_CONS_09232005_1222

#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename First
      , typename Last
      , bool is_empty = ::boost::fusion::result_of
        ::equal_to<First, Last>::value
    >
    struct build_cons;
}}}

#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last>
    struct build_cons<First, Last, true>
    {
        typedef ::boost::fusion::nil_ type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static ::boost::fusion::nil_ call(First const&, Last const&)
        {
            return ::boost::fusion::nil_();
        }
    };
}}}

#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/iterator/deref.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last>
    struct build_cons<First, Last, false>
    {
        typedef ::boost::fusion::detail::build_cons<
            typename ::boost::fusion::result_of::next<First>::type
          , Last
        > next_build_cons;

        typedef ::boost::fusion::cons<
            typename ::boost::fusion::result_of::value_of<First>::type
          , typename next_build_cons::type
        > type;

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const& f, Last const& l)
        {
            typename ::boost::fusion::result_of::value_of<First>::type v = *f;
            return type(
                v
              , next_build_cons::call(::boost::fusion::next(f), l)
            );
        }
    };
}}}

#endif  // include guard

