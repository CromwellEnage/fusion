/*============================================================================
    Copyright (c) 2006 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTS_04052005_1141)
#define BOOST_FUSION_SEGMENTS_04052005_1141

#include <boost/fusion/sequence/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    // segments: returns a sequence of sequences
    template <typename Tag>
    struct segments_impl
    {
        template <typename Sequence>
        struct apply
        {
        };
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct segments_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence>
        struct apply : Sequence::template segments<Sequence>
        {
        };
    }; 
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct segments :
        ::boost::fusion::extension::segments_impl<
            typename ::boost::fusion::traits::tag_of<
                Sequence
            >::type
        >::template apply<Sequence>
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::segments<Sequence const>::type
    segments(Sequence const& seq)
    {
        return ::boost::fusion::extension::segments_impl<
            typename ::boost::fusion::traits::tag_of<Sequence const>::type
        >::template apply<Sequence const>::call(seq);
    }
}}

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::lazy_disable_if<
        typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
            ::boost::is_const<Sequence>
#else
            ::std::is_const<Sequence>
#endif
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
      , ::boost::fusion::result_of::segments<Sequence>
    >::type
    segments(Sequence& seq)
    {
        return ::boost::fusion::extension::segments_impl<
            typename ::boost::fusion::traits::tag_of<Sequence>::type
        >::template apply<Sequence>::call(seq);
    }
}}

#endif  // include guard

