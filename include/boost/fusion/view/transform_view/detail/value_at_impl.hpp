/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden
    Copyright (c) 2018 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(BOOST_FUSION_VALUE_AT_IMPL_20061101_0745)
#define BOOST_FUSION_VALUE_AT_IMPL_20061101_0745

#include <boost/fusion/sequence/intrinsic/value_at.hpp>
#include <boost/fusion/view/transform_view/transform_view_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/utility/result_of.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::transform_view_tag>
    {
        template <typename Seq, typename N>
        struct apply
        {
            typedef typename Seq::transform_type F;
            typedef typename ::boost::fusion::result_of
            ::value_at<typename Seq::sequence_type, N>::type value_type;
            typedef typename ::boost::result_of<F(value_type)>::type type;
        };
    };

    template <>
    struct value_at_impl< ::boost::fusion::transform_view2_tag>
    {
        template <typename Seq, typename N>
        struct apply
        {
            typedef typename Seq::transform_type F;
            typedef typename ::boost::fusion::result_of
            ::value_at<typename Seq::sequence1_type, N>::type value1_type;
            typedef typename ::boost::fusion::result_of
            ::value_at<typename Seq::sequence2_type, N>::type value2_type;
            typedef typename ::boost
            ::result_of<F(value1_type, value2_type)>::type type;
        };
    };
}}}

#endif  // include guard

