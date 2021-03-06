/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_FIND_IF_FWD_HPP_INCLUDED)
#define BOOST_FUSION_FIND_IF_FWD_HPP_INCLUDED

// Forward declaration of find_if algorithm
namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename Pred>
    struct find_if;
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Pred, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of
    ::find_if<Sequence const, Pred>::type const
    find_if(Sequence const& seq);
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
    template <typename Pred, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::lazy_disable_if<
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
      , ::boost::fusion::result_of::find_if<Sequence, Pred>
    >::type const
    find_if(Sequence& seq);
}}

#endif  // include guard

