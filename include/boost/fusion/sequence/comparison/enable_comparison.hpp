/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ENABLE_COMPARISON_09232005_1958)
#define FUSION_ENABLE_COMPARISON_09232005_1958

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/mpl/or.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <typename Seq1, typename Seq2, typename Enable = void>
    struct enable_equality :
        ::boost::mpl::or_<
            ::boost::fusion::traits::is_sequence<Seq1>
          , ::boost::fusion::traits::is_sequence<Seq2>
        >
    {
    };
}}}

#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/mpl/and.hpp>
#include <boost/mpl/equal_to.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <typename Seq1, typename Seq2, typename Enable = void>
    struct enable_comparison :
        ::boost::mpl::and_<
            ::boost::mpl::or_<
                ::boost::fusion::traits::is_sequence<Seq1>
              , ::boost::fusion::traits::is_sequence<Seq2>
            >
          , ::boost::mpl::equal_to<
                ::boost::fusion::result_of::size<Seq1>
              , ::boost::fusion::result_of::size<Seq2>
            >
        >
    {
    };
}}}

#endif  // include guard

