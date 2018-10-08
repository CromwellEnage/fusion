/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_AS_SET_11062014_2121)
#define FUSION_AS_SET_11062014_2121

#include <boost/fusion/container/set/set_fwd.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_SET)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/support/detail/index_sequence.hpp>
#include <boost/fusion/container/set/set.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/iterator/advance.hpp>
#include <cstddef>

namespace boost { namespace fusion { namespace detail
{
BOOST_FUSION_BARRIER_BEGIN

    template <
        int size
      , typename = typename ::boost::fusion::detail
        ::make_index_sequence<size>::type
    >
    struct as_set;

    template <int size, ::std::size_t ...Indices>
    struct as_set<
        size
      , ::boost::fusion::detail::index_sequence<Indices...>
    >
    {
        template <typename I>
        struct apply
        {
            typedef ::boost::fusion::set<
                typename ::boost::fusion::result_of::value_of<
                    typename ::boost::fusion::result_of
                    ::advance_c<I, Indices>::type
                >::type...
            > type;
        };

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_set<
            size
          , ::boost::fusion::detail::index_sequence<Indices...>
        >::template apply<Iterator>::type call(Iterator const& i)
        {
            typedef typename ::boost::fusion::detail::as_set<
                size
              , ::boost::fusion::detail::index_sequence<Indices...>
            >::template apply<Iterator> gen;
            typedef typename gen::type result;
            return result(*::boost::fusion::advance_c<Indices>(i)...);
        }
    };

BOOST_FUSION_BARRIER_END
}}}

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/set/detail/cpp03/as_set.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_SET
#endif  // include guard

