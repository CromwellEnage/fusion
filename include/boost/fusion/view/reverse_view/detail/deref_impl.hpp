/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DEREF_IMPL_07202005_0851)
#define FUSION_DEREF_IMPL_07202005_0851

#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::reverse_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::deref<
                typename ::boost::fusion::result_of
                ::prior<typename Iterator::first_type>::type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return *::boost::fusion::prior(i.first);
            }
        };
    };
}}}

#endif  // include guard

