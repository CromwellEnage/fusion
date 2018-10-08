/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#ifndef FUSION_IS_SAME_SIZE_10082015_1156
#define FUSION_IS_SAME_SIZE_10082015_1156

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/core/enable_if.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Sequence1
      , typename Sequence2
      , typename = void
      , typename = void
    >
    struct is_same_size : ::boost::mpl::false_
    {
    };

    template <typename Sequence1, typename Sequence2>
    struct is_same_size<
        Sequence1
      , Sequence2
      , typename ::boost::enable_if<
            ::boost::fusion::traits::is_sequence<Sequence1>
        >::type
      , typename ::boost::enable_if<
            ::boost::fusion::traits::is_sequence<Sequence2>
        >::type
    > : ::boost::mpl::equal_to<
            ::boost::fusion::result_of::size<Sequence1>
          , ::boost::fusion::result_of::size<Sequence2>
        >
    {
    };
}}}

#endif  // include guard

