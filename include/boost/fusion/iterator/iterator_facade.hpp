/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ITERATOR_FACADE_09252006_1011)
#define FUSION_ITERATOR_FACADE_09252006_1011

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/iterator_base.hpp>
#include <boost/fusion/iterator/special_tags_fwd.hpp>
#include <boost/fusion/iterator/detail/advance.hpp>
#include <boost/fusion/iterator/detail/distance.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Derived, typename Category>
    struct iterator_facade : ::boost::fusion::iterator_base<Derived>
    {
        typedef ::boost::fusion::iterator_facade_tag fusion_tag;
        typedef Derived derived_type;
        typedef Category category;

        // default implementation
        template <typename I1, typename I2>
        struct equal_to : // default implementation
            ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<
#else
                ::std::is_same<
#endif
                    typename I1::derived_type
                  , typename I2::derived_type
                >
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
        {
        };

        // default implementation
        template <typename Iterator, typename N>
        struct advance :
            ::boost::mpl::if_c<
                (N::value > 0)
              , ::boost::fusion::advance_detail::forward<Iterator, N::value>
              , ::boost::fusion::advance_detail::backward<Iterator, N::value>
            >::type
        {
            BOOST_MPL_ASSERT_NOT((
                ::boost::fusion::traits::is_random_access<Iterator>
            ));
        };

        // default implementation
        template <typename First, typename Last>
        struct distance :
            ::boost::fusion::distance_detail::linear_distance<First, Last>
        {
        };
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Derived, typename Category>
    struct iterator_traits<
        ::boost::fusion::iterator_facade<Derived, Category>
    >
    {
    };
}
#endif

#endif  // include guard

