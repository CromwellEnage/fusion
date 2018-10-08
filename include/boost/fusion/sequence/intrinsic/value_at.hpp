/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_AT_05052005_0229)
#define FUSION_VALUE_AT_05052005_0229

#include <boost/fusion/sequence/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct value_at_impl
    {
        template <typename Sequence, typename N>
        struct apply;
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence, typename N>
        struct apply : Sequence::template value_at<Sequence, N>
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
    struct value_at_impl :
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
            ::value_at_impl<Tag>::template apply<Sequence, N>
          , ::boost::mpl::empty_base
        >::type
    {
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename N>
    struct value_at :
        ::boost::fusion::detail::value_at_impl<
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
    struct value_at_c :
        ::boost::fusion::result_of::value_at<Sequence, ::boost::mpl::int_<N> >
    {
    };
}}}

#endif  // include guard

