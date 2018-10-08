/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CATEGORY_OF_07202005_0308)
#define FUSION_CATEGORY_OF_07202005_0308

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct category_of_impl
    {
        template <typename T>
        struct apply
        {
            typedef typename T::category type;
        };
    };
}}}

#include <boost/fusion/support/category_of_fwd.hpp>
#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <typename T>
    struct category_of :
        ::boost::fusion::extension::category_of_impl<
            typename ::boost::fusion::detail::tag_of<T>::type
        >::template apply<T>
    {
    };
}}}

#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_base_of.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace traits
{
    template <typename T>
    struct is_associative :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::associative_tag
              , typename ::boost::fusion::traits::category_of<T>::type
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };

    template <typename T>
    struct is_incrementable :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::incrementable_traversal_tag
              , typename ::boost::fusion::traits::category_of<T>::type
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };

    template <typename T>
    struct is_single_pass :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::single_pass_traversal_tag
              , typename ::boost::fusion::traits::category_of<T>::type
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };

    template <typename T>
    struct is_forward :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::forward_traversal_tag
              , typename ::boost::fusion::traits::category_of<T>::type
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };

    template <typename T>
    struct is_bidirectional :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::bidirectional_traversal_tag
              , typename ::boost::fusion::traits::category_of<T>::type
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };

    template <typename T>
    struct is_random_access :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::random_access_traversal_tag
              , typename ::boost::fusion::traits::category_of<T>::type
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };

    template <typename T>
    struct is_unbounded :
        ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::unbounded_tag
              , typename ::boost::fusion::traits::category_of<T>::type
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
    {
    };
}}}

#endif  // include guard

