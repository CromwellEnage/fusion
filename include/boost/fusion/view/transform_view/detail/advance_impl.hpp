/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ADVANCE_IMPL_13122005_1906)
#define FUSION_ADVANCE_IMPL_13122005_1906

#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/view/transform_view/transform_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    // Unary Version
    template <>
    struct advance_impl< ::boost::fusion::transform_view_iterator_tag>
    {
        template <typename Iterator, typename Dist>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename ::boost::fusion::result_of
            ::advance<first_type, Dist>::type advanced_type;
            typedef typename Iterator::transform_type transform_type;
            typedef ::boost::fusion
            ::transform_view_iterator<advanced_type, transform_type> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(::boost::fusion::advance<Dist>(i.first), i.f);
            }
        };
    };

    // Binary Version
    template <>
    struct advance_impl< ::boost::fusion::transform_view_iterator2_tag>
    {
        template <typename Iterator, typename Dist>
        struct apply
        {
            typedef typename Iterator::first1_type first1_type;
            typedef typename Iterator::first2_type first2_type;
            typedef typename ::boost::fusion::result_of
            ::advance<first1_type, Dist>::type advanced1_type;
            typedef typename ::boost::fusion::result_of
            ::advance<first2_type, Dist>::type advanced2_type;
            typedef typename Iterator::transform_type transform_type;
            typedef ::boost::fusion::transform_view_iterator2<
                advanced1_type
              , advanced2_type
              , transform_type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(
                    ::boost::fusion::advance<Dist>(i.first1)
                  , ::boost::fusion::advance<Dist>(i.first2)
                  , i.f
                );
            }
        };
    };
}}}

#endif  // include guard

