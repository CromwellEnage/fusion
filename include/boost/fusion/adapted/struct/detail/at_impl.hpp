/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_DETAIL_AT_IMPL_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_DETAIL_AT_IMPL_HPP

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/adapted/struct/detail/extension.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::struct_tag>
    {
        template <typename Seq, typename N>
        struct apply :
            ::boost::fusion::extension::access::struct_member<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                typename ::boost::remove_const<Seq>::type
#else
                typename ::std::remove_const<Seq>::type
#endif
              , N::value
            >::template apply<Seq>
        {
        };
    };

    template <>
    struct at_impl< ::boost::fusion::assoc_struct_tag> :
        ::boost::fusion::extension::at_impl< ::boost::fusion::struct_tag>
    {
    };
}}}

#endif  // include guard

