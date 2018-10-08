/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion { namespace detail
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct vector_n_chooser
    {
        typedef ::boost::fusion
        ::vector10<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
        > type;
    };
    template <>
    struct vector_n_chooser<
        ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector0<> type;
    };
    template <typename T0>
    struct vector_n_chooser<
        T0
        , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector1<
            T0
        > type;
    };
    template <typename T0 , typename T1>
    struct vector_n_chooser<
        T0 , T1
        , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector2<
            T0 , T1
        > type;
    };
    template <typename T0 , typename T1 , typename T2>
    struct vector_n_chooser<
        T0 , T1 , T2
        , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector3<
            T0 , T1 , T2
        > type;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3>
    struct vector_n_chooser<
        T0 , T1 , T2 , T3
        , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector4<
            T0 , T1 , T2 , T3
        > type;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    struct vector_n_chooser<
        T0 , T1 , T2 , T3 , T4
        , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector5<
            T0 , T1 , T2 , T3 , T4
        > type;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    struct vector_n_chooser<
        T0 , T1 , T2 , T3 , T4 , T5
        , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector6<
            T0 , T1 , T2 , T3 , T4 , T5
        > type;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    struct vector_n_chooser<
        T0 , T1 , T2 , T3 , T4 , T5 , T6
        , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector7<
            T0 , T1 , T2 , T3 , T4 , T5 , T6
        > type;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    struct vector_n_chooser<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
        , ::boost::fusion::void_ , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector8<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
        > type;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    struct vector_n_chooser<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
        , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::vector9<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
        > type;
    };
}}}
