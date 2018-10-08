/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_FOLD_UNTIL_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_FOLD_UNTIL_HPP_INCLUDED

#include <boost/fusion/support/detail/segmented_fold_until_impl.hpp>
#include <boost/fusion/container/list/nil.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename State, typename Fun>
    struct segmented_fold_until
    {
        typedef ::boost::fusion::detail::segmented_fold_until_impl<
            Sequence
          , State
          , ::boost::fusion::nil_
          , Fun
        > filter;
        typedef typename filter::type type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence, typename State, typename Fun>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::segmented_fold_until<
        Sequence const
      , State
      , Fun
    >::type
    segmented_fold_until(
        Sequence const& seq
      , State const& state
      , Fun const& fun
    )
    {
        typedef typename ::boost::fusion::result_of::segmented_fold_until<
            Sequence const
          , State
          , Fun
        >::filter filter;

        return filter::call(seq, state, ::boost::fusion::nil_(), fun);
    }
}}

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    //auto segmented_fold_until(seq, state, fun)
    //{
    //    return first(segmented_fold_until_impl(seq, state, nil_, fun));
    //}

    template <typename Sequence, typename State, typename Fun>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::lazy_disable_if<
        typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
            ::boost::is_const<Sequence>
#else
            ::std::is_const<Sequence>
#endif
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
      , ::boost::fusion::result_of::segmented_fold_until<Sequence, State, Fun>
    >::type
    segmented_fold_until(Sequence& seq, State const& state, Fun const& fun)
    {
        typedef typename result_of::segmented_fold_until<
            Sequence
          , State
          , Fun
        >::filter filter;

        return filter::call(seq, state, ::boost::fusion::nil_(), fun);
    }
}}

#endif  // include guard

