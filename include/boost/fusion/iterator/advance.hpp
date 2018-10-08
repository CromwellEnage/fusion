/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ADVANCE_09172005_1146)
#define FUSION_ADVANCE_09172005_1146

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/detail/advance.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/assert.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct advance_impl
    {
        // default implementation
        template <typename Iterator, typename N>
        struct apply :
            ::boost::mpl::if_c<
                (N::value > 0)
              , ::boost::fusion::advance_detail::forward<Iterator, N::value>
              , ::boost::fusion::advance_detail::backward<Iterator, N::value>
            >::type
        {
            BOOST_MPL_ASSERT_NOT((
                ::boost::fusion::traits::is_random_access<Iterator>
            ));
        };
    };
}}}

#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct advance_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename Iterator, typename N>
        struct apply : Iterator::template advance<Iterator, N>
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Iterator, typename N>
    struct advance :
        ::boost::fusion::extension::advance_impl<
            typename ::boost::fusion::detail::tag_of<Iterator>::type
        >::template apply<Iterator, N>
    {
    };
}}}

#include <boost/mpl/int.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Iterator, int N>
    struct advance_c :
        ::boost::fusion::extension::advance_impl<
            typename ::boost::fusion::detail::tag_of<Iterator>::type
        >::template apply<Iterator, boost::mpl::int_<N> >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <int N, typename Iterator>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::advance_c<Iterator, N>::type const
    advance_c(Iterator const& i)
    {
        return ::boost::fusion::result_of::advance_c<Iterator, N>::call(i);
    }

    template <typename N, typename Iterator>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::advance<Iterator, N>::type const
    advance(Iterator const& i)
    {
        return ::boost::fusion::result_of::advance<Iterator, N>::call(i);
    }
}}

#endif  // include guard

