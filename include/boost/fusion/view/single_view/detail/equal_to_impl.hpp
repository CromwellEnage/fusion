/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SINGLE_VIEW_ITERATOR_JUL_07_2011_1348PM)
#define BOOST_FUSION_SINGLE_VIEW_ITERATOR_JUL_07_2011_1348PM

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/view/single_view/single_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/assert.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/add_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct equal_to_impl< ::boost::fusion::single_view_iterator_tag>
    {
        template <typename It1, typename It2>
        struct apply :
            ::boost::mpl::equal_to<
                typename It1::position
              , typename It2::position
            >
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            BOOST_MPL_ASSERT((
                typename ::boost::mpl::if_<
                    ::boost::is_same<
                        typename ::boost::add_const<
                            typename It1::single_view_type
                        >::type
                      , typename ::boost::add_const<
                            typename It2::single_view_type
                        >::type
                    >
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            ));
#else
            BOOST_MPL_ASSERT((
                typename ::boost::mpl::if_<
                    ::std::is_same<
                        typename ::std::add_const<
                            typename It1::single_view_type
                        >::type
                      , typename ::std::add_const<
                            typename It2::single_view_type
                        >::type
                    >
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            ));
#endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS
        };
    };
}}}

#endif  // include guard

