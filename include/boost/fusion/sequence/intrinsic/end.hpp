/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_END_04052005_1141)
#define FUSION_END_04052005_1141

#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/sequence/intrinsic/detail/segmented_end.hpp>
#include <boost/fusion/support/is_segmented.hpp>
#include <boost/mpl/empty_base.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct end_impl
    {
        template <typename Sequence>
        struct apply :
            ::boost::mpl::if_<
                ::boost::fusion::traits::is_segmented<Sequence>
              , ::boost::fusion::detail::segmented_end<Sequence>
              , ::boost::mpl::empty_base
            >::type
        {
        };
    };
}}}

#endif  // include guard

