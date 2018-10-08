/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEQUENCE_INTRINSIC_FWD_HPP_INCLUDED)
#define BOOST_FUSION_SEQUENCE_INTRINSIC_FWD_HPP_INCLUDED

namespace boost { namespace fusion
{
    namespace extension
    {
        template <typename Tag>
        struct segments_impl;

        template <typename Tag>
        struct size_impl;

        template <typename Tag>
        struct empty_impl;

        template <typename Tag>
        struct begin_impl;

        template <typename Tag>
        struct end_impl;

        template <typename Tag>
        struct at_impl;

        template <typename Tag>
        struct value_at_impl;

        template <typename Tag>
        struct has_key_impl;

        template <typename Tag>
        struct at_key_impl;

        template <typename Tag>
        struct value_at_key_impl;
    }

    namespace result_of
    {
        template <typename Sequence>
        struct segments;

        template <typename Sequence>
        struct size;

        template <typename Sequence>
        struct empty;

        template <typename Sequence>
        struct begin;

        template <typename Sequence>
        struct end;

        template <typename Sequence>
        struct front;

        template <typename Sequence>
        struct back;

        template <typename Sequence, typename N>
        struct at;

        template <typename Sequence, int N>
        struct at_c;

        template <typename Sequence, typename N>
        struct value_at;

        template <typename Sequence, int N>
        struct value_at_c;

        template <typename Sequence, typename Key>
        struct has_key;

        template <typename Sequence, typename Key>
        struct at_key;

        template <typename Sequence, typename N>
        struct value_at_key;
    }
}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct segments_impl< ::boost::fusion::iterator_range_tag>;

    template <>
    struct size_impl< ::boost::fusion::boost_tuple_tag>;

    template <>
    struct size_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct size_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct size_impl< ::boost::fusion::std_pair_tag>;

    template <>
    struct empty_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct begin_impl< ::boost::fusion::boost_tuple_tag>;

    template <>
    struct begin_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct begin_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct begin_impl< ::boost::fusion::std_pair_tag>;

    template <>
    struct end_impl< ::boost::fusion::boost_tuple_tag>;

    template <>
    struct end_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct end_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct end_impl< ::boost::fusion::std_pair_tag>;

    template <>
    struct at_impl< ::boost::fusion::boost_tuple_tag>;

    template <>
    struct at_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct at_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct at_impl< ::boost::fusion::std_pair_tag>;

    template <>
    struct at_impl< ::boost::fusion::std_tuple_tag>;

    template <>
    struct value_at_impl< ::boost::fusion::boost_tuple_tag>;

    template <>
    struct value_at_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct value_at_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct value_at_impl< ::boost::fusion::std_pair_tag>;

    template <>
    struct has_key_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct has_key_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct has_key_impl< ::boost::fusion::std_pair_tag>;

    template <>
    struct at_key_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct at_key_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct at_key_impl< ::boost::fusion::std_pair_tag>;

    template <>
    struct value_at_key_impl< ::boost::fusion::boost_array_tag>;

    template <>
    struct value_at_key_impl< ::boost::fusion::mpl_sequence_tag>;

    template <>
    struct value_at_key_impl< ::boost::fusion::std_pair_tag>;
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::segments<Sequence const>::type
    segments(Sequence const& seq);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::size<Sequence>::type
    size(Sequence const&);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::empty<Sequence>::type
    empty(Sequence const&);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::front<Sequence>::type
    front(Sequence& seq);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::front<Sequence const>::type
    front(Sequence const& seq);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::back<Sequence>::type
    back(Sequence& seq);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::back<Sequence const>::type
    back(Sequence const& seq);

    template <typename N, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::at<Sequence const, N>::type
    at(Sequence const& seq);

    template <int N, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::at_c<Sequence const, N>::type
    at_c(Sequence const& seq);

    template <typename Key, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::has_key<Sequence, Key>::type
    has_key(Sequence const& seq);

    template <typename Key, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::fusion::result_of::at_key<Sequence const, Key>::type
    at_key(Sequence const& seq);
}}

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::result_of::begin<Sequence>
    >::type const
    begin(Sequence& seq);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::result_of::begin<Sequence const>
    >::type const
    begin(Sequence const& seq);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::result_of::end<Sequence>
    >::type const
    end(Sequence& seq);

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::boost::fusion::result_of::end<Sequence const>
    >::type const
    end(Sequence const& seq);
}}

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

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
    segments(Sequence& seq);

    template <typename N, typename Sequence>
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
      , ::boost::fusion::result_of::at<Sequence, N>
    >::type
    at(Sequence& seq);

    template <int N, typename Sequence>
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
      , ::boost::fusion::result_of::at_c<Sequence, N>
    >::type
    at_c(Sequence& seq);

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
    at_key(Sequence& seq);
}}

#endif  // include guard

