/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_NOT_EQUAL_TO_05052005_0431)
#define FUSION_NOT_EQUAL_TO_05052005_0431

#include <boost/fusion/support/config.hpp>

#if defined(FUSION_DIRECT_OPERATOR_USAGE)
#include <boost/fusion/sequence/comparison/detail/not_equal_to.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#else
#include <boost/fusion/sequence/comparison/equal_to.hpp>
#endif

namespace boost { namespace fusion
{
    template <typename Seq1, typename Seq2>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline bool not_equal_to(Seq1 const& a, Seq2 const& b)
    {
#if defined(FUSION_DIRECT_OPERATOR_USAGE)
        return (
            ::boost::fusion::result_of::size<Seq1>::value !=
            ::boost::fusion::result_of::size<Seq2>::value
        ) || (
            ::boost::fusion::detail::sequence_not_equal_to<
                Seq1 const
              , Seq2 const
              , (
                    ::boost::fusion::result_of::size<Seq1>::value ==
                    ::boost::fusion::result_of::size<Seq2>::value
                )
            >::call(::boost::fusion::begin(a), ::boost::fusion::begin(b))
        );
#else
        return !(a == b);
#endif
    }
}}

#include <boost/fusion/sequence/comparison/enable_comparison.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion { namespace operators
{
    template <typename Seq1, typename Seq2>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::enable_if<
        ::boost::fusion::traits::enable_equality<Seq1, Seq2>
      , bool
    >::type
    operator!=(Seq1 const& a, Seq2 const& b)
    {
        return ::boost::fusion::not_equal_to(a, b);
    }
}}}

namespace boost { namespace fusion
{
    using ::boost::fusion::operators::operator!=;
}}

#endif  // include guard

