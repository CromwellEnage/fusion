/*============================================================================
    Copyright (c) 2005-2013 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_20061213_2207)
#define FUSION_CONVERT_20061213_2207

#include <boost/fusion/container/deque/detail/convert_impl.hpp>
#include <boost/fusion/container/deque/deque.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_DEQUE)

//////////////////////////////////////////////////////////////////////////////
// C++11 variadic implementation
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/deque/detail/build_deque.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct as_deque :
        ::boost::fusion::detail::build_deque<
            typename ::boost::fusion::result_of::begin<Sequence>::type
          , typename ::boost::fusion::result_of::end<Sequence>::type
        >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_deque<Sequence>::type
    as_deque(Sequence& seq)
    {
        typedef ::boost::fusion::result_of::as_deque<Sequence> gen;
        return gen::call(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_deque<Sequence const>::type
    as_deque(Sequence const& seq)
    {
        typedef ::boost::fusion::result_of::as_deque<Sequence const> gen;
        return gen::call(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
    }
}}

#else

//////////////////////////////////////////////////////////////////////////////
// C++03 (non-variadic) implementation
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/deque/detail/cpp03/build_deque.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_DEQUE
#endif  // include guard

