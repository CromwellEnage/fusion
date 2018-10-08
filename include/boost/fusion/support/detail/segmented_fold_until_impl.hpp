/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_FOLD_UNTIL_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_FOLD_UNTIL_IMPL_HPP_INCLUDED

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Begin
      , typename End
      , typename State
      , typename Context
      , typename Fun
      , bool IsEmpty
    >
    struct segmented_fold_until_iterate_skip_empty;

    template <
        typename Segments
      , typename State
      , typename Context
      , typename Fun
    >
    struct segmented_fold_until_on_segments;

    template <typename Apply>
    struct continue_wrap
    {
        typedef typename Apply::continue_type type;
    };
}}}

#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/view/iterator_range/iterator_range.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    //auto push_context(cur, end, context)
    //{
    //  return push_back(context, segment_sequence(iterator_range(cur, end)));
    //}

    template <typename Cur, typename End, typename Context>
    struct push_context
    {
        typedef ::boost::fusion::iterator_range<Cur, End> range_type;
        typedef ::boost::fusion::cons<range_type, Context> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(Cur const& cur, End const& end, Context const& context)
        {
            return ::boost::fusion::cons<range_type, Context>(
                range_type(cur, end)
              , context
            );
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/segmented_iterator_fwd.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

// fun(seq, state, context)
//  seq: a non-segmented range
//  state: the state of the fold so far
//  context: the path to the current range
//
// returns: (state', fcontinue)

namespace boost { namespace fusion { namespace result_of
{
    //auto make_segmented_iterator(cur, end, context)
    //{
    //    return segmented_iterator(push_context(cur, end, context));
    //}

    template <typename Cur, typename Context>
    struct make_segmented_iterator
    {
        typedef ::boost::fusion::iterator_range<
            Cur
          , typename ::boost::fusion::result_of::end<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                typename ::boost::remove_reference<
                    typename ::boost::add_const<
#else
                typename ::std::remove_reference<
                    typename ::std::add_const<
#endif
                        typename ::boost::fusion::result_of::deref<
                            typename Context::car_type::begin_type
                        >::type
                    >::type
                >::type
            >::type
        > range_type;

        typedef ::boost::fusion::segmented_iterator<
            ::boost::fusion::cons<range_type, Context>
        > type;
    };
}}}

namespace boost { namespace fusion
{
    template <typename Cur, typename Context>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::make_segmented_iterator<
        Cur
      , Context
    >::type
    make_segmented_iterator(Cur const& cur, Context const& context)
    {
        typedef ::boost::fusion::result_of::make_segmented_iterator<
            Cur
          , Context
        > impl_type;
        typedef typename impl_type::type type;
        typedef typename impl_type::range_type range_type;
        return type(
            ::boost::fusion::cons<range_type, Context>(
                range_type(cur, ::boost::fusion::end(*context.car.first))
              , context
            )
        );
    }
}}

#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Begin
      , typename End
      , typename State
      , typename Context
      , typename Fun
      , bool IsDone = ::boost::fusion::result_of
        ::equal_to<Begin, End>::type::value
    >
    struct segmented_fold_until_iterate;
}}}

#include <boost/fusion/support/is_segmented.hpp>

namespace boost { namespace fusion { namespace detail
{
    //auto segmented_fold_until_impl(seq, state, context, fun)
    //{
    //    if (is_segmented(seq))
    //    {
    //        return segmented_fold_until_on_segments(
    //            segments(seq)
    //          , state
    //          , context
    //          , fun
    //        );
    //    }
    //    else
    //    {
    //        return fun(seq, state, context);
    //    }
    //}

    template <
        typename Sequence
      , typename State
      , typename Context
      , typename Fun
      , bool IsSegmented = ::boost::fusion::traits
        ::is_segmented<Sequence>::type::value
    >
    struct segmented_fold_until_impl;

    template <
        typename Sequence
      , typename State
      , typename Context
      , typename Fun
    >
    struct segmented_fold_until_impl<Sequence, State, Context, Fun, false>
    {
        typedef typename Fun::template apply<
            Sequence
          , State
          , Context
        > apply_type;

        typedef typename apply_type::type type;
        typedef typename apply_type::continue_type continue_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Sequence& seq
          , State const& state
          , Context const& context
          , Fun const& fun
        )
        {
            return apply_type::call(seq, state, context, fun);
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/segments.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Sequence
      , typename State
      , typename Context
      , typename Fun
      , bool IsSegmented
    >
    struct segmented_fold_until_impl
    {
        typedef ::boost::fusion::detail::segmented_fold_until_on_segments<
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
          , State
          , Context
          , Fun
        > impl;

        typedef typename impl::type type;
        typedef typename impl::continue_type continue_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Sequence& seq
          , State const& state
          , Context const& context
          , Fun const& fun
        )
        {
            return impl::call(
                ::boost::fusion::segments(seq)
              , state
              , context
              , fun
            );
        }
    };
}}}

