/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_09232005_1340)
#define FUSION_CONVERT_09232005_1340

#include <boost/fusion/container/map/detail/cpp03/as_map.hpp>
#include <boost/fusion/container/map/detail/cpp03/convert_impl.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    namespace result_of
    {
        template <typename Sequence>
        struct as_map
        {
            typedef ::boost::fusion::detail::as_map<
                ::boost::fusion::result_of::size<Sequence>::value
              , ::boost::fusion::traits::is_associative<Sequence>::value
            > gen;
            typedef typename gen::template apply<
                typename ::boost::fusion::result_of::begin<Sequence>::type
            >::type type;
        };
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_map<Sequence>::type
    as_map(Sequence& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::as_map<Sequence>::gen gen;
        return gen::call(::boost::fusion::begin(seq));
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_map<Sequence const>::type
    as_map(Sequence const& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::as_map<Sequence const>::gen gen;
        return gen::call(::boost::fusion::begin(seq));
    }
}}

#endif  // include guard

