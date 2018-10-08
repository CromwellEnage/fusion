/*============================================================================
    Copyright (c) 2005-2013 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_MAP_DETAIL_PAIR_FROM_HPP)
#define BOOST_FUSION_CONTAINER_MAP_DETAIL_PAIR_FROM_HPP

#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename It, bool is_assoc>
    struct pair_from
    {
        typedef typename ::boost::fusion::result_of::value_of<It>::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type call(It const& it)
        {
            return *it;
        }
    };
}}}

#include <boost/fusion/iterator/key_of.hpp>
#include <boost/fusion/iterator/deref_data.hpp>
#include <boost/fusion/iterator/value_of_data.hpp>
#include <boost/fusion/support/pair.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename It>
    struct pair_from<It, true>
    {
        typedef typename ::boost::fusion::result_of
        ::key_of<It>::type key_type;
        typedef typename ::boost::fusion::result_of
        ::value_of_data<It>::type data_type;
        typedef typename ::boost::fusion::pair<key_type, data_type> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static inline type call(It const& it)
        {
            return type(::boost::fusion::deref_data(it));
        }
    };
}}}

#endif  // include guard

