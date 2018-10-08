/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ITERATOR_RANGE_IS_SEGMENTED_HPP_INCLUDED)
#define BOOST_FUSION_ITERATOR_RANGE_IS_SEGMENTED_HPP_INCLUDED

namespace boost { namespace fusion { namespace detail
{
    template <typename Iterator>
    struct is_segmented_iterator;

    template <typename Iterator>
    struct is_segmented_iterator<Iterator&> :
        ::boost::fusion::detail::is_segmented_iterator<Iterator>
    {
    };

    template <typename Iterator>
    struct is_segmented_iterator<Iterator const> :
        ::boost::fusion::detail::is_segmented_iterator<Iterator>
    {
    };
}}}

#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Iterator>
    struct is_segmented_iterator : ::boost::mpl::false_
    {
    };
}}}

#include <boost/fusion/iterator/segmented_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Context>
    struct is_segmented_iterator<
        ::boost::fusion::segmented_iterator<Context>
    > : ::boost::mpl::true_
    {
    };
}}}

#include <boost/fusion/support/is_segmented_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/assert.hpp>

namespace boost { namespace fusion { namespace extension
{
    // An iterator_range of segmented_iterators is segmented
    template <>
    struct is_segmented_impl< ::boost::fusion::iterator_range_tag>
    {
        template <typename Sequence>
        struct apply :
            ::boost::fusion::detail::is_segmented_iterator<
                typename Sequence::begin_type
            >
        {
            BOOST_MPL_ASSERT_RELATION(
                ::boost::fusion::detail::is_segmented_iterator<
                    typename Sequence::begin_type
                >::value
              , ==
              , ::boost::fusion::detail::is_segmented_iterator<
                    typename Sequence::end_type
                >::value
            );
        };
    };
}}}

#endif  // include guard

