/*============================================================================
    Copyright (c) 2007 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_REPETITIVE_VIEW_DEREF_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_REPETITIVE_VIEW_DEREF_IMPL_HPP_INCLUDED

#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/view/repetitive_view/repetitive_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::repetitive_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::deref<typename Iterator::pos_type>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return *i.pos;
            }
        };
    };
}}}

#endif  // include guard

