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
            typename T0 = ::boost::fusion::void_ , typename T1 = ::boost::fusion::void_ , typename T2 = ::boost::fusion::void_ , typename T3 = ::boost::fusion::void_ , typename T4 = ::boost::fusion::void_ , typename T5 = ::boost::fusion::void_ , typename T6 = ::boost::fusion::void_ , typename T7 = ::boost::fusion::void_ , typename T8 = ::boost::fusion::void_ , typename T9 = ::boost::fusion::void_
          , typename Extra = ::boost::fusion::void_
        >
        struct make_list;
        template <>
        struct make_list<>
        {
            typedef ::boost::fusion::list<> type;
        };
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<> make_list()
    {
        return ::boost::fusion::list<>();
    }
    namespace result_of
    {
        template <typename T0>
        struct make_list<
            T0
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type
            > type;
        };
    }
    template <typename T0>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type
    >
    make_list(T0 const& arg0)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type
        >(arg0);
    }
    namespace result_of
    {
        template <typename T0 , typename T1>
        struct make_list<
            T0 , T1
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type
            > type;
        };
    }
    template <typename T0 , typename T1>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type
        >(arg0 , arg1);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2>
        struct make_list<
            T0 , T1 , T2
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type
        >(arg0 , arg1 , arg2);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3>
        struct make_list<
            T0 , T1 , T2 , T3
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type
        >(arg0 , arg1 , arg2 , arg3);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
        struct make_list<
            T0 , T1 , T2 , T3 , T4
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
        struct make_list<
            T0 , T1 , T2 , T3 , T4 , T5
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
        struct make_list<
            T0 , T1 , T2 , T3 , T4 , T5 , T6
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
        struct make_list<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
        struct make_list<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
            , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8);
    }
    namespace result_of
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
        struct make_list<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
            , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::list<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type
            > type;
        };
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type
    >
    make_list(T0 const& arg0 , T1 const& arg1 , T2 const& arg2 , T3 const& arg3 , T4 const& arg4 , T5 const& arg5 , T6 const& arg6 , T7 const& arg7 , T8 const& arg8 , T9 const& arg9)
    {
        return ::boost::fusion::list<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type , typename ::boost::fusion::detail ::as_fusion_element<T1>::type , typename ::boost::fusion::detail ::as_fusion_element<T2>::type , typename ::boost::fusion::detail ::as_fusion_element<T3>::type , typename ::boost::fusion::detail ::as_fusion_element<T4>::type , typename ::boost::fusion::detail ::as_fusion_element<T5>::type , typename ::boost::fusion::detail ::as_fusion_element<T6>::type , typename ::boost::fusion::detail ::as_fusion_element<T7>::type , typename ::boost::fusion::detail ::as_fusion_element<T8>::type , typename ::boost::fusion::detail ::as_fusion_element<T9>::type
        >(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9);
    }
}}
