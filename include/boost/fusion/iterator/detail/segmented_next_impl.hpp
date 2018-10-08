/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_ITERATOR_NEXT_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_ITERATOR_NEXT_IMPL_HPP_INCLUDED

#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    //bool is_invalid(stack)
    //{
    //    return empty(car(stack));
    //}

    template <typename Stack>
    struct is_invalid :
        ::boost::fusion::result_of::equal_to<
            typename Stack::car_type::begin_type
          , typename Stack::car_type::end_type
        >
    {
    };
}}}

#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/segmented_iterator_fwd.hpp>
#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/view/iterator_range/iterator_range_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    ////Advance the first iterator in the seq at the top of
    ////a stack of iterator ranges.  Return the new stack.
    //auto pop_front_car(stack)
    //{
    //    return cons(
    //        iterator_range(next(begin(car(stack)))
    //      , end(car(stack)))
    //      , cdr(stack)
    //    );
    //}

    template <typename Stack>
    struct pop_front_car
    {
        typedef ::boost::fusion::iterator_range<
            typename ::boost::fusion::result_of
            ::next<typename Stack::car_type::begin_type>::type
          , typename Stack::car_type::end_type
        > car_type;
            
        typedef ::boost::fusion
        ::cons<car_type, typename Stack::cdr_type> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const& stack)
        {
            return type(
                car_type(
                    ::boost::fusion::next(stack.car.first)
                  , stack.car.last
                )
              , stack.cdr
            );
        }
    };

    template <
        typename Stack
      , typename Next = typename ::boost::fusion::detail
        ::pop_front_car<Stack>::type
      , bool IsInvalid = ::boost::fusion::detail::is_invalid<Next>::value
      , int StackSize = Stack::size::value
    >
    struct segmented_next_impl_recurse;

    ////Handle the case where the top of the stack has no usable
    //auto segmented_next_impl_recurse3(stack)
    //{
    //    if (size(stack) == 1)
    //        return cons(
    //            iterator_range(end(car(stack)), end(car(stack)))
    //          , nil_
    //        );
    //    else
    //        return segmented_next_impl_recurse(stack.cdr);
    //}

    template <
        typename Stack
      , int StackSize = Stack::size::value
    >
    struct segmented_next_impl_recurse3
    {
        typedef ::boost::fusion::detail::segmented_next_impl_recurse<
            typename Stack::cdr_type
        > impl;
        typedef typename impl::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return impl::call(stack.cdr);
        }
    };

    template <typename Stack>
    struct segmented_next_impl_recurse3<Stack, 1>
    {
        typedef typename Stack::car_type::end_type end_type;
        typedef ::boost::fusion
        ::iterator_range<end_type, end_type> range_type;
        typedef ::boost::fusion::cons<range_type> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return type(range_type(stack.car.last, stack.car.last));
        }
    };
}}}

#include <boost/fusion/iterator/detail/segmented_begin_impl_fwd.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    //auto segmented_next_impl_recurse2(stack)
    //{
    //    auto res = segmented_begin_impl(front(car(stack)), stack);
    //    if (is_invalid(res))
    //        return segmented_next_impl_recurse3(stack);
    //    else
    //        return res;
    //}

    template <
        typename Stack
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
      , typename Sequence = typename ::boost::remove_reference<
            typename ::boost::add_const<
#else
      , typename Sequence = typename ::std::remove_reference<
            typename ::std::add_const<
#endif
                typename ::boost::fusion::result_of
                ::deref<typename Stack::car_type::begin_type>::type
            >::type
        >::type
      , typename Result = typename ::boost::fusion::detail
        ::segmented_begin_impl<Sequence, Stack>::type
      , bool IsInvalid = ::boost::fusion::detail::is_invalid<Result>::value
    >
    struct segmented_next_impl_recurse2
    {
        typedef ::boost::fusion::detail
        ::segmented_next_impl_recurse3<Stack> impl;
        typedef typename impl::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return impl::call(stack);
        }
    };

    template <typename Stack, typename Sequence, typename Result>
    struct segmented_next_impl_recurse2<Stack, Sequence, Result, false>
    {
        typedef Result type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return ::boost::fusion::detail
            ::segmented_begin_impl<Sequence, Stack>
            ::call(*stack.car.first, stack);
        }
    };

    //auto segmented_next_impl_recurse(stack)
    //{
    //    auto next = pop_front_car(stack);
    //    if (is_invalid(next))
    //        if (1 == size(stack))
    //            return next;
    //        else
    //            return segmented_next_impl_recurse(cdr(stack));
    //    else
    //        return segmented_next_impl_recurse2(next)
    //}

    template <typename Stack, typename Next, bool IsInvalid, int StackSize>
    struct segmented_next_impl_recurse
    {
        typedef typename ::boost::fusion::detail
        ::segmented_next_impl_recurse<typename Stack::cdr_type>::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const& stack)
        {
            return ::boost::fusion::detail::segmented_next_impl_recurse<
                typename Stack::cdr_type
            >::call(stack.cdr);
        }
    };

    template <typename Stack, typename Next>
    struct segmented_next_impl_recurse<Stack, Next, true, 1>
    {
        typedef Next type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return ::boost::fusion::detail::pop_front_car<Stack>::call(stack);
        }
    };

    template <typename Stack, typename Next, int StackSize>
    struct segmented_next_impl_recurse<Stack, Next, false, StackSize>
    {
        typedef ::boost::fusion::detail
        ::segmented_next_impl_recurse2<Next> impl;
        typedef typename impl::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return impl::call(
                ::boost::fusion::detail::pop_front_car<Stack>::call(stack)
            );
        }
    };

    //auto segmented_next_impl(stack)
    //{
    //    // car(stack) is a seq of values, not a seq of segments
    //    auto next = pop_front_car(stack);
    //    if (is_invalid(next))
    //        return segmented_next_impl_recurse(cdr(next));
    //    else
    //        return next;
    //}

    template <
        typename Stack
      , typename Next = typename ::boost::fusion::detail
        ::pop_front_car<Stack>::type
      , bool IsInvalid = ::boost::fusion::detail::is_invalid<Next>::value
    >
    struct segmented_next_impl_aux
    {
        typedef ::boost::fusion::detail
        ::segmented_next_impl_recurse<typename Stack::cdr_type> impl;
        typedef typename impl::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return impl::call(stack.cdr);
        }
    };

    template <typename Stack, typename Next>
    struct segmented_next_impl_aux<Stack, Next, false>
    {
        typedef Next type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Stack const & stack)
        {
            return ::boost::fusion::detail::pop_front_car<Stack>::call(stack);
        }
    };
}}}

#include <boost/fusion/iterator/detail/segmented_next_impl_fwd.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Stack>
    struct segmented_next_impl :
        ::boost::fusion::detail::segmented_next_impl_aux<Stack>
    {
    };
}}}

#endif  // include guard

