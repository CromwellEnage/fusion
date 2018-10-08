/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_VIEW_FILTER_VIEW_DETAIL_KEY_OF_IMPL_HPP)
#define BOOST_FUSION_VIEW_FILTER_VIEW_DETAIL_KEY_OF_IMPL_HPP

#include <boost/fusion/iterator/key_of.hpp>
#include <boost/fusion/view/filter_view/filter_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct key_of_impl< ::boost::fusion::filter_view_iterator_tag>
    {
        template <typename It>
        struct apply :
            ::boost::fusion::result_of::key_of<typename It::first_type>
        {
        };
    };
}}}

#endif  // include guard

