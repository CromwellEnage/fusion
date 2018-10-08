/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_AT_KEY_05052005_0229)
#define FUSION_VALUE_AT_KEY_05052005_0229

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/value_of_data.hpp>
#include <boost/fusion/algorithm/query/find.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct value_at_key_impl
    {
        template <typename Seq, typename Key>
        struct apply :
            ::boost::fusion::result_of::value_of_data<
                typename ::boost::fusion::result_of::find<Seq, Key>::type
            >
        {
        };
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_key_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence, typename Key>
        struct apply : Sequence::template value_at_key<Sequence, Key>
        {
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
    template <typename Sequence, typename N, typename Tag>
    struct value_at_key_impl :
        ::boost::mpl::if_<
            typename ::boost::mpl::if_<
                typename ::boost::fusion::extension
                ::has_key_impl<Tag>::template apply<Sequence, N>
              , ::boost::mpl::true_
              , ::boost::fusion::traits::is_unbounded<Sequence>
            >::type
          , typename ::boost::fusion::extension
            ::value_at_key_impl<Tag>::template apply<Sequence, N>
          , ::boost::mpl::empty_base
        >::type
    {
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename N>
    struct value_at_key :
        ::boost::fusion::detail::value_at_key_impl<
            Sequence
          , N
          , typename ::boost::fusion::detail::tag_of<Sequence>::type
        >
    {
    };
}}}

#endif  // include guard

