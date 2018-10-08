/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ITERATOR_KEY_OF_HPP)
#define BOOST_FUSION_ITERATOR_KEY_OF_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct key_of_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename It>
        struct apply : It::template key_of<It>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename It>
    struct key_of :
        ::boost::fusion::extension::key_of_impl<
            typename ::boost::fusion::traits::tag_of<It>::type
        >::template apply<It>
    {
    };
}}}

#endif  // include guard

