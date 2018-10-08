/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_IMPL_09232005_1215)
#define FUSION_CONVERT_IMPL_09232005_1215

#include <boost/fusion/sequence/convert_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/container/list/cons.hpp>
#include <boost/fusion/container/list/detail/build_cons.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct convert_impl< ::boost::fusion::cons_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename ::boost::fusion::detail::build_cons<
                typename ::boost::fusion::result_of::begin<Sequence>::type
              , typename ::boost::fusion::result_of::end<Sequence>::type
            > build_cons;

            typedef typename build_cons::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                return build_cons::call(
                    ::boost::fusion::begin(seq)
                  , ::boost::fusion::end(seq)
                );
            }
        };
    };
}}}

#endif  // include guard

