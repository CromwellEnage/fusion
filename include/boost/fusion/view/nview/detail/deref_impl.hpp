/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_DEREF_IMPL_SEP_24_2009_0818AM)
#define BOOST_FUSION_NVIEW_DEREF_IMPL_SEP_24_2009_0818AM

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::nview_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename Iterator::sequence_type sequence_type;
            typedef typename ::boost::fusion::result_of
            ::value_of<first_type>::type index;
            typedef typename ::boost::fusion::result_of
            ::at<typename sequence_type::sequence_type, index>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return ::boost::fusion::at<index>(i.seq.seq);
            }
        };
    };
}}}

#endif  // include guard

