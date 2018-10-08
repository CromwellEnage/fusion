/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_PUSH_BACK_07162005_0235)
#define FUSION_PUSH_BACK_07162005_0235

#include <boost/fusion/view/joint_view/joint_view.hpp>
#include <boost/fusion/view/single_view/single_view.hpp>
#include <boost/fusion/support/detail/as_fusion_element.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename T>
    struct push_back
    {
        typedef ::boost::fusion::single_view<
            typename ::boost::fusion::detail::as_fusion_element<T>::type
        > single_view;
        typedef ::boost::fusion::joint_view<Sequence, single_view const> type;
    };
}}}

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence, typename T>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::result_of::push_back<Sequence const, T>
    >::type
    push_back(Sequence const& seq, T const& x)
    {
        typedef typename ::boost::fusion::result_of
        ::push_back<Sequence const, T> push_back;
        typedef typename push_back::single_view single_view; 
        typedef typename push_back::type result; 
        single_view x_(x);
        return result(seq, x_);
    }
}}

#endif  // include guard

