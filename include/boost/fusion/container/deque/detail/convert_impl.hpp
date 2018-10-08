/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden
    Copyright (c) 2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_IMPL_20061213_2207)
#define FUSION_CONVERT_IMPL_20061213_2207

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct as_deque;
}}}

#include <boost/fusion/sequence/convert_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/container/deque/deque_fwd.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_DEQUE)
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct convert_impl< ::boost::fusion::deque_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::result_of::as_deque<Sequence> gen;
            typedef typename gen::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                return gen::call(
                    ::boost::fusion::begin(seq)
#if defined(BOOST_FUSION_HAS_VARIADIC_DEQUE)
                  , ::boost::fusion::end(seq)
#endif
                );
            }
        };
    };
}}}

#endif  // include guard

