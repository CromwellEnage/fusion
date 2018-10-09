/*============================================================================
    Copyright (c) 2007 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_REPETITIVE_VIEW_VALUE_OF_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_REPETITIVE_VIEW_VALUE_OF_IMPL_HPP_INCLUDED

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/view/repetitive_view/repetitive_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::repetitive_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply :
            ::boost::fusion::result_of::value_of<typename Iterator::pos_type>
        {
        };
    };
}}}

#endif  // include guard

