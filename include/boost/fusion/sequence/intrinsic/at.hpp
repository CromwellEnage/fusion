/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_AT_05042005_0722)
#define FUSION_AT_05042005_0722

#include <boost/fusion/sequence/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct at_impl
    {
        template <typename Sequence, typename N>
        struct apply;
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence, typename N>
        struct apply : Sequence::template at<Sequence, N>
        {
        };
    };
}}}

#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/less.hpp>
#include <boost/mpl/empty_base.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename N, typename Tag>
    struct at_impl :
        ::boost::mpl::if_<
            typename ::boost::mpl::if_<
                ::boost::mpl::less<
                    N
                  , typename ::boost::fusion::extension
                    ::size_impl<Tag>::template apply<Sequence>::type
                >
              , ::boost::mpl::true_
              , ::boost::fusion::traits::is_unbounded<Sequence>
            >::type
          , typename ::boost::fusion::extension
            ::at_impl<Tag>::template apply<Sequence, N>
          , ::boost::mpl::empty_base
        >::type
    {
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename N>
    struct at :
        ::boost::fusion::detail::at_impl<
            Sequence
          , N
          , typename ::boost::fusion::detail::tag_of<Sequence>::type
        >
    {
    };
}}}

#include <boost/mpl/int.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, int N>
    struct at_c :
        ::boost::fusion::result_of::at<Sequence, ::boost::mpl::int_<N> >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename N, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::at<Sequence const, N>::type
    at(Sequence const& seq)
    {
        return ::boost::fusion::result_of::at<Sequence const, N>::call(seq);
    }

    template <int N, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::at_c<Sequence const, N>::type
    at_c(Sequence const& seq)
    {
        return ::boost::fusion::at< ::boost::mpl::int_<N> >(seq);
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
    at(Sequence& seq)
    {
        return ::boost::fusion::result_of::at<Sequence, N>::call(seq);
    }

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
    at_c(Sequence& seq)
    {
        return ::boost::fusion::at< ::boost::mpl::int_<N> >(seq);
    }
}}

#endif  // include guard

