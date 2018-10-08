/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEQUENCE_INTRINSIC_DETAIL_HAS_KEY_HPP)
#define BOOST_FUSION_SEQUENCE_INTRINSIC_DETAIL_HAS_KEY_HPP

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct has_key_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence, typename Key>
        struct apply : Sequence::template has_key<Sequence, Key>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename Key>
    struct has_key :
        ::boost::fusion::extension::has_key_impl<
            typename ::boost::fusion::detail::tag_of<Sequence>::type
        >::template apply<Sequence, Key>
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Key, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::has_key<Sequence, Key>::type
    has_key(Sequence const&)
    {
        typedef typename ::boost::fusion::result_of::has_key<
            Sequence
          , Key
        >::type result;
        return result();
    }
}}

#endif  // include guard

