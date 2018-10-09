/*============================================================================
    Copyright (c) 2007 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_REPETITIVE_VIEW_END_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_REPETITIVE_VIEW_END_IMPL_HPP_INCLUDED

#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/view/repetitive_view/repetitive_view_fwd.hpp>
#include <boost/fusion/view/repetitive_view/repetitive_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::repetitive_view_tag>
    {
        template <typename View>
        struct apply
        {
            typedef typename View::sequence_type sequence_type;

            typedef ::boost::fusion::repetitive_view_iterator<
                sequence_type
              , typename ::boost::fusion::result_of
                ::end<sequence_type>::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(View const& v)
            {
                return type(v.seq, ::boost::fusion::end(v.seq));
            }
        };
    };
}}}

#endif  // include guard

