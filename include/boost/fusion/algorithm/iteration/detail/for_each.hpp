/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_FOR_EACH_05052005_1028)
#define FUSION_FOR_EACH_05052005_1028

namespace boost { namespace fusion { namespace detail
{
    template <int N>
    struct for_each_unrolled;
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <>
    struct for_each_unrolled<1>
    {
        template <typename I0, typename F>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static void call(I0 const& i0, F& f)
        {
            f(*i0);
        }
    };

    template <>
    struct for_each_unrolled<0>
    {
        template <typename It, typename F>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static void call(It const&, F const&)
        {
        }
    };
}}}

#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, typename F>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline void
    for_each_linear(First const&, Last const&, F const&, ::boost::mpl::true_)
    {
    }
}}}

#include <boost/fusion/iterator/next.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <int N>
    struct for_each_unrolled
    {
        template <typename I0, typename F>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static void call(I0 const& i0, F& f)
        {
            f(*i0);
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            I1 i1(::boost::fusion::next(i0));
            f(*i1);
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            I2 i2(::boost::fusion::next(i1));
            f(*i2);
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            I3 i3(::boost::fusion::next(i2));
            f(*i3);
            ::boost::fusion::detail::for_each_unrolled<(N - 4)>
            ::call(::boost::fusion::next(i3), f);
        }
    };

    template <>
    struct for_each_unrolled<3>
    {
        template <typename I0, typename F>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static void call(I0 const& i0, F& f)
        {
            f(*i0);
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            I1 i1(::boost::fusion::next(i0));
            f(*i1);
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            I2 i2(::boost::fusion::next(i1));
            f(*i2);
        }
    };

    template <>
    struct for_each_unrolled<2>
    {
        template <typename I0, typename F>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static void call(I0 const& i0, F& f)
        {
            f(*i0);
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            I1 i1(::boost::fusion::next(i0));
            f(*i1);
        }
    };
}}}

#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, typename F>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline void
    for_each_linear(
        First const& first
      , Last const& last
      , F& f
      , ::boost::mpl::false_
    )
    {
        f(*first);
        ::boost::fusion::detail::for_each_linear(
            ::boost::fusion::next(first)
          , last
          , f
          , ::boost::fusion::result_of::equal_to<
                typename result_of::next<First>::type
              , Last
            >()
        );
    }
}}}

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename F, typename Tag>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline void for_each_dispatch(Sequence& seq, F& f, Tag)
    {
        ::boost::fusion::detail::for_each_linear(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
          , f
          , ::boost::fusion::result_of::equal_to<
                typename ::boost::fusion::result_of::begin<Sequence>::type
              , typename ::boost::fusion::result_of::end<Sequence>::type
            >()
        );
    }
}}}

#include <boost/fusion/sequence/intrinsic/size.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename F>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline void
    for_each_dispatch(
        Sequence& seq
      , F& f
      , ::boost::fusion::random_access_traversal_tag
    )
    {
        ::boost::fusion::detail::for_each_unrolled<
            ::boost::fusion::result_of::size<Sequence>::type::value
        >::call(::boost::fusion::begin(seq), f);
    }
}}}

#include <boost/fusion/support/category_of.hpp>

namespace boost { namespace fusion { namespace detail
{
    // unsegmented implementation
    template <typename Sequence, typename F>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline void for_each(Sequence& seq, F& f, ::boost::mpl::false_)
    {
        ::boost::fusion::detail::for_each_dispatch(
            seq
          , f
          , typename ::boost::fusion::traits::category_of<Sequence>::type()
        );
    }
}}}

#endif  // include guard

