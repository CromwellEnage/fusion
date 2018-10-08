/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_VIEW_REVERSE_VIEW_DETAIL_AT_IMPL_HPP)
#define BOOST_FUSION_VIEW_REVERSE_VIEW_DETAIL_AT_IMPL_HPP

#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_tag_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/minus.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::reverse_view_tag>
    {
        template <typename Seq, typename N>
        struct apply
        {
            typedef ::boost::mpl::minus<
                ::boost::mpl::minus<
                    typename Seq::size
                  , ::boost::mpl::int_<1>
                >
              , N
            > real_n;

            typedef typename ::boost::fusion::result_of
            ::at<typename Seq::seq_type, real_n>::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Seq& seq)
            {
                return ::boost::fusion::at<real_n>(seq.seq);
            }
        };
    };
}}}

#endif  // include guard

