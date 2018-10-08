/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SINGLE_VIEW_BEGIN_IMPL_05052005_0305)
#define BOOST_FUSION_SINGLE_VIEW_BEGIN_IMPL_05052005_0305

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/single_view/single_view_fwd.hpp>
#include <boost/fusion/view/single_view/single_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct begin_impl< ::boost::fusion::single_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef ::boost::fusion::single_view_iterator<
                Sequence
              , ::boost::mpl::int_<0>
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

