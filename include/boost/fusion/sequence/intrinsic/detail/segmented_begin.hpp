/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_BEGIN_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_BEGIN_HPP_INCLUDED

#include <boost/fusion/sequence/intrinsic/detail/segmented_begin_impl.hpp>
#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/iterator/detail/segmented_iterator.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    //auto segmented_begin( seq )
    //{
    //    return make_segmented_iterator( segmented_begin_impl( seq, nil_ ) );
    //}

    template <typename Sequence, typename Nil_ = ::boost::fusion::nil_>
    struct segmented_begin
    {
        typedef ::boost::fusion::segmented_iterator<
            typename ::boost::fusion::detail
            ::segmented_begin_impl<Sequence, Nil_>::type
        > type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Sequence& seq)
        {
            return type(
                ::boost::fusion::detail
                ::segmented_begin_impl<Sequence, Nil_>::call(seq, Nil_())
            );
        }
    };
}}}

#endif  // include guard

