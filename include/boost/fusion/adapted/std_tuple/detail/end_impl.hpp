/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_END_IMPL_09242011_1744)
#define BOOST_FUSION_END_IMPL_09242011_1744

#include <boost/fusion/adapted/std_tuple/std_tuple_iterator.hpp>
#include <boost/fusion/support/config.hpp>
#include <tuple>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    struct std_tuple_tag;

    namespace extension
    {
        template<typename T>
        struct end_impl;

        template <>
        struct end_impl< ::boost::fusion::std_tuple_tag>
        {
            template <typename Sequence>
            struct apply
            {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                typedef typename ::boost::remove_const<Sequence>::type seq_type;
#else
                typedef typename ::std::remove_const<Sequence>::type seq_type;
#endif
                static int const size = ::std::tuple_size<seq_type>::value;
                typedef ::boost::fusion::std_tuple_iterator<Sequence, size> type;

                BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
                static type call(Sequence& v)
                {
                    return type(v);
                }
            };
        };
}}}

#endif  // include guard

