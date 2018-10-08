/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ITERATOR_DEREF_DATA_HPP)
#define BOOST_FUSION_ITERATOR_DEREF_DATA_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_data_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename It>
        struct apply : It::template deref_data<It>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion{ namespace result_of
{
    template <typename It>
    struct deref_data :
        ::boost::fusion::extension::deref_data_impl<
            typename ::boost::fusion::traits::tag_of<It>::type
        >::template apply<It>
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename It>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::deref_data<It>::type
    deref_data(It const& it)
    {
        return ::boost::fusion::result_of::deref_data<It>::call(it);
    }
}}

#endif  // include guard

