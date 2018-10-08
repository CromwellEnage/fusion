/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_TRANSFORM_07052005_1057)
#define FUSION_TRANSFORM_07052005_1057

#include <boost/fusion/view/transform_view/transform_view.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    namespace result_of
    {
        template <
            typename Sequence1
          , typename Sequence2
          , typename F = ::boost::fusion::void_
        >
        struct transform
        {
            typedef ::boost::fusion
            ::transform_view<Sequence1, Sequence2, F> type;
        };

        template <typename Sequence, typename F>
#if defined(BOOST_NO_PARTIAL_SPECIALIZATION_IMPLICIT_DEFAULT_ARGS)
        struct transform<Sequence, F, ::boost::fusion::void_>
#else
        struct transform<Sequence, F>
#endif
        {
            typedef ::boost::fusion::transform_view<Sequence, F> type;
        };
    }

    template <typename Sequence, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::transform<Sequence const, F>::type
    transform(Sequence const& seq, F f)
    {
        return ::boost::fusion::transform_view<Sequence const, F>(seq, f);
    }

    template <typename Sequence1, typename Sequence2, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::transform<Sequence1 const, Sequence2 const, F>::type
    transform(Sequence1 const& seq1, Sequence2 const& seq2, F f)
    {
        return ::boost::fusion
        ::transform_view<Sequence1 const, Sequence2 const, F>(seq1, seq2, f);
    }
}}

#endif  // include guard

