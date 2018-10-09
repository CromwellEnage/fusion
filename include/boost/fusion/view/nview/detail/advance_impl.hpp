/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_ADVANCE_IMPL_SEP_24_2009_0212PM)
#define BOOST_FUSION_NVIEW_ADVANCE_IMPL_SEP_24_2009_0212PM

#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct advance_impl< ::boost::fusion::nview_iterator_tag>
    {
        template <typename Iterator, typename Dist>
        struct apply
        {
            typedef typename Iterator::first_type iterator_type;
            typedef typename Iterator::sequence_type sequence_type;
            typedef ::boost::fusion::nview_iterator<
                sequence_type
              , typename ::boost::fusion::result_of
                ::advance<iterator_type, Dist>::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.seq);
            }
        };
    };
}}}

#endif  // include guard

