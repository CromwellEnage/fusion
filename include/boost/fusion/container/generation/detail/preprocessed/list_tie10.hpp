/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion { namespace result_of
{
    template <
        typename T0 = ::boost::fusion::void_
      , typename T1 = ::boost::fusion::void_
      , typename T2 = ::boost::fusion::void_
      , typename T3 = ::boost::fusion::void_
      , typename T4 = ::boost::fusion::void_
      , typename T5 = ::boost::fusion::void_
      , typename T6 = ::boost::fusion::void_
      , typename T7 = ::boost::fusion::void_
      , typename T8 = ::boost::fusion::void_
      , typename T9 = ::boost::fusion::void_
      , typename Extra = ::boost::fusion::void_
    >
    struct list_tie;

    template <typename T0>
    struct list_tie<
        T0
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::list<T0&> type;
    };

    template <typename T0, typename T1>
    struct list_tie<
        T0
      , T1
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::list<T0&, T1&> type;
    };

    template <typename T0, typename T1, typename T2>
    struct list_tie<
        T0
      , T1
      , T2
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::list<T0&, T1&, T2&> type;
    };

    template <typename T0, typename T1, typename T2, typename T3>
    struct list_tie<
        T0
      , T1
      , T2
      , T3
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::list<T0&, T1&, T2&, T3&> type;
    };

    template <typename T0, typename T1, typename T2, typename T3, typename T4>
    struct list_tie<
        T0
      , T1
      , T2
      , T3
      , T4
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&> type;
    };

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
    >
    struct list_tie<
        T0
      , T1
      , T2
      , T3
      , T4
      , T5
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&, T5&> type;
    };

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
    >
    struct list_tie<
        T0
      , T1
      , T2
      , T3
      , T4
      , T5
      , T6
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&> type;
    };

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
      , typename T7
    >
    struct list_tie<
        T0
      , T1
      , T2
      , T3
      , T4
      , T5
      , T6
      , T7
      , ::boost::fusion::void_
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion
        ::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&> type;
    };

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
      , typename T7
      , typename T8
    >
    struct list_tie<
        T0
      , T1
      , T2
      , T3
      , T4
      , T5
      , T6
      , T7
      , T8
      , ::boost::fusion::void_
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion
        ::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&, T8&> type;
    };

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
      , typename T7
      , typename T8
      , typename T9
    >
    struct list_tie<
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
      , ::boost::fusion::void_
    >
    {
        typedef ::boost::fusion
        ::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&, T8&, T9&> type;
    };
}}}

namespace boost { namespace fusion
{
    template <typename T0>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&> list_tie(T0& arg0)
    {
        return ::boost::fusion::list<T0&>(arg0);
    }

    template <typename T0, typename T1>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&> list_tie(T0& arg0, T1& arg1)
    {
        return ::boost::fusion::list<T0&, T1&>(arg0, arg1);
    }

    template <typename T0, typename T1, typename T2>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&, T2&>
    list_tie(T0& arg0, T1& arg1, T2& arg2)
    {
        return ::boost::fusion::list<T0&, T1&, T2&>(arg0, arg1, arg2);
    }

    template <typename T0, typename T1, typename T2, typename T3>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&, T2&, T3&>
    list_tie(T0& arg0, T1& arg1, T2& arg2, T3& arg3)
    {
        return ::boost::fusion
        ::list<T0&, T1&, T2&, T3&>(arg0, arg1, arg2, arg3);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&>
    list_tie(T0& arg0, T1& arg1, T2& arg2, T3& arg3, T4& arg4)
    {
        return ::boost::fusion
        ::list<T0&, T1&, T2&, T3&, T4&>(arg0, arg1, arg2, arg3, arg4);
    }

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&, T5&>
    list_tie(T0& arg0, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5)
    {
        return ::boost::fusion::list<
            T0&, T1&, T2&, T3&, T4&, T5&
        >(arg0, arg1, arg2, arg3, arg4, arg5);
    }

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&>
    list_tie(
        T0& arg0
      , T1& arg1
      , T2& arg2
      , T3& arg3
      , T4& arg4
      , T5& arg5
      , T6& arg6
    )
    {
        return ::boost::fusion::list<
            T0&, T1&, T2&, T3&, T4&, T5&, T6&
        >(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
      , typename T7
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&>
    list_tie(
        T0& arg0
      , T1& arg1
      , T2& arg2
      , T3& arg3
      , T4& arg4
      , T5& arg5
      , T6& arg6
      , T7& arg7
    )
    {
        return ::boost::fusion::list<
            T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&
        >(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
      , typename T7
      , typename T8
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&, T8&>
    list_tie(
        T0& arg0
      , T1& arg1
      , T2& arg2
      , T3& arg3
      , T4& arg4
      , T5& arg5
      , T6& arg6
      , T7& arg7
      , T8& arg8
    )
    {
        return ::boost::fusion::list<
            T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&, T8&
        >(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    template <
        typename T0
      , typename T1
      , typename T2
      , typename T3
      , typename T4
      , typename T5
      , typename T6
      , typename T7
      , typename T8
      , typename T9
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion
    ::list<T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&, T8&, T9&>
    list_tie(
        T0& arg0
      , T1& arg1
      , T2& arg2
      , T3& arg3
      , T4& arg4
      , T5& arg5
      , T6& arg6
      , T7& arg7
      , T8& arg8
      , T9& arg9
    )
    {
        return ::boost::fusion::list<
            T0&, T1&, T2&, T3&, T4&, T5&, T6&, T7&, T8&, T9&
        >(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
}}

