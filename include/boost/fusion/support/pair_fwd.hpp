/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SUPPORT_PAIR_FWD_HPP)
#define BOOST_FUSION_SUPPORT_PAIR_FWD_HPP

namespace boost { namespace fusion { namespace result_of
{
    template <typename Pair>
    struct first;

    template <typename Pair>
    struct second;

    template <typename First, typename Second>
    struct make_pair;
}}}

namespace boost { namespace fusion
{
    template <typename First, typename Second>
    struct pair;
}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename First, typename Second>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::make_pair<First, Second>::type
    make_pair(Second const& val);
}}

#endif  // include guard

