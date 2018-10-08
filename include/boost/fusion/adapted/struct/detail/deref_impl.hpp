/*============================================================================
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_DETAIL_DEREF_IMPL_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_DETAIL_DEREF_IMPL_HPP

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/iterator/special_tags_fwd.hpp>
#include <boost/fusion/adapted/struct/detail/extension.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::struct_iterator_tag>
    {
        template <typename It>
        struct apply
        {
           typedef typename ::boost::fusion::extension::access
           ::struct_member<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
               typename ::boost::remove_const<typename It::seq_type>::type
#else
               typename ::std::remove_const<typename It::seq_type>::type
#endif
             , It::index::value
           >::template apply<typename It::seq_type> impl;
           typedef typename impl::type type;

           BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
           static type call(It const& it)
           {
               return impl::call(*it.seq);
           }
        };
    };
}}}

#endif  // include guard

