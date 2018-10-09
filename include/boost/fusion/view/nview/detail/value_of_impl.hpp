/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_VALUE_OF_PRIOR_IMPL_SEP_24_2009_0158PM)
#define BOOST_FUSION_VALUE_OF_PRIOR_IMPL_SEP_24_2009_0158PM

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::nview_iterator_tag>
    {
        template <typename Iterator>
        struct apply 
        {
            typedef typename Iterator::first_type first_type;
            typedef typename Iterator::sequence_type sequence_type;
            typedef typename ::boost::fusion::result_of
            ::deref<first_type>::type index;
            typedef typename ::boost::fusion::result_of
            ::at<typename sequence_type::sequence_type, index>::type type;
        };
    };
}}}

#endif  // include guard

