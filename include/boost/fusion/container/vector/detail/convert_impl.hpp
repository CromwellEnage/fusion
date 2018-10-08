/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_IMPL_09222005_1104)
#define FUSION_CONVERT_IMPL_09222005_1104

#include <boost/fusion/container/vector/detail/as_vector.hpp>
#include <boost/fusion/container/vector/vector_tag_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/sequence/convert_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct convert_impl< ::boost::fusion::vector_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::detail::as_vector<
                ::boost::fusion::result_of::size<Sequence>::value
            > gen;
            typedef typename gen::template apply<
                typename ::boost::fusion::result_of::begin<Sequence>::type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                return gen::call(::boost::fusion::begin(seq));
            }
        };
    };
}}}

#endif  // include guard

