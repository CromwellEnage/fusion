/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_IS_VIEW_03202006_0015)
#define FUSION_IS_VIEW_03202006_0015

#include <boost/fusion/support/is_view_fwd.hpp>
#include <boost/fusion/support/detail/is_view.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct is_view_impl
    {
        template <typename T>
        struct apply : ::boost::fusion::detail::fusion_is_view<T>
        {
        };
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_view_impl< ::boost::fusion::sequence_facade_tag>
    {
        template <typename Sequence>
        struct apply : Sequence::is_view
        {
        };
    };
}}}

#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_view_impl< ::boost::fusion::non_fusion_tag>
    {
        template <typename T>
        struct apply : ::boost::mpl::false_
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <typename T>
    struct is_view :
        ::boost::mpl::bool_<
            static_cast<bool>(
                ::boost::fusion::extension::is_view_impl<
                    typename ::boost::fusion::detail::tag_of<T>::type
                >::template apply<T>::type::value
            )
        >
    {
    };
}}}

#endif  // include guard

