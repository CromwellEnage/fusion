/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_MPL_ITERATOR_05052005_0731)
#define FUSION_MPL_ITERATOR_05052005_0731

#include <boost/fusion/adapted/mpl/mpl_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/detail/mpl_iterator_category.hpp>
#include <boost/fusion/iterator/iterator_facade.hpp>
#include <boost/mpl/deref.hpp>
#include <boost/mpl/next.hpp>
#include <boost/mpl/prior.hpp>
#include <boost/mpl/advance.hpp>
#include <boost/mpl/distance.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Iterator_>
    struct mpl_iterator :
        ::boost::fusion::iterator_facade<
            ::boost::fusion::mpl_iterator<Iterator_>
          , typename ::boost::fusion::detail::mpl_iterator_category<
                typename Iterator_::category
            >::type
        >
    {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typedef typename ::boost::remove_const<Iterator_>::type iterator_type;
#else
        typedef typename ::std::remove_const<Iterator_>::type iterator_type;
#endif

        template <typename Iterator>
        struct deref
        {
            typedef typename ::boost::mpl::deref<
                typename Iterator::iterator_type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator)
            {
                return type();
            }
        };

        template <typename Iterator>
        struct value_of :
            ::boost::mpl::deref<typename Iterator::iterator_type>
        {
        };

        template <typename Iterator>
        struct next
        {
            typedef ::boost::fusion::mpl_iterator<
                typename ::boost::mpl::next<
                    typename Iterator::iterator_type
                >::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator)
            {
                return type();
            }
        };

        template <typename Iterator>
        struct prior
        {
            typedef ::boost::fusion::mpl_iterator<
                typename ::boost::mpl::prior<
                    typename Iterator::iterator_type
                >::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator)
            {
                return type();
            }
        };

        template <typename Iterator, typename N>
        struct advance
        {
            typedef ::boost::fusion::mpl_iterator<
                typename ::boost::mpl::advance<
                    typename Iterator::iterator_type
                  , N
                >::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& /*i*/)
            {
                return type();
            }
        };

        template <typename I1, typename I2>
        struct distance : 
            ::boost::mpl::distance<
                typename I1::iterator_type
              , typename I2::iterator_type
            >
        {
            typedef typename ::boost::mpl::distance<
                typename I1::iterator_type
              , typename I2::iterator_type
            >::type type;
            
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(I1 const&, I2 const&)
            {
                return type();
            }
        };
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Iterator>
    struct iterator_traits< ::boost::fusion::mpl_iterator<Iterator> >
    {
    };
}
#endif

#endif  // include guard

