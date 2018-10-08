/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_NEXT_05042005_1101)
#define FUSION_NEXT_05042005_1101

#include <boost/fusion/iterator/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct next_impl
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
    struct next_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename Iterator>
        struct apply : Iterator::template next<Iterator>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Iterator>
    struct next :
        ::boost::fusion::extension::next_impl<
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
    inline typename ::boost::fusion::result_of::next<Iterator>::type const
    next(Iterator const& i)
    {
        return ::boost::fusion::result_of::next<Iterator>::call(i);
    }
}}

#endif  // include guard

