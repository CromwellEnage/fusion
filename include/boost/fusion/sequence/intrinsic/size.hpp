/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SIZE_05052005_0214)
#define FUSION_SIZE_05052005_0214

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/segmented_size.hpp>
#include <boost/fusion/support/is_segmented.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct size_impl
    {
        template <typename Sequence>
        struct apply :
            ::boost::mpl::if_<
                ::boost::fusion::traits::is_segmented<Sequence>
              , ::boost::fusion::detail::segmented_size<Sequence>
              , ::boost::fusion::detail::unsegmented_size<Sequence>
            >::type
        {
        };
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct size_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence>
        struct apply : Sequence::template size<Sequence>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>
#include <boost/mpl/int.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct size :
        ::boost::mpl::int_<
            ::boost::fusion::extension::size_impl<
                typename ::boost::fusion::detail::tag_of<Sequence>::type
            >::template apply<Sequence>::type::value
        >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::size<Sequence>::type
    size(Sequence const&)
    {
        typedef typename ::boost::fusion::result_of::size<
            Sequence
        >::type result;
        return result();
    }
}}

#endif  // include guard

