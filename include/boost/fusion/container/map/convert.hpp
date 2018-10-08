/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_MAIN_09232005_1340)
#define FUSION_CONVERT_MAIN_09232005_1340

#include <boost/fusion/container/map/map.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_MAP)

///////////////////////////////////////////////////////////////////////////////
// C++11 variadic implementation
///////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/map/detail/build_map.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/support/category_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct as_map :
        ::boost::fusion::detail::build_map<
            typename ::boost::fusion::result_of::begin<Sequence>::type
          , typename ::boost::fusion::result_of::end<Sequence>::type
          , ::boost::fusion::traits::is_associative<Sequence>::value
        >
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_map<Sequence>::type
    as_map(Sequence& seq)
    {
        typedef ::boost::fusion::result_of::as_map<Sequence> gen;
        return gen::call(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_map<Sequence const>::type
    as_map(Sequence const& seq)
    {
        typedef ::boost::fusion::result_of::as_map<Sequence const> gen;
        return gen::call(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
    }
}}

#include <boost/fusion/sequence/convert_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct convert_impl< ::boost::fusion::map_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::as_map<Sequence>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                typedef ::boost::fusion::result_of::as_map<Sequence> gen;
                return gen::call(
                    ::boost::fusion::begin(seq)
                  , ::boost::fusion::end(seq)
                );
            }
        };
    };
}}}

#else

///////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
///////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/map/detail/cpp03/convert.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_MAP
#endif  // include guard

