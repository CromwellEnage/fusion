/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_SET_DETAIL_END_IMPL_HPP)
#define BOOST_FUSION_CONTAINER_SET_DETAIL_END_IMPL_HPP

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/set/set_tag_fwd.hpp>
#include <boost/fusion/iterator/basic_iterator.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::set_tag>
    {
        template <typename Seq>
        struct apply
        {
            typedef ::boost::fusion::basic_iterator<
                ::boost::fusion::set_iterator_tag
              , typename Seq::category
              , Seq
              , Seq::size::value
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Seq& seq)
            {
                return type(seq, 0);
            }
        };
    };
}}}

#endif  // include guard

