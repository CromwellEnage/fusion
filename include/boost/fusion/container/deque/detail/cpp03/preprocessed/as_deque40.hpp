/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion { namespace detail
{
BOOST_FUSION_BARRIER_BEGIN
    template <>
    struct as_deque<1>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef ::boost::fusion::deque<T0> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<1>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<1>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            return result(*i0);
        }
    };

    template <>
    struct as_deque<2>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef ::boost::fusion::deque<T0, T1> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<2>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<2>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            return result(*i0, *i1);
        }
    };

    template <>
    struct as_deque<3>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef ::boost::fusion::deque<T0, T1, T2> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<3>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<3>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            return result(*i0, *i1, *i2);
        }
    };

    template <>
    struct as_deque<4>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef ::boost::fusion::deque<T0, T1, T2, T3> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<4>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<4>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            return result(*i0, *i1, *i2, *i3);
        }
    };

    template <>
    struct as_deque<5>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef ::boost::fusion::deque<T0, T1, T2, T3, T4> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<5>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<5>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            return result(*i0, *i1, *i2, *i3, *i4);
        }
    };

    template <>
    struct as_deque<6>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef ::boost::fusion::deque<T0, T1, T2, T3, T4, T5> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<6>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<6>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            return result(*i0, *i1, *i2, *i3, *i4, *i5);
        }
    };

    template <>
    struct as_deque<7>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef ::boost::fusion::deque<T0, T1, T2, T3, T4, T5, T6> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<7>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<7>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            return result(*i0, *i1, *i2, *i3, *i4, *i5, *i6);
        }
    };

    template <>
    struct as_deque<8>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef ::boost::fusion::deque<
                T0, T1, T2, T3, T4, T5, T6, T7
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<8>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<8>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            return result(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7);
        }
    };

    template <>
    struct as_deque<9>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef ::boost::fusion::deque<
                T0, T1, T2, T3, T4, T5, T6, T7, T8
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<9>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<9>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            return result(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8);
        }
    };

    template <>
    struct as_deque<10>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef ::boost::fusion::deque<
                T0, T1, T2, T3, T4, T5, T6, T7, T8, T9
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<10>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<10>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            return result(*i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9);
        }
    };

    template <>
    struct as_deque<11>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef ::boost::fusion::deque<
                T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<11>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<11>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            return result(
                *i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10
            );
        }
    };

    template <>
    struct as_deque<12>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef ::boost::fusion::deque<
                T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<12>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<12>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            return result(
                *i0, *i1, *i2, *i3, *i4, *i5, *i6, *i7, *i8, *i9, *i10, *i11
            );
        }
    };

    template <>
    struct as_deque<13>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef ::boost::fusion::deque<
                T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<13>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<13>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
            );
        }
    };

    template <>
    struct as_deque<14>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef ::boost::fusion::deque<
                T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<14>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<14>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
            );
        }
    };

    template <>
    struct as_deque<15>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<15>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<15>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
            );
        }
    };

    template <>
    struct as_deque<16>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<16>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<16>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
            );
        }
    };

    template <>
    struct as_deque<17>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<17>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<17>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
            );
        }
    };

    template <>
    struct as_deque<18>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<18>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<18>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
            );
        }
    };

    template <>
    struct as_deque<19>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<19>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<19>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
            );
        }
    };

    template <>
    struct as_deque<20>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<20>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<20>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
            );
        }
    };

    template <>
    struct as_deque<21>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<21>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<21>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
            );
        }
    };

    template <>
    struct as_deque<22>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<22>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<22>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
            );
        }
    };

    template <>
    struct as_deque<23>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<23>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<23>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
            );
        }
    };

    template <>
    struct as_deque<24>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<24>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<24>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
            );
        }
    };

    template <>
    struct as_deque<25>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<25>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<25>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
            );
        }
    };

    template <>
    struct as_deque<26>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<26>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<26>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
            );
        }
    };

    template <>
    struct as_deque<27>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<27>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<27>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
            );
        }
    };

    template <>
    struct as_deque<28>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<28>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<28>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
            );
        }
    };

    template <>
    struct as_deque<29>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<29>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<29>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
            );
        }
    };

    template <>
    struct as_deque<30>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<30>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<30>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
            );
        }
    };

    template <>
    struct as_deque<31>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<31>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<31>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
            );
        }
    };

    template <>
    struct as_deque<32>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<32>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<32>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
            );
        }
    };

    template <>
    struct as_deque<33>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<33>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<33>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
            );
        }
    };

    template <>
    struct as_deque<34>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of::next<I32>::type I33;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I33>::type T33;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
              , T33
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<34>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<34>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            typename gen::I33 i33 = ::boost::fusion::next(i32);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
              , *i33
            );
        }
    };

    template <>
    struct as_deque<35>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of::next<I32>::type I33;
            typedef typename ::boost::fusion::result_of::next<I33>::type I34;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I33>::type T33;
            typedef typename ::boost::fusion::result_of
            ::value_of<I34>::type T34;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
              , T33
              , T34
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<35>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<35>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            typename gen::I33 i33 = ::boost::fusion::next(i32);
            typename gen::I34 i34 = ::boost::fusion::next(i33);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
              , *i33
              , *i34
            );
        }
    };

    template <>
    struct as_deque<36>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of::next<I32>::type I33;
            typedef typename ::boost::fusion::result_of::next<I33>::type I34;
            typedef typename ::boost::fusion::result_of::next<I34>::type I35;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I33>::type T33;
            typedef typename ::boost::fusion::result_of
            ::value_of<I34>::type T34;
            typedef typename ::boost::fusion::result_of
            ::value_of<I35>::type T35;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
              , T33
              , T34
              , T35
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<36>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<36>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            typename gen::I33 i33 = ::boost::fusion::next(i32);
            typename gen::I34 i34 = ::boost::fusion::next(i33);
            typename gen::I35 i35 = ::boost::fusion::next(i34);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
              , *i33
              , *i34
              , *i35
            );
        }
    };

    template <>
    struct as_deque<37>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of::next<I32>::type I33;
            typedef typename ::boost::fusion::result_of::next<I33>::type I34;
            typedef typename ::boost::fusion::result_of::next<I34>::type I35;
            typedef typename ::boost::fusion::result_of::next<I35>::type I36;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I33>::type T33;
            typedef typename ::boost::fusion::result_of
            ::value_of<I34>::type T34;
            typedef typename ::boost::fusion::result_of
            ::value_of<I35>::type T35;
            typedef typename ::boost::fusion::result_of
            ::value_of<I36>::type T36;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
              , T33
              , T34
              , T35
              , T36
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<37>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<37>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            typename gen::I33 i33 = ::boost::fusion::next(i32);
            typename gen::I34 i34 = ::boost::fusion::next(i33);
            typename gen::I35 i35 = ::boost::fusion::next(i34);
            typename gen::I36 i36 = ::boost::fusion::next(i35);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
              , *i33
              , *i34
              , *i35
              , *i36
            );
        }
    };

    template <>
    struct as_deque<38>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of::next<I32>::type I33;
            typedef typename ::boost::fusion::result_of::next<I33>::type I34;
            typedef typename ::boost::fusion::result_of::next<I34>::type I35;
            typedef typename ::boost::fusion::result_of::next<I35>::type I36;
            typedef typename ::boost::fusion::result_of::next<I36>::type I37;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I33>::type T33;
            typedef typename ::boost::fusion::result_of
            ::value_of<I34>::type T34;
            typedef typename ::boost::fusion::result_of
            ::value_of<I35>::type T35;
            typedef typename ::boost::fusion::result_of
            ::value_of<I36>::type T36;
            typedef typename ::boost::fusion::result_of
            ::value_of<I37>::type T37;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
              , T33
              , T34
              , T35
              , T36
              , T37
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<38>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<38>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            typename gen::I33 i33 = ::boost::fusion::next(i32);
            typename gen::I34 i34 = ::boost::fusion::next(i33);
            typename gen::I35 i35 = ::boost::fusion::next(i34);
            typename gen::I36 i36 = ::boost::fusion::next(i35);
            typename gen::I37 i37 = ::boost::fusion::next(i36);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
              , *i33
              , *i34
              , *i35
              , *i36
              , *i37
            );
        }
    };

    template <>
    struct as_deque<39>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of::next<I32>::type I33;
            typedef typename ::boost::fusion::result_of::next<I33>::type I34;
            typedef typename ::boost::fusion::result_of::next<I34>::type I35;
            typedef typename ::boost::fusion::result_of::next<I35>::type I36;
            typedef typename ::boost::fusion::result_of::next<I36>::type I37;
            typedef typename ::boost::fusion::result_of::next<I37>::type I38;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I33>::type T33;
            typedef typename ::boost::fusion::result_of
            ::value_of<I34>::type T34;
            typedef typename ::boost::fusion::result_of
            ::value_of<I35>::type T35;
            typedef typename ::boost::fusion::result_of
            ::value_of<I36>::type T36;
            typedef typename ::boost::fusion::result_of
            ::value_of<I37>::type T37;
            typedef typename ::boost::fusion::result_of
            ::value_of<I38>::type T38;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
              , T33
              , T34
              , T35
              , T36
              , T37
              , T38
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<39>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<39>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            typename gen::I33 i33 = ::boost::fusion::next(i32);
            typename gen::I34 i34 = ::boost::fusion::next(i33);
            typename gen::I35 i35 = ::boost::fusion::next(i34);
            typename gen::I36 i36 = ::boost::fusion::next(i35);
            typename gen::I37 i37 = ::boost::fusion::next(i36);
            typename gen::I38 i38 = ::boost::fusion::next(i37);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
              , *i33
              , *i34
              , *i35
              , *i36
              , *i37
              , *i38
            );
        }
    };

    template <>
    struct as_deque<40>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of::next<I1>::type I2;
            typedef typename ::boost::fusion::result_of::next<I2>::type I3;
            typedef typename ::boost::fusion::result_of::next<I3>::type I4;
            typedef typename ::boost::fusion::result_of::next<I4>::type I5;
            typedef typename ::boost::fusion::result_of::next<I5>::type I6;
            typedef typename ::boost::fusion::result_of::next<I6>::type I7;
            typedef typename ::boost::fusion::result_of::next<I7>::type I8;
            typedef typename ::boost::fusion::result_of::next<I8>::type I9;
            typedef typename ::boost::fusion::result_of::next<I9>::type I10;
            typedef typename ::boost::fusion::result_of::next<I10>::type I11;
            typedef typename ::boost::fusion::result_of::next<I11>::type I12;
            typedef typename ::boost::fusion::result_of::next<I12>::type I13;
            typedef typename ::boost::fusion::result_of::next<I13>::type I14;
            typedef typename ::boost::fusion::result_of::next<I14>::type I15;
            typedef typename ::boost::fusion::result_of::next<I15>::type I16;
            typedef typename ::boost::fusion::result_of::next<I16>::type I17;
            typedef typename ::boost::fusion::result_of::next<I17>::type I18;
            typedef typename ::boost::fusion::result_of::next<I18>::type I19;
            typedef typename ::boost::fusion::result_of::next<I19>::type I20;
            typedef typename ::boost::fusion::result_of::next<I20>::type I21;
            typedef typename ::boost::fusion::result_of::next<I21>::type I22;
            typedef typename ::boost::fusion::result_of::next<I22>::type I23;
            typedef typename ::boost::fusion::result_of::next<I23>::type I24;
            typedef typename ::boost::fusion::result_of::next<I24>::type I25;
            typedef typename ::boost::fusion::result_of::next<I25>::type I26;
            typedef typename ::boost::fusion::result_of::next<I26>::type I27;
            typedef typename ::boost::fusion::result_of::next<I27>::type I28;
            typedef typename ::boost::fusion::result_of::next<I28>::type I29;
            typedef typename ::boost::fusion::result_of::next<I29>::type I30;
            typedef typename ::boost::fusion::result_of::next<I30>::type I31;
            typedef typename ::boost::fusion::result_of::next<I31>::type I32;
            typedef typename ::boost::fusion::result_of::next<I32>::type I33;
            typedef typename ::boost::fusion::result_of::next<I33>::type I34;
            typedef typename ::boost::fusion::result_of::next<I34>::type I35;
            typedef typename ::boost::fusion::result_of::next<I35>::type I36;
            typedef typename ::boost::fusion::result_of::next<I36>::type I37;
            typedef typename ::boost::fusion::result_of::next<I37>::type I38;
            typedef typename ::boost::fusion::result_of::next<I38>::type I39;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I2>::type T2;
            typedef typename ::boost::fusion::result_of
            ::value_of<I3>::type T3;
            typedef typename ::boost::fusion::result_of
            ::value_of<I4>::type T4;
            typedef typename ::boost::fusion::result_of
            ::value_of<I5>::type T5;
            typedef typename ::boost::fusion::result_of
            ::value_of<I6>::type T6;
            typedef typename ::boost::fusion::result_of
            ::value_of<I7>::type T7;
            typedef typename ::boost::fusion::result_of
            ::value_of<I8>::type T8;
            typedef typename ::boost::fusion::result_of
            ::value_of<I9>::type T9;
            typedef typename ::boost::fusion::result_of
            ::value_of<I10>::type T10;
            typedef typename ::boost::fusion::result_of
            ::value_of<I11>::type T11;
            typedef typename ::boost::fusion::result_of
            ::value_of<I12>::type T12;
            typedef typename ::boost::fusion::result_of
            ::value_of<I13>::type T13;
            typedef typename ::boost::fusion::result_of
            ::value_of<I14>::type T14;
            typedef typename ::boost::fusion::result_of
            ::value_of<I15>::type T15;
            typedef typename ::boost::fusion::result_of
            ::value_of<I16>::type T16;
            typedef typename ::boost::fusion::result_of
            ::value_of<I17>::type T17;
            typedef typename ::boost::fusion::result_of
            ::value_of<I18>::type T18;
            typedef typename ::boost::fusion::result_of
            ::value_of<I19>::type T19;
            typedef typename ::boost::fusion::result_of
            ::value_of<I20>::type T20;
            typedef typename ::boost::fusion::result_of
            ::value_of<I21>::type T21;
            typedef typename ::boost::fusion::result_of
            ::value_of<I22>::type T22;
            typedef typename ::boost::fusion::result_of
            ::value_of<I23>::type T23;
            typedef typename ::boost::fusion::result_of
            ::value_of<I24>::type T24;
            typedef typename ::boost::fusion::result_of
            ::value_of<I25>::type T25;
            typedef typename ::boost::fusion::result_of
            ::value_of<I26>::type T26;
            typedef typename ::boost::fusion::result_of
            ::value_of<I27>::type T27;
            typedef typename ::boost::fusion::result_of
            ::value_of<I28>::type T28;
            typedef typename ::boost::fusion::result_of
            ::value_of<I29>::type T29;
            typedef typename ::boost::fusion::result_of
            ::value_of<I30>::type T30;
            typedef typename ::boost::fusion::result_of
            ::value_of<I31>::type T31;
            typedef typename ::boost::fusion::result_of
            ::value_of<I32>::type T32;
            typedef typename ::boost::fusion::result_of
            ::value_of<I33>::type T33;
            typedef typename ::boost::fusion::result_of
            ::value_of<I34>::type T34;
            typedef typename ::boost::fusion::result_of
            ::value_of<I35>::type T35;
            typedef typename ::boost::fusion::result_of
            ::value_of<I36>::type T36;
            typedef typename ::boost::fusion::result_of
            ::value_of<I37>::type T37;
            typedef typename ::boost::fusion::result_of
            ::value_of<I38>::type T38;
            typedef typename ::boost::fusion::result_of
            ::value_of<I39>::type T39;
            typedef ::boost::fusion::deque<
                T0
              , T1
              , T2
              , T3
              , T4
              , T5
              , T6
              , T7
              , T8
              , T9
              , T10
              , T11
              , T12
              , T13
              , T14
              , T15
              , T16
              , T17
              , T18
              , T19
              , T20
              , T21
              , T22
              , T23
              , T24
              , T25
              , T26
              , T27
              , T28
              , T29
              , T30
              , T31
              , T32
              , T33
              , T34
              , T35
              , T36
              , T37
              , T38
              , T39
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_deque<40>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_deque<40>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            typename gen::I4 i4 = ::boost::fusion::next(i3);
            typename gen::I5 i5 = ::boost::fusion::next(i4);
            typename gen::I6 i6 = ::boost::fusion::next(i5);
            typename gen::I7 i7 = ::boost::fusion::next(i6);
            typename gen::I8 i8 = ::boost::fusion::next(i7);
            typename gen::I9 i9 = ::boost::fusion::next(i8);
            typename gen::I10 i10 = ::boost::fusion::next(i9);
            typename gen::I11 i11 = ::boost::fusion::next(i10);
            typename gen::I12 i12 = ::boost::fusion::next(i11);
            typename gen::I13 i13 = ::boost::fusion::next(i12);
            typename gen::I14 i14 = ::boost::fusion::next(i13);
            typename gen::I15 i15 = ::boost::fusion::next(i14);
            typename gen::I16 i16 = ::boost::fusion::next(i15);
            typename gen::I17 i17 = ::boost::fusion::next(i16);
            typename gen::I18 i18 = ::boost::fusion::next(i17);
            typename gen::I19 i19 = ::boost::fusion::next(i18);
            typename gen::I20 i20 = ::boost::fusion::next(i19);
            typename gen::I21 i21 = ::boost::fusion::next(i20);
            typename gen::I22 i22 = ::boost::fusion::next(i21);
            typename gen::I23 i23 = ::boost::fusion::next(i22);
            typename gen::I24 i24 = ::boost::fusion::next(i23);
            typename gen::I25 i25 = ::boost::fusion::next(i24);
            typename gen::I26 i26 = ::boost::fusion::next(i25);
            typename gen::I27 i27 = ::boost::fusion::next(i26);
            typename gen::I28 i28 = ::boost::fusion::next(i27);
            typename gen::I29 i29 = ::boost::fusion::next(i28);
            typename gen::I30 i30 = ::boost::fusion::next(i29);
            typename gen::I31 i31 = ::boost::fusion::next(i30);
            typename gen::I32 i32 = ::boost::fusion::next(i31);
            typename gen::I33 i33 = ::boost::fusion::next(i32);
            typename gen::I34 i34 = ::boost::fusion::next(i33);
            typename gen::I35 i35 = ::boost::fusion::next(i34);
            typename gen::I36 i36 = ::boost::fusion::next(i35);
            typename gen::I37 i37 = ::boost::fusion::next(i36);
            typename gen::I38 i38 = ::boost::fusion::next(i37);
            typename gen::I39 i39 = ::boost::fusion::next(i38);
            return result(
                *i0
              , *i1
              , *i2
              , *i3
              , *i4
              , *i5
              , *i6
              , *i7
              , *i8
              , *i9
              , *i10
              , *i11
              , *i12
              , *i13
              , *i14
              , *i15
              , *i16
              , *i17
              , *i18
              , *i19
              , *i20
              , *i21
              , *i22
              , *i23
              , *i24
              , *i25
              , *i26
              , *i27
              , *i28
              , *i29
              , *i30
              , *i31
              , *i32
              , *i33
              , *i34
              , *i35
              , *i36
              , *i37
              , *i38
              , *i39
            );
        }
    };
BOOST_FUSION_BARRIER_END
}}}

