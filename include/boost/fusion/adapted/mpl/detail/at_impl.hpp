/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_AT_IMPL_31122005_1642)
#define BOOST_FUSION_AT_IMPL_31122005_1642

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/at.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::mpl_sequence_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename ::boost::mpl::at<Sequence, N>::type type;
                
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence)
            {
                return type();
            }
        };
    };
}}}

#endif  // include guard

