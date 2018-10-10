/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_IS_SAME_SIZE_10082015_1156)
#define FUSION_IS_SAME_SIZE_10082015_1156

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Sequence1
      , typename Sequence2
      , bool = (
            ::boost::fusion::traits::is_sequence<Sequence1>::value &&
            ::boost::fusion::traits::is_sequence<Sequence2>::value
        )
    >
    struct is_same_size : ::boost::mpl::false_
    {
    };

    template <typename Sequence1, typename Sequence2>
    struct is_same_size<Sequence1, Sequence2, true> :
        ::boost::mpl::bool_<
            (
                ::boost::fusion::result_of::size<Sequence1>::value ==
                ::boost::fusion::result_of::size<Sequence2>::value
            )
        >
    {
    };
}}}

#endif  // include guard

