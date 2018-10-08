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
            typename K0 = ::boost::fusion::void_ , typename K1 = ::boost::fusion::void_ , typename K2 = ::boost::fusion::void_ , typename K3 = ::boost::fusion::void_ , typename K4 = ::boost::fusion::void_ , typename K5 = ::boost::fusion::void_ , typename K6 = ::boost::fusion::void_ , typename K7 = ::boost::fusion::void_ , typename K8 = ::boost::fusion::void_ , typename K9 = ::boost::fusion::void_ , typename K10 = ::boost::fusion::void_ , typename K11 = ::boost::fusion::void_ , typename K12 = ::boost::fusion::void_ , typename K13 = ::boost::fusion::void_ , typename K14 = ::boost::fusion::void_ , typename K15 = ::boost::fusion::void_ , typename K16 = ::boost::fusion::void_ , typename K17 = ::boost::fusion::void_ , typename K18 = ::boost::fusion::void_ , typename K19 = ::boost::fusion::void_ , typename K20 = ::boost::fusion::void_ , typename K21 = ::boost::fusion::void_ , typename K22 = ::boost::fusion::void_ , typename K23 = ::boost::fusion::void_ , typename K24 = ::boost::fusion::void_ , typename K25 = ::boost::fusion::void_ , typename K26 = ::boost::fusion::void_ , typename K27 = ::boost::fusion::void_ , typename K28 = ::boost::fusion::void_ , typename K29 = ::boost::fusion::void_
          , typename D0 = ::boost::fusion::void_ , typename D1 = ::boost::fusion::void_ , typename D2 = ::boost::fusion::void_ , typename D3 = ::boost::fusion::void_ , typename D4 = ::boost::fusion::void_ , typename D5 = ::boost::fusion::void_ , typename D6 = ::boost::fusion::void_ , typename D7 = ::boost::fusion::void_ , typename D8 = ::boost::fusion::void_ , typename D9 = ::boost::fusion::void_ , typename D10 = ::boost::fusion::void_ , typename D11 = ::boost::fusion::void_ , typename D12 = ::boost::fusion::void_ , typename D13 = ::boost::fusion::void_ , typename D14 = ::boost::fusion::void_ , typename D15 = ::boost::fusion::void_ , typename D16 = ::boost::fusion::void_ , typename D17 = ::boost::fusion::void_ , typename D18 = ::boost::fusion::void_ , typename D19 = ::boost::fusion::void_ , typename D20 = ::boost::fusion::void_ , typename D21 = ::boost::fusion::void_ , typename D22 = ::boost::fusion::void_ , typename D23 = ::boost::fusion::void_ , typename D24 = ::boost::fusion::void_ , typename D25 = ::boost::fusion::void_ , typename D26 = ::boost::fusion::void_ , typename D27 = ::boost::fusion::void_ , typename D28 = ::boost::fusion::void_ , typename D29 = ::boost::fusion::void_
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
        K0 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D0>::type 
# else 
      , typename ::std::add_lvalue_reference<D0>::type 
# endif 
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > >
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
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22 , K23
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22 , D23
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22 , D23 & arg23)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22) , ::boost::fusion::pair_tie<K23>(arg23));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22 , K23 , K24
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22 , D23 , D24
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22 , D23 & arg23 , D24 & arg24)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22) , ::boost::fusion::pair_tie<K23>(arg23) , ::boost::fusion::pair_tie<K24>(arg24));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22 , K23 , K24 , K25
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22 , D23 , D24 , D25
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22 , D23 & arg23 , D24 & arg24 , D25 & arg25)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22) , ::boost::fusion::pair_tie<K23>(arg23) , ::boost::fusion::pair_tie<K24>(arg24) , ::boost::fusion::pair_tie<K25>(arg25));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22 , K23 , K24 , K25 , K26
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22 , D23 , D24 , D25 , D26
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22 , D23 & arg23 , D24 & arg24 , D25 & arg25 , D26 & arg26)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22) , ::boost::fusion::pair_tie<K23>(arg23) , ::boost::fusion::pair_tie<K24>(arg24) , ::boost::fusion::pair_tie<K25>(arg25) , ::boost::fusion::pair_tie<K26>(arg26));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26 , typename K27
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26 , typename D27
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22 , K23 , K24 , K25 , K26 , K27
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22 , D23 , D24 , D25 , D26 , D27
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26 , typename K27
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26 , typename D27
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22 , D23 & arg23 , D24 & arg24 , D25 & arg25 , D26 & arg26 , D27 & arg27)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22) , ::boost::fusion::pair_tie<K23>(arg23) , ::boost::fusion::pair_tie<K24>(arg24) , ::boost::fusion::pair_tie<K25>(arg25) , ::boost::fusion::pair_tie<K26>(arg26) , ::boost::fusion::pair_tie<K27>(arg27));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26 , typename K27 , typename K28
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26 , typename D27 , typename D28
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22 , K23 , K24 , K25 , K26 , K27 , K28
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22 , D23 , D24 , D25 , D26 , D27 , D28
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
    > , ::boost::fusion::pair< 
        K9 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D9>::type 
