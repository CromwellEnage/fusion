/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_BEGIN_IMPL_05062005_0903)
#define FUSION_BEGIN_IMPL_05062005_0903

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/filter_view/filter_view_tag_fwd.hpp>
#include <boost/fusion/view/filter_view/filter_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct begin_impl< ::boost::fusion::filter_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::filter_iterator<
                typename Sequence::category
              , typename Sequence::first_type
              , typename Sequence::last_type
              , typename Sequence::pred_type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return type(s.first());
            }
        };
    };
}}}

#endif  // include guard

