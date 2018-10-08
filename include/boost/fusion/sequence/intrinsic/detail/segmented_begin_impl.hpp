/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_BEGIN_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_BEGIN_IMPL_HPP_INCLUDED

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/view/iterator_range/iterator_range.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    struct segmented_begin_fun
    {
        template <typename Sequence, typename State, typename Context>
        struct apply
        {
            typedef ::boost::fusion::iterator_range<
                typename ::boost::fusion::result_of::begin<Sequence>::type
              , typename ::boost::fusion::result_of::end<Sequence>::type
            > range_type;

            typedef ::boost::fusion::cons<range_type, Context> type;
            typedef ::boost::mpl::false_ continue_type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type
            call(
                Sequence& seq
              , State const&
              , Context const& context
              , segmented_begin_fun
            )
            {
                return type(
                    range_type(
                        ::boost::fusion::begin(seq)
                      , ::boost::fusion::end(seq)
                    )
                  , context
                );
            }
        };
    };
}}}

#include <boost/fusion/support/is_segmented.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Sequence
      , typename Stack
      , bool IsSegmented = ::boost::fusion::traits
        ::is_segmented<Sequence>::type::value
    >
    struct segmented_begin_impl_aux;

    template <typename Sequence, typename Stack>
    struct segmented_begin_impl_aux<Sequence, Stack, false>
    {
        typedef typename ::boost::fusion::result_of
        ::begin<Sequence>::type begin_type;
        typedef typename ::boost::fusion::result_of
        ::end<Sequence>::type end_type;
        typedef ::boost::fusion
        ::iterator_range<begin_type, end_type> pair_type;
        typedef ::boost::fusion::cons<pair_type, Stack> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Sequence& seq, Stack stack)
        {
            return type(
                pair_type(
                    ::boost::fusion::begin(seq)
                  , ::boost::fusion::end(seq)
                )
              , stack
            );
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/detail/segmented_end_impl.hpp>
#include <boost/fusion/support/detail/segmented_fold_until_impl.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename Stack, bool IsSegmented>
    struct segmented_begin_impl_aux
    {
        typedef ::boost::fusion::detail
        ::segmented_end_impl<Sequence, Stack> end_impl;

        typedef ::boost::fusion::detail::segmented_fold_until_impl<
            Sequence
          , typename end_impl::type
          , Stack
          , segmented_begin_fun
        > fold_impl;

        typedef typename fold_impl::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Sequence& seq, Stack const& stack)
        {
            return fold_impl::call(
                seq
              , end_impl::call(seq, stack)
              , stack
              , ::boost::fusion::detail::segmented_begin_fun()
            );
        }
    };

    template <typename Sequence, typename Stack>
    struct segmented_begin_impl :
        ::boost::fusion::detail::segmented_begin_impl_aux<Sequence, Stack>
    {
    };
}}}

#endif  // include guard

