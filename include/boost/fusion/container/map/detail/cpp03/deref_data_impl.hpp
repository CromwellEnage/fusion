/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_MAP_DETAIL_DEREF_DATA_IMPL_HPP)
#define BOOST_FUSION_CONTAINER_MAP_DETAIL_DEREF_DATA_IMPL_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/container/map/map_tag_fwd.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>

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
    struct deref_data_impl< ::boost::fusion::map_iterator_tag>
    {
        template <typename It>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::value_of<It>::type::second_type data;
            typedef typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                ::boost::is_const<typename It::seq_type>
#else
                ::std::is_const<typename It::seq_type>
#endif
              , ::boost::fusion::detail::cref_result<data>
              , ::boost::fusion::ref_result<data>
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It const& it)
            {
                return ::boost::fusion::deref(it).second;
            }
        };
    };
}}}

#endif  // include guard

