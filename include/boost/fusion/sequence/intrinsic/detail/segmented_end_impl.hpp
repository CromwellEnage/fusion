/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_END_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_END_IMPL_HPP_INCLUDED

#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/sequence/intrinsic/segments.hpp>
#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/view/iterator_range/iterator_range.hpp>
#include <boost/fusion/support/is_segmented.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/assert.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    //auto segmented_end_impl( seq, stack )
    //{
    //    assert(is_segmented(seq));
    //    auto it = end(segments(seq));
    //    return cons(iterator_range(it, it), stack);
    //}

    template <typename Sequence, typename Stack>
    struct segmented_end_impl
    {
        BOOST_MPL_ASSERT((::boost::fusion::traits::is_segmented<Sequence>));

        typedef typename ::boost::fusion::result_of::end<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::remove_reference<
                typename ::boost::add_const<
#else
            typename ::std::remove_reference<
                typename ::std::add_const<
#endif
                    typename ::boost::fusion::result_of::segments<
                        Sequence
                    >::type
                >::type
            >::type
        >::type end_type;

        typedef ::boost::fusion::iterator_range<end_type, end_type> pair_type;
        typedef ::boost::fusion::cons<pair_type, Stack>             type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static pair_type make_pair(end_type end)
        {
            return pair_type(end, end);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Sequence& seq, Stack stack)
        {
            return type(
                ::boost::fusion::detail
                ::segmented_end_impl<Sequence, Stack>::make_pair(
                    ::boost::fusion::end(::boost::fusion::segments(seq))
                )
              , stack
            );
        }
    };
}}}

#endif  // include guard

