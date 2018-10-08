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
    struct as_vector<1>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef ::boost::fusion::vector1<T0> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<1>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<1>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            return result(*i0);
        }
    };

    template <>
    struct as_vector<2>
    {
        template <typename I0>
        struct apply
        {
            typedef typename ::boost::fusion::result_of::next<I0>::type I1;
            typedef typename ::boost::fusion::result_of
            ::value_of<I0>::type T0;
            typedef typename ::boost::fusion::result_of
            ::value_of<I1>::type T1;
            typedef ::boost::fusion::vector2<T0, T1> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<2>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<2>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            return result(*i0, *i1);
        }
    };

    template <>
    struct as_vector<3>
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
            typedef ::boost::fusion::vector3<T0, T1, T2> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<3>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<3>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            return result(*i0, *i1, *i2);
        }
    };

    template <>
    struct as_vector<4>
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
            typedef ::boost::fusion::vector4<T0, T1, T2, T3> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<4>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<4>
            ::template apply<Iterator> gen;
            typedef typename gen::type result;
            typename gen::I1 i1 = ::boost::fusion::next(i0);
            typename gen::I2 i2 = ::boost::fusion::next(i1);
            typename gen::I3 i3 = ::boost::fusion::next(i2);
            return result(*i0, *i1, *i2, *i3);
        }
    };

    template <>
    struct as_vector<5>
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
            typedef ::boost::fusion::vector5<T0, T1, T2, T3, T4> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<5>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<5>
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
    struct as_vector<6>
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
            typedef ::boost::fusion::vector6<T0, T1, T2, T3, T4, T5> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<6>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<6>
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
    struct as_vector<7>
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
            typedef ::boost::fusion::vector7<T0, T1, T2, T3, T4, T5, T6> type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<7>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<7>
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
    struct as_vector<8>
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
            typedef ::boost::fusion::vector8<
                T0, T1, T2, T3, T4, T5, T6, T7
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<8>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<8>
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
    struct as_vector<9>
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
            typedef ::boost::fusion::vector9<
                T0, T1, T2, T3, T4, T5, T6, T7, T8
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<9>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<9>
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
    struct as_vector<10>
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
            typedef ::boost::fusion::vector10<
                T0, T1, T2, T3, T4, T5, T6, T7, T8, T9
            > type;
        };

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::fusion::detail::as_vector<10>
        ::template apply<Iterator>::type call(Iterator const& i0)
        {
            typedef typename ::boost::fusion::detail::as_vector<10>
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
BOOST_FUSION_BARRIER_END
}}}

