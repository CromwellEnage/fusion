/*============================================================================
    Copyright (c) 2001-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_MAP_DETAIL_VALUE_AT_IMPL_02042013_0821)
#define BOOST_FUSION_MAP_DETAIL_VALUE_AT_IMPL_02042013_0821

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/map/map_tag_fwd.hpp>
#include <boost/mpl/int.hpp>
#include <boost/type_traits/declval.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::map_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef ::boost::mpl::int_<N::value> index;
            typedef decltype(
                ::boost::declval<Sequence>().get_val(index())
            ) type;
        };
    };
}}}

#endif  // include guard

