/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_NEXT_IMPL_07172005_0836)
#define FUSION_NEXT_IMPL_07172005_0836

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/list/cons_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
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
    struct next_impl< ::boost::fusion::cons_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::cons_type cons_type;
            typedef typename cons_type::cdr_type cdr_type;

            typedef ::boost::fusion::cons_iterator<
                typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                    ::boost::is_const<cons_type>
#else
                    ::std::is_const<cons_type>
#endif
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                  , ::boost::add_const<cdr_type>
#else
                  , ::std::add_const<cdr_type>
#endif
                  , ::boost::mpl::identity<cdr_type>
                >::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.cons.cdr);
            }
        };
    };
}}}

#endif  // include guard

