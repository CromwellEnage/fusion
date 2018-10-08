/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_NEXT_IMPL_07162005_1029)
#define FUSION_NEXT_IMPL_07162005_1029

#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/view/transform_view/transform_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    // Unary Version
    template <>
    struct next_impl< ::boost::fusion::transform_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename ::boost::fusion::result_of
            ::next<first_type>::type next_type;
            typedef typename Iterator::transform_type transform_type;
            typedef ::boost::fusion
            ::transform_view_iterator<next_type, transform_type> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(::boost::fusion::next(i.first), i.f);
            }
        };
    };

    // Binary Version
    template <>
    struct next_impl< ::boost::fusion::transform_view_iterator2_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first1_type first1_type;
            typedef typename Iterator::first2_type first2_type;
            typedef typename ::boost::fusion::result_of
            ::next<first1_type>::type next1_type;
            typedef typename ::boost::fusion::result_of
            ::next<first2_type>::type next2_type;
            typedef typename Iterator::transform_type transform_type;
            typedef ::boost::fusion::transform_view_iterator2<
                next1_type
              , next2_type
              , transform_type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(
                    ::boost::fusion::next(i.first1)
                  , ::boost::fusion::next(i.first2)
                  , i.f
                );
            }
        };
    };
}}}

#endif  // include guard

