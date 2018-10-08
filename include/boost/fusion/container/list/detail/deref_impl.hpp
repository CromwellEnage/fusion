/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DEREF_IMPL_07172005_0831)
#define FUSION_DEREF_IMPL_07172005_0831

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/list/cons_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/add_lvalue_reference.hpp>
#else
#include <type_traits>
#endif

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::cons_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::cons_type cons_type;
            typedef typename cons_type::car_type value_type;

            typedef typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                ::boost::is_const<cons_type>
#else
                ::std::is_const<cons_type>
#endif
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
              , ::boost::add_lvalue_reference<
                    typename ::boost::add_const<value_type>::type
                >
              , ::boost::add_lvalue_reference<value_type>
#else
              , ::std::add_lvalue_reference<
                    typename ::std::add_const<value_type>::type
                >
              , ::std::add_lvalue_reference<value_type>
#endif
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return i.cons.car;
            }
        };
    };
}}}

#endif  // include guard

