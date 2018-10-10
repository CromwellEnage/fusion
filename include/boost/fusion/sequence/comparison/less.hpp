/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_LESS_05052005_0432)
#define FUSION_LESS_05052005_0432

#include <boost/fusion/sequence/comparison/detail/less.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Seq1, typename Seq2>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline bool less(Seq1 const& a, Seq2 const& b)
    {
        return ::boost::fusion::detail::sequence_less<Seq1 const, Seq2 const>
        ::call(::boost::fusion::begin(a), ::boost::fusion::begin(b));
    }
}}

#include <boost/fusion/sequence/comparison/enable_comparison.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion { namespace operators
{
    template <typename Seq1, typename Seq2>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::enable_if<
        ::boost::fusion::traits::enable_comparison<Seq1, Seq2>
      , bool
    >::type
    operator<(Seq1 const& a, Seq2 const& b)
    {
        return ::boost::fusion::less(a, b);
    }
}}}

namespace boost { namespace fusion
{
    using operators::operator<;
}}

#endif  // include guard