# else 
      , typename ::std::add_lvalue_reference<D9>::type 
# endif 
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    > , ::boost::fusion::pair< 
        K28 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D28>::type 
# else 
      , typename ::std::add_lvalue_reference<D28>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26 , typename K27 , typename K28
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26 , typename D27 , typename D28
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    > , ::boost::fusion::pair< 
        K28 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D28>::type 
# else 
      , typename ::std::add_lvalue_reference<D28>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22 , D23 & arg23 , D24 & arg24 , D25 & arg25 , D26 & arg26 , D27 & arg27 , D28 & arg28)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    > , ::boost::fusion::pair< 
        K28 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D28>::type 
# else 
      , typename ::std::add_lvalue_reference<D28>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22) , ::boost::fusion::pair_tie<K23>(arg23) , ::boost::fusion::pair_tie<K24>(arg24) , ::boost::fusion::pair_tie<K25>(arg25) , ::boost::fusion::pair_tie<K26>(arg26) , ::boost::fusion::pair_tie<K27>(arg27) , ::boost::fusion::pair_tie<K28>(arg28));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26 , typename K27 , typename K28 , typename K29
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26 , typename D27 , typename D28 , typename D29
        >
        struct map_tie<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9 , K10 , K11 , K12 , K13 , K14 , K15 , K16 , K17 , K18 , K19 , K20 , K21 , K22 , K23 , K24 , K25 , K26 , K27 , K28 , K29
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9 , D10 , D11 , D12 , D13 , D14 , D15 , D16 , D17 , D18 , D19 , D20 , D21 , D22 , D23 , D24 , D25 , D26 , D27 , D28 , D29
            
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    > , ::boost::fusion::pair< 
        K28 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D28>::type 
# else 
      , typename ::std::add_lvalue_reference<D28>::type 
# endif 
    > , ::boost::fusion::pair< 
        K29 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D29>::type 
# else 
      , typename ::std::add_lvalue_reference<D29>::type 
# endif 
    >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9 , typename K10 , typename K11 , typename K12 , typename K13 , typename K14 , typename K15 , typename K16 , typename K17 , typename K18 , typename K19 , typename K20 , typename K21 , typename K22 , typename K23 , typename K24 , typename K25 , typename K26 , typename K27 , typename K28 , typename K29
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9 , typename D10 , typename D11 , typename D12 , typename D13 , typename D14 , typename D15 , typename D16 , typename D17 , typename D18 , typename D19 , typename D20 , typename D21 , typename D22 , typename D23 , typename D24 , typename D25 , typename D26 , typename D27 , typename D28 , typename D29
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<::boost::fusion::pair< 
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    > , ::boost::fusion::pair< 
        K28 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D28>::type 
# else 
      , typename ::std::add_lvalue_reference<D28>::type 
# endif 
    > , ::boost::fusion::pair< 
        K29 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D29>::type 
# else 
      , typename ::std::add_lvalue_reference<D29>::type 
# endif 
    > >
    map_tie(D0 & arg0 , D1 & arg1 , D2 & arg2 , D3 & arg3 , D4 & arg4 , D5 & arg5 , D6 & arg6 , D7 & arg7 , D8 & arg8 , D9 & arg9 , D10 & arg10 , D11 & arg11 , D12 & arg12 , D13 & arg13 , D14 & arg14 , D15 & arg15 , D16 & arg16 , D17 & arg17 , D18 & arg18 , D19 & arg19 , D20 & arg20 , D21 & arg21 , D22 & arg22 , D23 & arg23 , D24 & arg24 , D25 & arg25 , D26 & arg26 , D27 & arg27 , D28 & arg28 , D29 & arg29)
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
    > , ::boost::fusion::pair< 
        K10 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D10>::type 
# else 
      , typename ::std::add_lvalue_reference<D10>::type 
# endif 
    > , ::boost::fusion::pair< 
        K11 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D11>::type 
# else 
      , typename ::std::add_lvalue_reference<D11>::type 
# endif 
    > , ::boost::fusion::pair< 
        K12 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D12>::type 
# else 
      , typename ::std::add_lvalue_reference<D12>::type 
