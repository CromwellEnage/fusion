/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_HAS_KEY_09232005_1454)
#define FUSION_HAS_KEY_09232005_1454

#include <boost/fusion/sequence/intrinsic/detail/has_key.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/algorithm/query/find.hpp>
#include <boost/mpl/not.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct has_key_impl
    {
        template <typename Seq, typename Key>
        struct apply :
            ::boost::mpl::not_<
                typename ::boost::fusion::result_of::equal_to<
                    typename ::boost::fusion::result_of::find<Seq, Key>::type
                  , typename ::boost::fusion::result_of::end<Seq>::type
                >::type
            >
        {
        };
    };
}}}

#endif  // include guard

