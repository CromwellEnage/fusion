/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_FUSION_ITERATOR_10012005_1551)
#define FUSION_FUSION_ITERATOR_10012005_1551

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/mpl/iterator_tags.hpp>
#include <boost/mpl/eval_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_base_of.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename Category>
    struct to_mpl_category :
        ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_base_of<
#else
            ::std::is_base_of<
#endif
                ::boost::fusion::random_access_traversal_tag
              , Category
            >
          , ::boost::mpl::random_access_iterator_tag
          , ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_base_of<
#else
                ::std::is_base_of<
#endif
                    ::boost::fusion::bidirectional_traversal_tag
                  , Category
                >
              , ::boost::mpl::bidirectional_iterator_tag
              , ::boost::mpl::forward_iterator_tag
            >
        >
    {
    };
}}}

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/iterator/distance.hpp>
#include <boost/mpl/next_prior.hpp>
#include <boost/mpl/advance_fwd.hpp>
#include <boost/mpl/distance_fwd.hpp>

namespace boost { namespace mpl
{
    template <typename Iterator>
    struct fusion_iterator
    {
        typedef typename ::boost::fusion::result_of::value_of<
            Iterator
        >::type type;
        typedef typename ::boost::fusion::traits::category_of<
            Iterator
        >::type fusion_category;
        typedef typename ::boost::fusion::detail::to_mpl_category<
            fusion_category
        >::type category;
        typedef Iterator iterator;
    };

    template <typename Iterator>
    struct next< ::boost::mpl::fusion_iterator<Iterator> >
    {
        typedef ::boost::mpl::fusion_iterator<
            typename ::boost::fusion::result_of::next<Iterator>::type
        > type;
    };

    template <typename Iterator>
    struct prior< ::boost::mpl::fusion_iterator<Iterator> >
    {
        typedef ::boost::mpl::fusion_iterator<
            typename ::boost::fusion::result_of::prior<Iterator>::type
        > type;
    };

    template <typename Iterator, typename N>
    struct advance< ::boost::mpl::fusion_iterator<Iterator>, N>
    {
        typedef ::boost::mpl::fusion_iterator<
            typename ::boost::fusion::result_of::advance<Iterator, N>::type
        > type;
    };

    template <typename First, typename Last>
    struct distance<
        ::boost::mpl::fusion_iterator<First>
      , ::boost::mpl::fusion_iterator<Last>
    > : ::boost::fusion::result_of::distance<First, Last>
    {
    };
}}

#endif  // include guard

