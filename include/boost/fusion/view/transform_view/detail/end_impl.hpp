/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_END_IMPL_07162005_1028)
#define FUSION_END_IMPL_07162005_1028

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/transform_view/transform_view_fwd.hpp>
#include <boost/fusion/view/transform_view/transform_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    // Unary Version
    template <>
    struct end_impl< ::boost::fusion::transform_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::last_type last_type;
            typedef typename Sequence::transform_type transform_type;
            typedef ::boost::fusion
            ::transform_view_iterator<last_type, transform_type> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return type(s.last(), s.f);
            }
        };
    };

    // Binary Version
    template <>
    struct end_impl< ::boost::fusion::transform_view2_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::last1_type last1_type;
            typedef typename Sequence::last2_type last2_type;
            typedef typename Sequence::transform_type transform_type;
            typedef ::boost::fusion::transform_view_iterator2<
                last1_type
              , last2_type
              , transform_type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return type(s.last1(), s.last2(), s.f);
            }
        };
    };
}}}

#endif  // include guard

