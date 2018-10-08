/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_AT_IMPL_07172005_0726)
#define FUSION_AT_IMPL_07172005_0726

namespace boost { namespace fusion { namespace detail
{
    template <typename Cons>
    struct cons_deref
    {
        typedef typename Cons::car_type type;
    };

    template <typename Cons, int I>
    struct cons_advance
    {
        typedef typename ::boost::fusion::detail
        ::cons_advance<Cons, (I - 1)>::type::cdr_type type;
    };

    template <typename Cons>
    struct cons_advance<Cons, 0>
    {
        typedef Cons type;
    };

    template <typename Cons>
    struct cons_advance<Cons, 1>
    {
        typedef typename Cons::cdr_type type;
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Cons>
    struct cons_advance<Cons, 2>
    {
#if BOOST_WORKAROUND(BOOST_MSVC, > 1400) // VC8 and above
        typedef typename Cons::cdr_type::cdr_type type;
#else
        typedef typename Cons::cdr_type _a;
        typedef typename _a::cdr_type type;
#endif
    };

    template <typename Cons>
    struct cons_advance<Cons, 3>
    {
#if BOOST_WORKAROUND(BOOST_MSVC, > 1400) // VC8 and above
        typedef typename Cons::cdr_type::cdr_type::cdr_type type;
#else
        typedef typename Cons::cdr_type _a;
        typedef typename _a::cdr_type _b;
        typedef typename _b::cdr_type type;
#endif
    };

    template <typename Cons>
    struct cons_advance<Cons, 4>
    {
#if BOOST_WORKAROUND(BOOST_MSVC, > 1400) // VC8 and above
        typedef typename Cons::cdr_type::cdr_type::cdr_type::cdr_type type;
#else
        typedef typename Cons::cdr_type _a;
        typedef typename _a::cdr_type _b;
        typedef typename _b::cdr_type _c;
        typedef typename _c::cdr_type type;
#endif
    };
}}}

#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/eval_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::cons_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename ::boost::fusion::detail::cons_deref<
                typename ::boost::fusion::detail::cons_advance<
                    Sequence
                  , N::value
                >::type
            >::type element;

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

            template <typename Cons, int N2>
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Cons& s, ::boost::mpl::int_<N2>)
            {
                return ::boost::fusion::extension::at_impl<
                    ::boost::fusion::cons_tag
                >::template apply<Sequence, N>
                ::call(s.cdr, ::boost::mpl::int_<(N2 - 1)>());
            }

            template <typename Cons>
            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Cons& s, ::boost::mpl::int_<0>)
            {
                return s.car;
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return ::boost::fusion::extension::at_impl<
                    ::boost::fusion::cons_tag
                >::template apply<Sequence, N>
                ::call(s, ::boost::mpl::int_<N::value>());
            }
        };
    };
}}}

#endif  // include guard