# endif 
    > , ::boost::fusion::pair< 
        K13 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D13>::type 
# else 
      , typename ::std::add_lvalue_reference<D13>::type 
# endif 
    > , ::boost::fusion::pair< 
        K14 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D14>::type 
# else 
      , typename ::std::add_lvalue_reference<D14>::type 
# endif 
    > , ::boost::fusion::pair< 
        K15 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D15>::type 
# else 
      , typename ::std::add_lvalue_reference<D15>::type 
# endif 
    > , ::boost::fusion::pair< 
        K16 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D16>::type 
# else 
      , typename ::std::add_lvalue_reference<D16>::type 
# endif 
    > , ::boost::fusion::pair< 
        K17 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D17>::type 
# else 
      , typename ::std::add_lvalue_reference<D17>::type 
# endif 
    > , ::boost::fusion::pair< 
        K18 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D18>::type 
# else 
      , typename ::std::add_lvalue_reference<D18>::type 
# endif 
    > , ::boost::fusion::pair< 
        K19 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D19>::type 
# else 
      , typename ::std::add_lvalue_reference<D19>::type 
# endif 
    > , ::boost::fusion::pair< 
        K20 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D20>::type 
# else 
      , typename ::std::add_lvalue_reference<D20>::type 
# endif 
    > , ::boost::fusion::pair< 
        K21 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D21>::type 
# else 
      , typename ::std::add_lvalue_reference<D21>::type 
# endif 
    > , ::boost::fusion::pair< 
        K22 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D22>::type 
# else 
      , typename ::std::add_lvalue_reference<D22>::type 
# endif 
    > , ::boost::fusion::pair< 
        K23 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D23>::type 
# else 
      , typename ::std::add_lvalue_reference<D23>::type 
# endif 
    > , ::boost::fusion::pair< 
        K24 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D24>::type 
# else 
      , typename ::std::add_lvalue_reference<D24>::type 
# endif 
    > , ::boost::fusion::pair< 
        K25 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D25>::type 
# else 
      , typename ::std::add_lvalue_reference<D25>::type 
# endif 
    > , ::boost::fusion::pair< 
        K26 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D26>::type 
# else 
      , typename ::std::add_lvalue_reference<D26>::type 
# endif 
    > , ::boost::fusion::pair< 
        K27 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D27>::type 
# else 
      , typename ::std::add_lvalue_reference<D27>::type 
# endif 
    > , ::boost::fusion::pair< 
        K28 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D28>::type 
# else 
      , typename ::std::add_lvalue_reference<D28>::type 
# endif 
    > , ::boost::fusion::pair< 
        K29 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
      , typename ::boost::add_lvalue_reference<D29>::type 
# else 
      , typename ::std::add_lvalue_reference<D29>::type 
# endif 
    >
        >(::boost::fusion::pair_tie<K0>(arg0) , ::boost::fusion::pair_tie<K1>(arg1) , ::boost::fusion::pair_tie<K2>(arg2) , ::boost::fusion::pair_tie<K3>(arg3) , ::boost::fusion::pair_tie<K4>(arg4) , ::boost::fusion::pair_tie<K5>(arg5) , ::boost::fusion::pair_tie<K6>(arg6) , ::boost::fusion::pair_tie<K7>(arg7) , ::boost::fusion::pair_tie<K8>(arg8) , ::boost::fusion::pair_tie<K9>(arg9) , ::boost::fusion::pair_tie<K10>(arg10) , ::boost::fusion::pair_tie<K11>(arg11) , ::boost::fusion::pair_tie<K12>(arg12) , ::boost::fusion::pair_tie<K13>(arg13) , ::boost::fusion::pair_tie<K14>(arg14) , ::boost::fusion::pair_tie<K15>(arg15) , ::boost::fusion::pair_tie<K16>(arg16) , ::boost::fusion::pair_tie<K17>(arg17) , ::boost::fusion::pair_tie<K18>(arg18) , ::boost::fusion::pair_tie<K19>(arg19) , ::boost::fusion::pair_tie<K20>(arg20) , ::boost::fusion::pair_tie<K21>(arg21) , ::boost::fusion::pair_tie<K22>(arg22) , ::boost::fusion::pair_tie<K23>(arg23) , ::boost::fusion::pair_tie<K24>(arg24) , ::boost::fusion::pair_tie<K25>(arg25) , ::boost::fusion::pair_tie<K26>(arg26) , ::boost::fusion::pair_tie<K27>(arg27) , ::boost::fusion::pair_tie<K28>(arg28) , ::boost::fusion::pair_tie<K29>(arg29));
    }
}}
