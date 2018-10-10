/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_POP_FRONT_09172005_1115)
#define FUSION_POP_FRONT_09172005_1115

#include <boost/fusion/view/iterator_range/iterator_range.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/iterator/next.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct pop_front
    {
        typedef ::boost::fusion::iterator_range<
            typename ::boost::fusion::result_of::next<
                typename ::boost::fusion::result_of::begin<Sequence>::type
            >::type
          , typename ::boost::fusion::result_of::end<Sequence>::type
        > type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::pop_front<Sequence const>::type
    pop_front(Sequence const& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::pop_front<Sequence const>::type result;
        return result(
            ::boost::fusion::next(::boost::fusion::begin(seq))
          , ::boost::fusion::end(seq)
        );
    }
}}

#endif  // include guard

