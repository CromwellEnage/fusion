/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_AT_IMPL_09242011_1744)
#define BOOST_FUSION_AT_IMPL_09242011_1744

#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>
#include <tuple>
#include <utility>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#endif

namespace boost { namespace fusion
{
    struct std_tuple_tag;

    namespace extension
    {
        template<typename T>
        struct at_impl;

        template <>
        struct at_impl< ::boost::fusion::std_tuple_tag>
        {
            template <typename Sequence, typename N>
            struct apply
            {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                typedef typename ::boost::remove_const<Sequence>::type seq_type;
#else
                typedef typename ::std::remove_const<Sequence>::type seq_type;
#endif
                typedef typename ::std::tuple_element<N::value, seq_type>::type element;

                typedef typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                    ::boost::is_const<Sequence>
#else
                    ::std::is_const<Sequence>
#endif
                  , ::boost::fusion::detail::cref_result<element>
                  , ::boost::fusion::detail::ref_result<element>
                >::type type;

                BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
                static type call(Sequence& seq)
                {
                    return ::std::get<N::value>(seq);
                }
            };
        };
}}}

#endif  // include guard

