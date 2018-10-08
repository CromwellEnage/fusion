/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion
{
    namespace result_of
    {
        template <
            typename T0 = ::boost::fusion::void_ , typename T1 = ::boost::fusion::void_ , typename T2 = ::boost::fusion::void_ , typename T3 = ::boost::fusion::void_ , typename T4 = ::boost::fusion::void_ , typename T5 = ::boost::fusion::void_ , typename T6 = ::boost::fusion::void_ , typename T7 = ::boost::fusion::void_ , typename T8 = ::boost::fusion::void_ , typename T9 = ::boost::fusion::void_ , typename T10 = ::boost::fusion::void_ , typename T11 = ::boost::fusion::void_ , typename T12 = ::boost::fusion::void_ , typename T13 = ::boost::fusion::void_ , typename T14 = ::boost::fusion::void_ , typename T15 = ::boost::fusion::void_ , typename T16 = ::boost::fusion::void_ , typename T17 = ::boost::fusion::void_ , typename T18 = ::boost::fusion::void_ , typename T19 = ::boost::fusion::void_
          , typename Extra = ::boost::fusion::void_
        >
        struct make_vector;
        template <>
        struct make_vector<>
        {
            typedef ::boost::fusion::vector0<> type;
        };
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector0<> make_vector()
    {
        return ::boost::fusion::vector0<>();
    }
    namespace result_of
    {
        template <typename T0>
        struct make_vector<
            T0
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector1<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type
            > type;
        };
    }
    template <typename T0>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector1<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type
    >
    make_vector(T0 const& arg0)
    {
        return ::boost::fusion::vector1<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type
        >(arg0);
    }
    namespace result_of
    {
        template <typename T0 , typename T1>
        struct make_vector<
            T0 , T1
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector2<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type
            > type;
        };
    }
    template <typename T0 , typename T1>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector2<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1)
    {
        return ::boost::fusion::vector2<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type
        >(arg0 , arg1);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2>
        struct make_vector<
            T0 , T1 , T2
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector3<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector3<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2)
    {
        return ::boost::fusion::vector3<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type
        >(arg0 , arg1 , arg2);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3>
        struct make_vector<
            T0 , T1 , T2 , T3
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector4<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector4<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3)
    {
        return ::boost::fusion::vector4<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type
        >(arg0 , arg1 , arg2 , arg3);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector5<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector5<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4)
    {
        return ::boost::fusion::vector5<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector6<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector6<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5)
    {
        return ::boost::fusion::vector6<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector7<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector7<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6)
    {
        return ::boost::fusion::vector7<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector8<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector8<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7)
    {
        return ::boost::fusion::vector8<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector9<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector9<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8)
    {
        return ::boost::fusion::vector9<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector10<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector10<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9)
    {
        return ::boost::fusion::vector10<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector11<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector11<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10)
    {
        return ::boost::fusion::vector11<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector12<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector12<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11)
    {
        return ::boost::fusion::vector12<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector13<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector13<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12)
    {
        return ::boost::fusion::vector13<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector14<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector14<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12 , T13 const& arg13)
    {
        return ::boost::fusion::vector14<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector15<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector15<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12 , T13 const& arg13 , T14 const& arg14)
    {
        return ::boost::fusion::vector15<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector16<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector16<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12 , T13 const& arg13 , T14 const& arg14 , T15 const& arg15)
    {
        return ::boost::fusion::vector16<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector17<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector17<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12 , T13 const& arg13 , T14 const& arg14 , T15 const& arg15 , T16 const& arg16)
    {
        return ::boost::fusion::vector17<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector18<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector18<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12 , T13 const& arg13 , T14 const& arg14 , T15 const& arg15 , T16 const& arg16 , T17 const& arg17)
    {
        return ::boost::fusion::vector18<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18
            , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector19<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type , typename ::boost::fusion::detail ::as_fusion_element<T18>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector19<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type , typename ::boost::fusion::detail ::as_fusion_element<T18>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12 , T13 const& arg13 , T14 const& arg14 , T15 const& arg15 , T16 const& arg16 , T17 const& arg17 , T18 const& arg18)
    {
        return ::boost::fusion::vector19<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type , typename ::boost::fusion::detail ::as_fusion_element<T18>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17 , arg18);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
        struct make_vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19
            , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::vector20<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type , typename ::boost::fusion::detail ::as_fusion_element<T18>::type , typename ::boost::fusion::detail ::as_fusion_element<T19>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::vector20<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type , typename ::boost::fusion::detail ::as_fusion_element<T18>::type , typename ::boost::fusion::detail ::as_fusion_element<T19>::type
    >
    make_vector(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9 , T10 const& arg10 , T11 const& arg11 , T12 const& arg12 , T13 const& arg13 , T14 const& arg14 , T15 const& arg15 , T16 const& arg16 , T17 const& arg17 , T18 const& arg18 , T19 const& arg19)
    {
        return ::boost::fusion::vector20<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type , typename ::boost::fusion::detail ::as_fusion_element<T10>::type , typename ::boost::fusion::detail ::as_fusion_element<T11>::type , typename ::boost::fusion::detail ::as_fusion_element<T12>::type , typename ::boost::fusion::detail ::as_fusion_element<T13>::type , typename ::boost::fusion::detail ::as_fusion_element<T14>::type , typename ::boost::fusion::detail ::as_fusion_element<T15>::type , typename ::boost::fusion::detail ::as_fusion_element<T16>::type , typename ::boost::fusion::detail ::as_fusion_element<T17>::type , typename ::boost::fusion::detail ::as_fusion_element<T18>::type , typename ::boost::fusion::detail ::as_fusion_element<T19>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17 , arg18 , arg19);
    }
}}
