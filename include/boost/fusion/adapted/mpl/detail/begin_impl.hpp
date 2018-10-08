/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_BEGIN_IMPL_31122005_1209)
#define BOOST_FUSION_BEGIN_IMPL_31122005_1209

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/fusion/adapted/mpl/mpl_iterator.hpp>
#include <boost/mpl/begin_end.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct begin_impl< ::boost::fusion::mpl_sequence_tag>
    {
        template <typename Sequence>
        struct apply 
        {
            typedef typename ::boost::mpl::begin<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                typename ::boost::remove_const<Sequence>::type
#else
                typename ::std::remove_const<Sequence>::type
#endif
            >::type iterator;
            typedef ::boost::fusion::mpl_iterator<iterator> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence)
            {
                return type();
            }
        };
    };
}}}

#endif  // include guard

