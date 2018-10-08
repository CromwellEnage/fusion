/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_VIEW_JOINT_VIEW_DETAIL_VALUE_OF_DATA_IMPL_HPP)
#define BOOST_FUSION_VIEW_JOINT_VIEW_DETAIL_VALUE_OF_DATA_IMPL_HPP

#include <boost/fusion/iterator/value_of_data.hpp>
#include <boost/fusion/view/joint_view/joint_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_data_impl< ::boost::fusion::joint_view_iterator_tag>
    {
        template <typename It>
        struct apply :
            ::boost::fusion::result_of::value_of_data<typename It::first_type>
        {
        };
    };
}}}

#endif  // include guard

