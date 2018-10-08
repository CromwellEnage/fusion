/*============================================================================
    Copyright (c) 2005-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_MAP_END_IMPL_02042013_0857)
#define BOOST_FUSION_MAP_END_IMPL_02042013_0857

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/map/map_tag_fwd.hpp>
#include <boost/fusion/container/map/map_iterator.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::map_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::map_iterator<
                Sequence
              , Sequence::size::value
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                return type(seq);
            }
        };
    };
}}}

#endif  // include guard

