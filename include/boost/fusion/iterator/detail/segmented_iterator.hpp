/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_ITERATOR_SEGMENTED_ITERATOR_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_ITERATOR_SEGMENTED_ITERATOR_HPP_INCLUDED

#include <boost/fusion/iterator/segmented_iterator_fwd.hpp>
#include <boost/fusion/iterator/iterator_facade.hpp>
#include <boost/fusion/iterator/key_of.hpp>
#include <boost/fusion/iterator/deref_data.hpp>
#include <boost/fusion/iterator/value_of_data.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/iterator/detail/segmented_next_impl_fwd.hpp>
#include <boost/fusion/iterator/detail/segmented_equal_to.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion
{
    // A segmented iterator wraps a "context", which is a cons list
    // of ranges, the frontmost is range over values and the rest
    // are ranges over internal segments.
    template <typename Context>
    struct segmented_iterator :
        ::boost::fusion::iterator_facade<
            ::boost::fusion::segmented_iterator<Context>
          , ::boost::fusion::forward_traversal_tag
        >
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit segmented_iterator(Context const& ctx) : context(ctx)
        {
        }

        //auto key_of(it)
        //{
        //    return key_of(begin(car(it.context)))
        //}
        template <typename It>
        struct key_of :
            ::boost::fusion::result_of::key_of<
                typename It::context_type::car_type::begin_type
            >
        {
        };

        //auto deref_data(it)
        //{
        //    return deref_data(begin(car(it.context)))
        //}
        template <typename It>
        struct deref_data
        {
            typedef typename ::boost::fusion::result_of::deref_data<
                typename It::context_type::car_type::begin_type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It const& it)
            {
                return ::boost::fusion::deref_data(it.context.car.first);
            }
        };

        //auto value_of_data(it)
        //{
        //    return value_of_data(begin(car(it.context)))
        //}
        template <typename It>
        struct value_of_data :
            ::boost::fusion::result_of::value_of_data<
                typename It::context_type::car_type::begin_type
            >
        {
        };

        //auto deref(it)
        //{
        //    return deref(begin(car(it.context)))
        //}
        template <typename It>
        struct deref
        {
            typedef typename ::boost::fusion::result_of::deref<
                typename It::context_type::car_type::begin_type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It const& it)
            {
                return *it.context.car.first;
            }
        };

        //auto value_of(it)
        //{
        //  return value_of(begin(car(it.context)))
        //}
        template <typename It>
        struct value_of :
            ::boost::fusion::result_of::value_of<
                typename It::context_type::car_type::begin_type
            >
        {
        };

        template <typename It>
        struct next
        {
            typedef ::boost::fusion::detail::segmented_next_impl<
                typename It::context_type
            > impl;
            typedef ::boost::fusion::segmented_iterator<
                typename impl::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It const& it)
            {
                return type(impl::call(it.context));
            }
        };

        // Compare all the segment iterators in each stack,
        // starting with the bottom-most.
        template <
            typename It1
          , typename It2
          , int Size1 = It1::context_type::size::value
          , int Size2 = It2::context_type::size::value
        >
        struct equal_to : ::boost::mpl::false_
        {
        };

        template <typename It1, typename It2, int Size>
        struct equal_to<It1, It2, Size, Size> :
            ::boost::fusion::detail::segmented_equal_to<
                typename It1::context_type
              , typename It2::context_type
            >
        {
        };

        typedef Context context_type;
        context_type context;
    };
}}

#endif  // include guard

