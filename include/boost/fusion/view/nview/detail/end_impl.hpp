/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_END_IMPL_SEP_24_2009_0140PM)
#define BOOST_FUSION_NVIEW_END_IMPL_SEP_24_2009_0140PM

#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/view/nview/nview_tag_fwd.hpp>
#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::nview_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::index_type index_type;

            typedef ::boost::fusion::nview_iterator<
                Sequence
              , typename ::boost::fusion::result_of::end<index_type>::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return type(s);
            }
        };
    };
}}}

#endif  // include guard

