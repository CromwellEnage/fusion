/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_END_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_END_HPP_INCLUDED

#include <boost/fusion/sequence/intrinsic/detail/segmented_end_impl.hpp>
#include <boost/fusion/container/list/nil.hpp>
#include <boost/fusion/iterator/detail/segmented_iterator.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    //auto segmented_end( seq )
    //{
    //    return make_segmented_iterator( segmented_end_impl( seq ) );
    //}

    template <typename Sequence, typename Nil_ = ::boost::fusion::nil_>
    struct segmented_end
    {
        typedef ::boost::fusion::segmented_iterator<
            typename ::boost::fusion::detail
            ::segmented_end_impl<Sequence, Nil_>::type
        > type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Sequence& seq)
        {
            return type(
                ::boost::fusion::detail
                ::segmented_end_impl<Sequence, Nil_>::call(seq, Nil_())
            );
        }
    };
}}}

#endif  // include guard

