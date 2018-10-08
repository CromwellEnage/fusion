/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_AT_KEY_20060304_1755)
#define BOOST_FUSION_AT_KEY_20060304_1755

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_key_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence, typename Key>
        struct apply : Sequence::template at_key_impl<Sequence, Key>
        {
        };
    };
}}}

#include <boost/fusion/algorithm/query/find.hpp>
#include <boost/fusion/iterator/deref_data.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct at_key_impl
    {
        template <typename Seq, typename Key>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::deref_data<
                typename ::boost::fusion::result_of::find<Seq, Key>::type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Seq& seq)
            {
                return ::boost::fusion::deref_data(
                    ::boost::fusion::find<Key>(seq)
                );
            }
        };
    };
}}}

#include <boost/fusion/sequence/intrinsic/has_key.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/empty_base.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename Key, typename Tag>
    struct at_key_impl :
        ::boost::mpl::if_<
            typename ::boost::mpl::if_<
                typename ::boost::fusion::extension::has_key_impl<
                    Tag
                >::template apply<Sequence, Key>
              , ::boost::mpl::true_
              , ::boost::fusion::traits::is_unbounded<Sequence>
            >::type
          , typename ::boost::fusion::extension
            ::at_key_impl<Tag>::template apply<Sequence, Key>
          , ::boost::mpl::empty_base
        >::type
    {
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename Key>
    struct at_key :
        ::boost::fusion::detail::at_key_impl<
            Sequence
          , Key
          , typename ::boost::fusion::detail::tag_of<Sequence>::type
        >
    {
    };
}}}

namespace boost { namespace fusion
{
    template <typename Key, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::at_key<Sequence const, Key>::type
    at_key(Sequence const& seq)
    {
        return ::boost::fusion::result_of
        ::at_key<Sequence const, Key>::call(seq);
    }
}}

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
    template <typename Key, typename Sequence>
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
      , ::boost::fusion::result_of::at_key<Sequence, Key>
    >::type
    at_key(Sequence& seq)
    {
        return ::boost::fusion::result_of::at_key<Sequence, Key>::call(seq);
    }
}}

#endif  // include guard

