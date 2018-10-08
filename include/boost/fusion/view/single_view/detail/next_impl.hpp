/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SINGLE_VIEW_NEXT_IMPL_05052005_0331)
#define BOOST_FUSION_SINGLE_VIEW_NEXT_IMPL_05052005_0331

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/view/single_view/single_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/next.hpp>
#include <boost/static_assert.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct next_impl< ::boost::fusion::single_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef ::boost::fusion::single_view_iterator<
                typename Iterator::single_view_type
              , typename ::boost::mpl::next<
                    typename Iterator::position
                >::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                // Workaround for ICE on GCC 4.0.0.
                // see https://svn.boost.org/trac/boost/ticket/5808
                typedef typename type::position position;
                BOOST_STATIC_ASSERT((position::value < 2));
                return type(i.view);
            }
        };
    };
}}}

#endif  // include guard

