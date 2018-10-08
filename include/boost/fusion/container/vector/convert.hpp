/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_09222005_1104)
#define FUSION_CONVERT_09222005_1104

#include <boost/fusion/container/vector/detail/as_vector.hpp>
#include <boost/fusion/container/vector/detail/convert_impl.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct as_vector
    {
        typedef ::boost::fusion::detail::as_vector<
            ::boost::fusion::result_of::size<Sequence>::value
        > gen;
        typedef typename gen::template apply<
            typename ::boost::fusion::result_of::begin<Sequence>::type
        >::type type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::as_vector<Sequence>::type
    as_vector(Sequence& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::as_vector<Sequence>::gen gen;
        return gen::call(::boost::fusion::begin(seq));
    }

    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::as_vector<Sequence const>::type
    as_vector(Sequence const& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::as_vector<Sequence const>::gen gen;
        return gen::call(::boost::fusion::begin(seq));
    }
}}

#endif  // include guard

