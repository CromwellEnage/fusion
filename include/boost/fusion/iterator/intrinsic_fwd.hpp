/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ITERATOR_INTRINSIC_FWD_HPP)
#define BOOST_FUSION_ITERATOR_INTRINSIC_FWD_HPP

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct key_of_impl;

    template <typename Tag>
    struct deref_data_impl;

    template <typename Tag>
    struct value_of_data_impl;

    template <typename Tag>
    struct deref_impl;

    template <typename Tag>
    struct value_of_impl;

    template <typename Tag>
    struct next_impl;

    template <typename Tag>
    struct prior_impl;

    template <typename Tag>
    struct equal_to_impl;

    template <typename Tag>
    struct advance_impl;

    template <typename Tag>
    struct distance_impl;
}}}

namespace boost { namespace fusion { namespace result_of
{
    template <typename Iterator>
    struct key_of;

    template <typename Iterator>
    struct deref_data;

    template <typename Iterator>
    struct value_of_data;

    template <typename Iterator>
    struct deref;

    template <typename Iterator>
    struct value_of;

    template <typename Iterator>
    struct next;

    template <typename Iterator>
    struct prior;

    template <typename Iterator1, typename Iterator2>
    struct equal_to;

    template <typename Iterator, int N>
    struct advance_c;

    template <typename Iterator, typename N>
    struct advance;

    template <typename Iterator1, typename Iterator2>
    struct distance;
}}}

#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::boost_array_iterator_tag>;

    template <>
    struct deref_impl< ::boost::fusion::mpl_iterator_tag>;

    template <>
    struct deref_impl< ::boost::fusion::std_pair_iterator_tag>;

    template <>
    struct value_of_impl< ::boost::fusion::boost_array_iterator_tag>;

    template <>
    struct value_of_impl< ::boost::fusion::mpl_iterator_tag>;

    template <>
    struct value_of_impl< ::boost::fusion::std_pair_iterator_tag>;

    template <>
    struct next_impl< ::boost::fusion::boost_array_iterator_tag>;

    template <>
    struct next_impl< ::boost::fusion::mpl_iterator_tag>;

    template <>
    struct next_impl< ::boost::fusion::std_pair_iterator_tag>;

    template <>
    struct prior_impl< ::boost::fusion::boost_array_iterator_tag>;

    template <>
    struct prior_impl< ::boost::fusion::mpl_iterator_tag>;

    template <>
    struct prior_impl< ::boost::fusion::std_pair_iterator_tag>;

    template <>
    struct equal_to_impl< ::boost::fusion::boost_array_iterator_tag>;

    template <>
    struct equal_to_impl< ::boost::fusion::mpl_iterator_tag>;

    template <>
    struct equal_to_impl< ::boost::fusion::std_pair_iterator_tag>;

    template <>
    struct advance_impl< ::boost::fusion::boost_array_iterator_tag>;

    template <>
    struct advance_impl< ::boost::fusion::mpl_iterator_tag>;

    template <>
    struct advance_impl< ::boost::fusion::std_pair_iterator_tag>;

    template <>
    struct distance_impl< ::boost::fusion::boost_array_iterator_tag>;

    template <>
    struct distance_impl< ::boost::fusion::mpl_iterator_tag>;

    template <>
    struct distance_impl< ::boost::fusion::std_pair_iterator_tag>;
}}}

#endif  // include guard