#include <boost/fusion/iterator/detail/segmented_next_impl.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace detail
{
    //auto segmented_fold_until_on_segments(segs, state, context, fun)
    //{
    //    auto cur = begin(segs), end = end(segs);
    //    for (; cur != end; ++cur)
    //    {
    //        if (empty(*cur))
    //        {
    //            continue;
    //        }
    //        auto context` = push_context(cur, end, context);
    //        state = segmented_fold_until_impl(*cur, state, context`, fun);
    //        if (!second(state))
    //        {
    //            return state;
    //        }
    //    }
    //}

    template <
        typename Begin
      , typename End
      , typename State
      , typename Context
      , typename Fun
      , bool IsEmpty
    >
    struct segmented_fold_until_iterate_skip_empty
    {
        // begin != end and !empty(*begin)
        typedef ::boost::fusion::detail::push_context<
            Begin
          , End
          , Context
        > push_context_impl;

        typedef typename push_context_impl::type next_context_type;

        typedef ::boost::fusion::detail::segmented_fold_until_impl<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::remove_reference<
                typename ::boost::add_const<
#else
            typename ::std::remove_reference<
                typename ::std::add_const<
#endif
                    typename ::boost::fusion::result_of::deref<Begin>::type
                >::type
            >::type
          , State
          , next_context_type
          , Fun
        > fold_recurse_impl;

        typedef typename fold_recurse_impl::type next_state_type;

        typedef ::boost::fusion::detail::segmented_fold_until_iterate<
            typename ::boost::fusion::result_of::next<Begin>::type
          , End
          , next_state_type
          , Context
          , Fun
        > next_iteration_impl;

        typedef typename ::boost::mpl::eval_if<
            typename fold_recurse_impl::continue_type
          , next_iteration_impl
          , ::boost::mpl::identity<next_state_type>
        >::type type;

        typedef typename ::boost::mpl::eval_if<
            typename fold_recurse_impl::continue_type
          , ::boost::fusion::detail::continue_wrap<next_iteration_impl>
          , ::boost::mpl::identity< ::boost::mpl::false_>
        >::type continue_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Begin const& beg
          , End const& end
          , State const& state
          , Context const& context
          , Fun const& fun
        )
        {
            return ::boost::fusion::detail
            ::segmented_fold_until_iterate_skip_empty<
                Begin
              , End
              , State
              , Context
              , Fun
              , IsEmpty
            >::call(
                beg
              , end
              , state
              , context
              , fun
              , typename fold_recurse_impl::continue_type()
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Begin const& beg
          , End const& end
          , State const& state
          , Context const& context
          , Fun const& fun
          , ::boost::mpl::true_
        ) // continue
        {
            return next_iteration_impl::call(
                ::boost::fusion::next(beg)
              , end
              , fold_recurse_impl::call(
                    *beg
                  , state
                  , push_context_impl::call(beg, end, context)
                  , fun
                )
              , context
              , fun
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Begin const& beg
          , End const& end
          , State const& state
          , Context const& context
          , Fun const& fun
          , ::boost::mpl::false_
        ) // break
        {
            return fold_recurse_impl::call(
                *beg
              , state
              , push_context_impl::call(beg, end, context)
              , fun
            );
        }
    };

    template <
        typename Begin
      , typename End
      , typename State
      , typename Context
      , typename Fun
    >
    struct segmented_fold_until_iterate_skip_empty<
        Begin
      , End
      , State
      , Context
      , Fun
      , true
    >
    {
        typedef ::boost::fusion::detail::segmented_fold_until_iterate<
            typename ::boost::fusion::result_of::next<Begin>::type
          , End
          , State
          , Context
          , Fun
        > impl;
            
        typedef typename impl::type type;
        typedef typename impl::continue_type continue_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Begin const& beg
          , End const& end
          , State const& state
          , Context const& context
          , Fun const& fun
        )
        {
            return impl::call(
                ::boost::fusion::next(beg)
              , end
              , state
              , context
              , fun
            );
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/empty.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Begin
      , typename End
      , typename State
      , typename Context
      , typename Fun
      , bool IsDone
    >
    struct segmented_fold_until_iterate
    {
        typedef typename ::boost::fusion::result_of::empty<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::remove_reference<
#else
            typename ::std::remove_reference<
#endif
                typename ::boost::fusion::result_of::deref<Begin>::type
            >::type
        >::type empty_type;

        typedef ::boost::fusion::detail
        ::segmented_fold_until_iterate_skip_empty<
            Begin
          , End
          , State
          , Context
          , Fun
          , empty_type::value
        > impl;
            
        typedef typename impl::type type;
        typedef typename impl::continue_type continue_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Begin const& beg
          , End const& end
          , State const& state
          , Context const& context
          , Fun const& fun
        )
        {
            return impl::call(beg, end, state, context, fun);
        }
    };

    template <
        typename Begin
      , typename End
      , typename State
      , typename Context
      , typename Fun
    >
    struct segmented_fold_until_iterate<Begin, End, State, Context, Fun, true>
    {
        typedef State type;
        typedef ::boost::mpl::true_ continue_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Begin const&
          , End const&
          , State const& state
          , Context const&
          , Fun const&
        )
        {
            return state;
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Segments
      , typename State
      , typename Context
      , typename Fun
    >
    struct segmented_fold_until_on_segments
    {
        typedef ::boost::fusion::detail::segmented_fold_until_iterate<
            typename ::boost::fusion::result_of::begin<Segments>::type
          , typename ::boost::fusion::result_of::end<Segments>::type
          , State
          , Context
          , Fun
        > impl;

        typedef typename impl::type type;
        typedef typename impl::continue_type continue_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            Segments& segs
          , State const& state
          , Context const& context
          , Fun const& fun
        )
        {
            return impl::call(
                ::boost::fusion::begin(segs)
              , ::boost::fusion::end(segs)
              , state
              , context
              , fun
            );
        }
    };
}}}

#endif  // include guard

