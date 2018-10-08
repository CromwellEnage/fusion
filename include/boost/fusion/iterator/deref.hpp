/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DEREF_05042005_1019)
#define FUSION_DEREF_05042005_1019

#include <boost/fusion/iterator/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct deref_impl
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
    struct deref_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename Iterator>
        struct apply : Iterator::template deref<Iterator>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Iterator>
    struct deref :
        ::boost::fusion::extension::deref_impl<
            typename ::boost::fusion::detail::tag_of<Iterator>::type
        >::template apply<Iterator>
    {
    };
}}}

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/iterator_base.hpp>

namespace boost { namespace fusion
{
    template <typename Iterator>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::deref<Iterator>::type
    deref(Iterator const& i)
    {
        typedef ::boost::fusion::result_of::deref<Iterator> deref_meta;
        return deref_meta::call(i);
    }

    template <typename Iterator>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::deref<Iterator>::type
    operator*(::boost::fusion::iterator_base<Iterator> const& i)
    {
        return ::boost::fusion::deref(i.cast());
    }
}}

#endif  // include guard

