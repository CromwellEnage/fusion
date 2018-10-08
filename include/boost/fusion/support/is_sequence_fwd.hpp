/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SUPPORT_IS_SEQUENCE_FWD_HPP)
#define BOOST_FUSION_SUPPORT_IS_SEQUENCE_FWD_HPP

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct is_sequence_impl;
}}}

namespace boost { namespace fusion { namespace traits
{
    template <typename T>
    struct is_sequence;
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_sequence_impl< ::boost::fusion::boost_tuple_tag>;

    template <>
    struct is_sequence_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct is_sequence_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct is_sequence_impl< ::boost::fusion::std_pair_tag>;
}}}

#endif  // include guard

