/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_BACK_EXTENDED_DEQUE_26112006_2209)
#define BOOST_FUSION_BACK_EXTENDED_DEQUE_26112006_2209

#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/container/deque/detail/keyed_element.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>

namespace boost { namespace fusion
{
    template <typename Deque, typename T>
    struct back_extended_deque
      : ::boost::fusion::detail
        ::keyed_element<typename Deque::next_up, T, Deque>
      , ::boost::fusion
        ::sequence_base< ::boost::fusion::back_extended_deque<Deque, T> >
    {
        typedef ::boost::fusion::detail
        ::keyed_element<typename Deque::next_up, T, Deque> base;
        typedef typename Deque::next_down next_down;
        typedef ::boost::mpl::int_<(Deque::next_up::value + 1)> next_up;
        typedef ::boost::mpl
        ::int_<(::boost::fusion::result_of::size<Deque>::value + 1)> size;

        template <typename Arg>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        back_extended_deque(Deque const& deque, Arg const& val) :
            base(val, deque)
        {
        }

#if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename Arg>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        back_extended_deque(Deque const& deque, Arg& val) :
            base(val, deque)
        {
        }
#else
        template <typename Arg>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        back_extended_deque(Deque const& deque, Arg&& val) :
            base(BOOST_FUSION_FWD_ELEM(Arg, val), deque)
        {
        }
#endif
    };
}}

#endif  // include guard

