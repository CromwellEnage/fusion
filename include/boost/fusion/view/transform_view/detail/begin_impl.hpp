/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_BEGIN_IMPL_07162005_1031)
#define FUSION_BEGIN_IMPL_07162005_1031

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/transform_view/transform_view_fwd.hpp>
#include <boost/fusion/view/transform_view/transform_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    // Unary Version
    template <>
    struct begin_impl< ::boost::fusion::transform_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::first_type first_type;
            typedef typename Sequence::transform_type transform_type;
            typedef ::boost::fusion
            ::transform_view_iterator<first_type, transform_type> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return type(s.first(), s.f);
            }
        };
    };

    // Binary Version
    template <>
    struct begin_impl< ::boost::fusion::transform_view2_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::first1_type first1_type;
            typedef typename Sequence::first2_type first2_type;
            typedef typename Sequence::transform_type transform_type;
            typedef ::boost::fusion::transform_view_iterator2<
                first1_type
              , first2_type
              , transform_type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return type(s.first1(), s.first2(), s.f);
            }
        };
    };
}}}

#endif  // include guard

