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
            typename K0 = ::boost::fusion::void_ , typename K1 = ::boost::fusion::void_ , typename K2 = ::boost::fusion::void_ , typename K3 = ::boost::fusion::void_ , typename K4 = ::boost::fusion::void_ , typename K5 = ::boost::fusion::void_ , typename K6 = ::boost::fusion::void_ , typename K7 = ::boost::fusion::void_ , typename K8 = ::boost::fusion::void_ , typename K9 = ::boost::fusion::void_
          , typename D0 = ::boost::fusion::void_ , typename D1 = ::boost::fusion::void_ , typename D2 = ::boost::fusion::void_ , typename D3 = ::boost::fusion::void_ , typename D4 = ::boost::fusion::void_ , typename D5 = ::boost::fusion::void_ , typename D6 = ::boost::fusion::void_ , typename D7 = ::boost::fusion::void_ , typename D8 = ::boost::fusion::void_ , typename D9 = ::boost::fusion::void_
          , typename Extra = ::boost::fusion::void_
        >
        struct map_tie;
        template <>
        struct map_tie<>
        {
            typedef ::boost::fusion::map<> type;
        };
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<> map_tie()
    {
        return ::boost::fusion::map<>();
    }
    namespace result_of
    {
        template <
            typename K0
          , typename D0
        >
        struct map_tie<
            K0
          , D0
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0
      , typename D0
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    >
    >
    map_tie(D0 & arg0)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1
          , typename D0 , typename D1
        >
        struct map_tie<
            K0 , K1
          , D0 , D1
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1
      , typename D0 , typename D1
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2
          , typename D0 , typename D1 , typename D2
        >
        struct map_tie<
            K0 , K1 , K2
          , D0 , D1 , D2
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2
      , typename D0 , typename D1 , typename D2
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3
          , typename D0 , typename D1 , typename D2 , typename D3
        >
        struct map_tie<
            K0 , K1 , K2 , K3
          , D0 , D1 , D2 , D3
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3
      , typename D0 , typename D1 , typename D2 , typename D3
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4
          , D0 , D1 , D2 , D3 , D4
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5
          , D0 , D1 , D2 , D3 , D4 , D5
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6
          , D0 , D1 , D2 , D3 , D4 , D5 , D6
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7
            , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8
            , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    > , ::boost::fusion::pair< 
        K8 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D8>::type 
# else 
      , typename ::std::add_lvalue_reference<D8>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    > , ::boost::fusion::pair< 
        K8 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D8>::type 
# else 
      , typename ::std::add_lvalue_reference<D8>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    > , ::boost::fusion::pair< 
        K8 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D8>::type 
# else 
      , typename ::std::add_lvalue_reference<D8>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9
            
            , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    > , ::boost::fusion::pair< 
        K8 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D8>::type 
# else 
      , typename ::std::add_lvalue_reference<D8>::type 
# endif 
    > , ::boost::fusion::pair< 
        K9 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D9>::type 
# else 
      , typename ::std::add_lvalue_reference<D9>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    > , ::boost::fusion::pair< 
        K8 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D8>::type 
# else 
      , typename ::std::add_lvalue_reference<D8>::type 
# endif 
    > , ::boost::fusion::pair< 
        K9 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D9>::type 
# else 
      , typename ::std::add_lvalue_reference<D9>::type 
# endif 
    >
    >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > , ::boost::fusion::pair< 
        K1 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D1>::type 
# else 
      , typename ::std::add_lvalue_reference<D1>::type 
# endif 
    > , ::boost::fusion::pair< 
        K2 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D2>::type 
# else 
      , typename ::std::add_lvalue_reference<D2>::type 
# endif 
    > , ::boost::fusion::pair< 
        K3 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D3>::type 
# else 
      , typename ::std::add_lvalue_reference<D3>::type 
# endif 
    > , ::boost::fusion::pair< 
        K4 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D4>::type 
# else 
      , typename ::std::add_lvalue_reference<D4>::type 
# endif 
    > , ::boost::fusion::pair< 
        K5 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D5>::type 
# else 
      , typename ::std::add_lvalue_reference<D5>::type 
# endif 
    > , ::boost::fusion::pair< 
        K6 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D6>::type 
# else 
      , typename ::std::add_lvalue_reference<D6>::type 
# endif 
    > , ::boost::fusion::pair< 
        K7 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D7>::type 
# else 
      , typename ::std::add_lvalue_reference<D7>::type 
# endif 
    > , ::boost::fusion::pair< 
        K8 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D8>::type 
# else 
      , typename ::std::add_lvalue_reference<D8>::type 
# endif 
    > , ::boost::fusion::pair< 
        K9 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D9>::type 
# else 
      , typename ::std::add_lvalue_reference<D9>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9));
    }
}}
