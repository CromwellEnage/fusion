/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_END_IMPL_07202005_0851)
#define FUSION_END_IMPL_07202005_0851

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_tag_fwd.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::reverse_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion
            ::reverse_view_iterator<typename Sequence::first_type> type;
    
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence const& s)
            {
                return type(s.first());
            }
        };
    };
}}}

#endif  // include guard

