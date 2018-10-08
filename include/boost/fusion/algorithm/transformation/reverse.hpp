/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_REVERSE_07212005_1230)
#define FUSION_REVERSE_07212005_1230

#include <boost/fusion/view/reverse_view/reverse_view.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct reverse
    {
        typedef ::boost::fusion::reverse_view<Sequence> type;
    };
}}}

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::reverse_view<Sequence const>
    >::type
    reverse(Sequence const& view)
    {
        return ::boost::fusion::reverse_view<Sequence const>(view);
    }
}}

#endif  // include guard

