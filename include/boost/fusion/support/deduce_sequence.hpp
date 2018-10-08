/*============================================================================
    Copyright (c) 2007 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SUPPORT_DEDUCE_SEQUENCE_HPP_INCLUDED)
#define BOOST_FUSION_SUPPORT_DEDUCE_SEQUENCE_HPP_INCLUDED

#include <boost/fusion/support/deduce.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace traits { namespace detail
{
    struct deducer
    {
        template <typename Sig>
        struct result;

        template <class Self, typename T>
        struct result< Self(T) > : ::boost::fusion::traits::deduce<T>
        {
        };

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        // never called, but needed for decltype-based result_of (C++0x)
        template <typename T>
        BOOST_FUSION_GPU_ENABLED
        typename result< ::boost::fusion::traits::detail::deducer(T) >::type
        operator()(T&&) const;
#endif
    };
}}}}

#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/view/transform_view.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <class Sequence>
    struct deduce_sequence :
        ::boost::fusion::result_of::as_vector<
            ::boost::fusion::transform_view<
                Sequence
              , ::boost::fusion::traits::detail::deducer
            >
        >
    {
    };
}}}

#endif  // include guard

