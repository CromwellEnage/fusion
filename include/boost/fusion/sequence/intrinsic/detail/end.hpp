/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEQUENCE_INTRINSIC_DETAIL_END_HPP)
#define BOOST_FUSION_SEQUENCE_INTRINSIC_DETAIL_END_HPP

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence>
        struct apply : Sequence::template end<Sequence>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct end :
        ::boost::fusion::extension::end_impl<
            typename ::boost::fusion::detail::tag_of<Sequence>::type
        >::template apply<Sequence>
    {
    };
}}}

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::result_of::end<Sequence>
    >::type const
    end(Sequence& seq)
    {
        return ::boost::fusion::result_of::end<Sequence>::call(seq);
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::result_of::end<Sequence const>
    >::type const
    end(Sequence const& seq)
    {
        return ::boost::fusion::result_of::end<Sequence const>::call(seq);
    }
}}

#endif  // include guard

