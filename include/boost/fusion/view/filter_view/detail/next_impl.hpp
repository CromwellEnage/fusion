/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2018 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_NEXT_IMPL_06052005_0900)
#define FUSION_NEXT_IMPL_06052005_0900

#include <boost/fusion/view/filter_view/filter_view_iterator_fwd.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct next_impl< ::boost::fusion::filter_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename Iterator::last_type last_type;
            typedef typename Iterator::pred_type pred_type;
            typedef typename Iterator::category category;
            typedef typename ::boost::mpl::eval_if<
                ::boost::fusion::result_of::equal_to<first_type, last_type>
              , ::boost::mpl::identity<last_type>
              , ::boost::fusion::result_of::next<first_type>
            >::type next_type;
            typedef ::boost::fusion::filter_iterator<
                category
              , next_type
              , last_type
              , pred_type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(::boost::fusion::next(i.first));
            }
        };
    };
}}}

#endif  // include guard

