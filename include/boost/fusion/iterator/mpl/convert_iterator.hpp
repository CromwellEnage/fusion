/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONVERT_ITERATOR_05062005_1218)
#define FUSION_CONVERT_ITERATOR_05062005_1218

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/is_iterator.hpp>
#include <boost/fusion/adapted/mpl/mpl_iterator.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion
{
    //  Test T. If it is a fusion iterator, return a reference to it.
    //  else, assume it is an mpl iterator.

    template <typename T>
    struct convert_iterator
    {
        typedef typename ::boost::mpl::if_<
            ::boost::fusion::is_fusion_iterator<T>
          , T
          , ::boost::fusion::mpl_iterator<T>
        >::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static T const& call(T const& x, ::boost::mpl::true_)
        {
            return x;
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static ::boost::fusion::mpl_iterator<T>
        call(T const& /*x*/, ::boost::mpl::false_)
        {
            return ::boost::fusion::mpl_iterator<T>();
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::mpl::if_<
            ::boost::fusion::is_fusion_iterator<T>
          , T const&
          , ::boost::fusion::mpl_iterator<T>
        >::type
        call(T const& x)
        {
            return ::boost::fusion::convert_iterator<T>
            ::call(x, ::boost::fusion::is_fusion_iterator<T>());
        }
    };
}}

#endif  // include guard

