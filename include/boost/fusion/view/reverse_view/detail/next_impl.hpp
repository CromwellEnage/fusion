/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_NEXT_IMPL_07202005_0856)
#define FUSION_NEXT_IMPL_07202005_0856

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct next_impl< ::boost::fusion::reverse_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename ::boost::fusion::extension::prior_impl<
                typename first_type::fusion_tag
            >::template apply<first_type> wrapped;
            typedef ::boost::fusion
            ::reverse_view_iterator<typename wrapped::type> type;
    
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(wrapped::call(i.first));
            }
        };
    };
}}}

#endif  // include guard

