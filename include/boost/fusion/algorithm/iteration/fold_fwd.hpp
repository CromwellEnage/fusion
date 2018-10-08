/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ALGORITHM_ITERATION_FOLD_FWD_HPP)
#define BOOST_FUSION_ALGORITHM_ITERATION_FOLD_FWD_HPP

namespace boost { namespace fusion { namespace result_of
{
    template <typename Seq, typename State, typename F>
    struct fold;
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of
    ::fold<Seq, State const, F>::type
    fold(Seq& seq, State const& state, F f);

    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of
    ::fold<Seq const, State const, F>::type
    fold(Seq const& seq, State const& state, F f);

    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of
    ::fold<Seq, State, F>::type
    fold(Seq& seq, State& state, F f);

    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of
    ::fold<Seq const, State, F>::type
    fold(Seq const& seq, State& state, F f);
}}

#endif  // include guard

