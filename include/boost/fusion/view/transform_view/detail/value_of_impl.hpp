/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2018 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_OF_IMPL_07162005_1030)
#define FUSION_VALUE_OF_IMPL_07162005_1030

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/view/transform_view/transform_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/utility/result_of.hpp>

namespace boost { namespace fusion { namespace extension
{
    // Unary Version
    template <>
    struct value_of_impl< ::boost::fusion::transform_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::value_of<
                typename Iterator::first_type>
            ::type value_type;
            typedef typename Iterator::transform_type F;
            typedef typename ::boost::result_of<F(value_type)>::type type;
        };
    };

    // Binary Version
    template <>
    struct value_of_impl< ::boost::fusion::transform_view_iterator2_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::value_of<
                typename Iterator::first1_type
            >::type value1_type;
            typedef typename ::boost::fusion::result_of::value_of<
                typename Iterator::first2_type
            >::type value2_type;
            typedef typename Iterator::transform_type F;
            typedef typename ::boost::result_of<
                F(value1_type, value2_type)
            >::type type;
        };
    };
}}}

#endif  // include guard

