/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_VIEW_FILTER_VIEW_DETAIL_DEREF_DATA_IMPL_HPP)
#define BOOST_FUSION_VIEW_FILTER_VIEW_DETAIL_DEREF_DATA_IMPL_HPP

#include <boost/fusion/iterator/deref_data.hpp>
#include <boost/fusion/view/filter_view/filter_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_data_impl< ::boost::fusion::filter_view_iterator_tag>
    {
        template <typename It>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::deref_data<typename It::first_type>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It const& it)
            {
                return ::boost::fusion::deref_data(it.first);
            }
        };
    };
}}}

#endif  // include guard

