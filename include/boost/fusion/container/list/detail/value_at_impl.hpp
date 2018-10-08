/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VALUE_AT_IMPL_07172005_0952)
#define FUSION_VALUE_AT_IMPL_07172005_0952

#include <boost/fusion/sequence/intrinsic/value_at.hpp>
#include <boost/fusion/container/list/cons_fwd.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_at_impl< ::boost::fusion::cons_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename ::boost::mpl::eval_if<
                ::boost::mpl::bool_<(N::value == 0)>
              , ::boost::mpl::identity<typename Sequence::car_type>
              , ::boost::fusion::extension::value_at_impl<
                    ::boost::fusion::cons_tag
                >::template apply<
                    typename Sequence::cdr_type
                  , ::boost::mpl::int_<(N::value - 1)>
                >
            >::type type;
        };
    };
}}}

#endif  // include guard

