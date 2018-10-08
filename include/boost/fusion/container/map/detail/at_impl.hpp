/*============================================================================
    Copyright (c) 2001-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_MAP_DETAIL_AT_IMPL_02042013_0821)
#define BOOST_FUSION_MAP_DETAIL_AT_IMPL_02042013_0821

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/map/map_tag_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>
#include <boost/type_traits/declval.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::map_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef ::boost::mpl::int_<N::value> index;
            typedef decltype(::boost::declval<Sequence>().get(index())) type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& m)
            {
                return m.get(index());
            }
        };

        template <typename Sequence, typename N>
        struct apply<Sequence const, N>
        {
            typedef ::boost::mpl::int_<N::value> index;
            typedef decltype(
                ::boost::declval<Sequence const>().get(index())
            ) type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence const& m)
            {
                return m.get(index());
            }
        };
    };
}}}

#endif  // include guard

