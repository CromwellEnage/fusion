/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_DETAIL_END_IMPL_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_DETAIL_END_IMPL_HPP

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/adapted/struct/detail/extension.hpp>
#include <boost/fusion/iterator/basic_iterator.hpp>
#include <boost/fusion/iterator/special_tags_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct end_impl< ::boost::fusion::struct_tag>
    {
        template <typename Seq>
        struct apply
        {
            typedef ::boost::fusion::basic_iterator<
                ::boost::fusion::struct_iterator_tag
              , ::boost::fusion::random_access_traversal_tag
              , Seq
              , ::boost::fusion::extension::struct_size<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    typename ::boost::remove_const<Seq>::type
#else
                    typename ::std::remove_const<Seq>::type
#endif
                >::value
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Seq& seq)
            {
                return type(seq, 0);
            }
        };
    };

    template <>
    struct end_impl< ::boost::fusion::assoc_struct_tag>
    {
        template <typename Seq>
        struct apply
        {
            typedef ::boost::fusion::basic_iterator<
                ::boost::fusion::struct_iterator_tag
              , ::boost::fusion::assoc_struct_category
              , Seq
              , ::boost::fusion::extension::struct_size<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    typename ::boost::remove_const<Seq>::type
#else
                    typename ::std::remove_const<Seq>::type
#endif
                >::value
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

