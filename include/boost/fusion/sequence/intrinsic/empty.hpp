/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_EMPTY_09162005_0335)
#define FUSION_EMPTY_09162005_0335

#include <boost/fusion/sequence/intrinsic/empty.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct empty_impl
    {
        template <typename Sequence>
        struct apply :
            ::boost::mpl::bool_<
                (::boost::fusion::result_of::size<Sequence>::value == 0)
            >
        {
        };
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct empty_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence>
        struct apply : Sequence::template empty<Sequence>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct empty :
        ::boost::fusion::extension::empty_impl<
            typename ::boost::fusion::detail::tag_of<Sequence>::type
        >::template apply<Sequence>
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::empty<Sequence>::type
    empty(Sequence const&)
    {
        typedef typename ::boost::fusion::result_of::empty<
            Sequence
        >::type result;
        return result();
    }
}}

#endif  // include guard

