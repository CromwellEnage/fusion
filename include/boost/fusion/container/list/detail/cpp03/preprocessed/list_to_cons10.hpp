/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion { namespace detail
{
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
    struct list_to_cons
    {
        typedef T0 head_type;
        typedef ::boost::fusion::detail::list_to_cons<
            T1, T2, T3, T4, T5, T6, T7, T8, T9, ::boost::fusion::void_
        > tail_list_to_cons;
        typedef typename tail_list_to_cons::type tail_type;
        typedef ::boost::fusion::cons<head_type, tail_type> type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(typename ::boost::fusion::detail::call_param<T0>::type arg0)
        {
            return type(arg0);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
        )
        {
            return type(arg0, tail_list_to_cons::call(arg1));
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
        )
        {
            return type(arg0, tail_list_to_cons::call(arg1, arg2));
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
          , typename ::boost::fusion::detail::call_param<T3>::type arg3
        )
        {
            return type(arg0, tail_list_to_cons::call(arg1, arg2, arg3));
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
          , typename ::boost::fusion::detail::call_param<T3>::type arg3
          , typename ::boost::fusion::detail::call_param<T4>::type arg4
        )
        {
            return type(
                arg0
              , tail_list_to_cons::call(arg1, arg2, arg3, arg4)
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
          , typename ::boost::fusion::detail::call_param<T3>::type arg3
          , typename ::boost::fusion::detail::call_param<T4>::type arg4
          , typename ::boost::fusion::detail::call_param<T5>::type arg5
        )
        {
            return type(
                arg0
              , tail_list_to_cons::call(arg1, arg2, arg3, arg4, arg5)
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
          , typename ::boost::fusion::detail::call_param<T3>::type arg3
          , typename ::boost::fusion::detail::call_param<T4>::type arg4
          , typename ::boost::fusion::detail::call_param<T5>::type arg5
          , typename ::boost::fusion::detail::call_param<T6>::type arg6
        )
        {
            return type(
                arg0
              , tail_list_to_cons::call(arg1, arg2, arg3, arg4, arg5, arg6)
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
          , typename ::boost::fusion::detail::call_param<T3>::type arg3
          , typename ::boost::fusion::detail::call_param<T4>::type arg4
          , typename ::boost::fusion::detail::call_param<T5>::type arg5
          , typename ::boost::fusion::detail::call_param<T6>::type arg6
          , typename ::boost::fusion::detail::call_param<T7>::type arg7
        )
        {
            return type(
                arg0
              , tail_list_to_cons::call(
                    arg1, arg2, arg3, arg4, arg5, arg6, arg7
                )
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
          , typename ::boost::fusion::detail::call_param<T3>::type arg3
          , typename ::boost::fusion::detail::call_param<T4>::type arg4
          , typename ::boost::fusion::detail::call_param<T5>::type arg5
          , typename ::boost::fusion::detail::call_param<T6>::type arg6
          , typename ::boost::fusion::detail::call_param<T7>::type arg7
          , typename ::boost::fusion::detail::call_param<T8>::type arg8
        )
        {
            return type(
                arg0
              , tail_list_to_cons::call(
                    arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8
                )
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type
        call(
            typename ::boost::fusion::detail::call_param<T0>::type arg0
          , typename ::boost::fusion::detail::call_param<T1>::type arg1
          , typename ::boost::fusion::detail::call_param<T2>::type arg2
          , typename ::boost::fusion::detail::call_param<T3>::type arg3
          , typename ::boost::fusion::detail::call_param<T4>::type arg4
          , typename ::boost::fusion::detail::call_param<T5>::type arg5
          , typename ::boost::fusion::detail::call_param<T6>::type arg6
          , typename ::boost::fusion::detail::call_param<T7>::type arg7
          , typename ::boost::fusion::detail::call_param<T8>::type arg8
          , typename ::boost::fusion::detail::call_param<T9>::type arg9
        )
        {
            return type(
                arg0
              , tail_list_to_cons::call(
                    arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
                )
            );
        }
    };

    template <>
    struct list_to_cons<
        ::boost::fusion::void_
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
        typedef ::boost::fusion::nil_ type;
    };
}}}

