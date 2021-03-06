/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SINGLE_VIEW_VALUE_OF_IMPL_05052005_0324)
#define BOOST_FUSION_SINGLE_VIEW_VALUE_OF_IMPL_05052005_0324

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/view/single_view/single_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/mpl/equal_to.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::single_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            BOOST_MPL_ASSERT((
                ::boost::mpl::equal_to<
                    typename Iterator::position
                  , ::boost::mpl::int_<0>
                >
            ));
            typedef typename Iterator::value_type type;
        };
    };
}}}

#endif  // include guard

