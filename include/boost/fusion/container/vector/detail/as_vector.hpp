/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_AS_VECTOR_11052014_1801)
#define FUSION_AS_VECTOR_11052014_1801

#include <boost/fusion/container/vector/detail/config.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_VECTOR)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/support/detail/index_sequence.hpp>
#include <cstddef>

namespace boost { namespace fusion { namespace detail
{
BOOST_FUSION_BARRIER_BEGIN

    template <typename Indices>
    struct as_vector_impl;

    template <std::size_t ...Indices>
    struct as_vector_impl<
        ::boost::fusion::detail::index_sequence<Indices...>
    >
    {
        template <typename Iterator>
        struct apply
        {
            typedef ::boost::fusion::vector<
                typename ::boost::fusion::result_of::value_of<
                    typename ::boost::fusion::result_of
                    ::advance_c<Iterator, Indices>::type
                >::type...
            > type;
        };

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector_impl<
            ::boost::fusion::detail::index_sequence<Indices...>
        >::template apply<Iterator>::type call(Iterator i)
        {
            typedef typename ::boost::fusion::detail::as_vector_impl<
                ::boost::fusion::detail::index_sequence<Indices...>
            >::template apply<Iterator>::type result;
            return result(*::boost::fusion::advance_c<Indices>(i)...);
        }
    };

    template <int size>
    struct as_vector :
        ::boost::fusion::detail::as_vector_impl<
            typename ::boost::fusion::detail::make_index_sequence<size>::type
        >
    {
    };

BOOST_FUSION_BARRIER_END
}}}

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/detail/cpp03/as_vector.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_VECTOR
#endif  // include guard

