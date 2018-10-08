/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ADVANCE_IMPL_14122005_2015)
#define FUSION_ADVANCE_IMPL_14122005_2015

#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/negate.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct advance_impl< ::boost::fusion::reverse_view_iterator_tag>
    {
        template <typename Iterator, typename Dist>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename ::boost::mpl::negate<Dist>::type negative_dist;
            typedef typename ::boost::fusion::result_of
            ::advance<first_type, negative_dist>::type advanced_type;
            typedef ::boost::fusion
            ::reverse_view_iterator<advanced_type> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(
                    ::boost::fusion::advance<negative_dist>(i.first)
                );
            }
        };
    };
}}}

#endif  // include guard

