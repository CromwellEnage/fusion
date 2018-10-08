/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DISTANCE_IMPL_20060124_2033)
#define FUSION_DISTANCE_IMPL_20060124_2033

#include <boost/fusion/iterator/distance.hpp>
#include <boost/fusion/sequence/intrinsic/value_at.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename It1, typename It2>
    struct default_distance :
        ::boost::fusion::result_of::distance<
            typename ::boost::fusion::result_of
            ::value_at_c<typename It1::iterators, 0>::type
          , typename ::boost::fusion::result_of
            ::value_at_c<typename It2::iterators, 0>::type
        >
    {
    };
}}}

#include <boost/fusion/algorithm/query/find_if.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/assert.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename FoundIt, typename SearchIt>
    struct best_distance
    {
        typedef typename ::boost::fusion::result_of::find_if<
            typename SearchIt::iterators
          , ::boost::fusion::traits::is_random_access< ::boost::mpl::_>
        >::type finder_type;
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        BOOST_MPL_ASSERT((
            typename ::boost::mpl::if_<
                ::boost::is_same<
                    finder_type
                  , typename ::boost::fusion::result_of
                    ::end<typename SearchIt::iterators>::type
                >
              , ::boost::mpl::false_
              , ::boost::mpl::true_
            >::type
        ));
#else
        BOOST_MPL_ASSERT((
            typename ::boost::mpl::if_<
                ::std::is_same<
                    finder_type
                  , typename ::boost::fusion::result_of
                    ::end<typename SearchIt::iterators>::type
                >
              , ::boost::mpl::false_
              , ::boost::mpl::true_
            >::type
        ));
#endif  // BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS
        typedef typename ::boost::fusion::result_of::distance<
            typename ::boost::fusion::result_of::value_of<FoundIt>::type
          , typename ::boost::fusion::result_of::value_of<finder_type>::type
        >::type type;
    };

    template <typename It1, typename It2>
    struct zip_view_iterator_distance
    {
        typedef typename ::boost::fusion::result_of::find_if<
            typename It1::iterators
          , ::boost::fusion::traits::is_random_access< ::boost::mpl::_>
        >::type finder_type;
        typedef typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_same<
#else
            ::std::is_same<
#endif
                finder_type
              , typename ::boost::fusion::result_of
                ::end<typename It1::iterators>::type
            >
          , ::boost::fusion::detail::default_distance<It1, It2>
          , ::boost::fusion::detail::best_distance<finder_type, It2>
        >::type type;               
    };
}}}

#include <boost/fusion/view/zip_view/zip_view_iterator_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct distance_impl< ::boost::fusion::zip_view_iterator_tag>
    {
        template <typename It1, typename It2>
        struct apply :
            ::boost::fusion::detail
            ::zip_view_iterator_distance<It1, It2>::type
        {
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static typename ::boost::fusion::detail
            ::zip_view_iterator_distance<It1, It2>::type
            call(It1 const& /*it1*/, It2 const& /*it2*/)
            {
                return typename ::boost::fusion::detail
                ::zip_view_iterator_distance<It1, It2>::type();
            }                
        };
    };
}}}

#endif  // include guard

