/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_MAP_DETAIL_VALUE_OF_IMPL_HPP)
#define BOOST_FUSION_CONTAINER_MAP_DETAIL_VALUE_OF_IMPL_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/map/map_tag_fwd.hpp>
#include <boost/fusion/sequence/intrinsic/value_at.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct value_of_impl< ::boost::fusion::map_iterator_tag>
    {
        template <typename It>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::value_at<
                typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                    ::boost::is_const<typename It::seq_type>
#else
                    ::std::is_const<typename It::seq_type>
#endif
                  , typename It::seq_type::storage_type const
                  , typename It::seq_type::storage_type
                >::type
              , typename It::index
            >::type type;
        };
    };
}}}

#endif  // include guard

