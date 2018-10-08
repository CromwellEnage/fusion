/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_PRIOR_05042005_1144)
#define FUSION_PRIOR_05042005_1144

#include <boost/fusion/iterator/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct prior_impl
    {
        template <typename Iterator>
        struct apply
        {
        };
    };
}}}

#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct prior_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename Iterator>
        struct apply : Iterator::template prior<Iterator>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Iterator>
    struct prior :
        ::boost::fusion::extension::prior_impl<
            typename ::boost::fusion::detail::tag_of<Iterator>::type
        >::template apply<Iterator>
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Iterator>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::prior<Iterator>::type const
    prior(Iterator const& i)
    {
        return ::boost::fusion::result_of::prior<Iterator>::call(i);
    }
}}

#endif  // include guard

