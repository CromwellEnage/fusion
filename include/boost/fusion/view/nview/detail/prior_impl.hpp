/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_PRIOR_IMPL_SEP_24_2009_0142PM)
#define BOOST_FUSION_NVIEW_PRIOR_IMPL_SEP_24_2009_0142PM

#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct prior_impl< ::boost::fusion::nview_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename Iterator::sequence_type sequence_type;
            typedef ::boost::fusion::nview_iterator<
                sequence_type
              , typename ::boost::fusion::result_of::prior<first_type>::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.seq);
            }
        };
    };
}}}

#endif  // include guard

