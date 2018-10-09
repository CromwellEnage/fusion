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
        struct make_map;
        template <>
        struct make_map<>
        {
            typedef ::boost::fusion::map<> type;
        };
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<> make_map()
    {
        return ::boost::fusion::map<>();
    }
    namespace result_of
    {
        template <
            typename K0
          , typename D0
        >
        struct make_map<
            K0
          , D0
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type >
            > type;
        };
    }
    template <
        typename K0
      , typename D0
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type >
    >
    make_map(D0 const& arg0)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type >
        >(::boost::fusion::make_pair<K0>(arg0));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1
          , typename D0 , typename D1
        >
        struct make_map<
            K0 , K1
          , D0 , D1
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1
      , typename D0 , typename D1
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2
          , typename D0 , typename D1 , typename D2
        >
        struct make_map<
            K0 , K1 , K2
          , D0 , D1 , D2
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2
      , typename D0 , typename D1 , typename D2
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3
          , typename D0 , typename D1 , typename D2 , typename D3
        >
        struct make_map<
            K0 , K1 , K2 , K3
          , D0 , D1 , D2 , D3
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3
      , typename D0 , typename D1 , typename D2 , typename D3
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2 , D3 const& arg3)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2) , ::boost::fusion::make_pair<K3>(arg3));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4
        >
        struct make_map<
            K0 , K1 , K2 , K3 , K4
          , D0 , D1 , D2 , D3 , D4
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2 , D3 const& arg3 , D4 const& arg4)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2) , ::boost::fusion::make_pair<K3>(arg3) , ::boost::fusion::make_pair<K4>(arg4));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5
        >
        struct make_map<
            K0 , K1 , K2 , K3 , K4 , K5
          , D0 , D1 , D2 , D3 , D4 , D5
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2 , D3 const& arg3 , D4 const& arg4 , D5 const& arg5)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2) , ::boost::fusion::make_pair<K3>(arg3) , ::boost::fusion::make_pair<K4>(arg4) , ::boost::fusion::make_pair<K5>(arg5));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6
        >
        struct make_map<
            K0 , K1 , K2 , K3 , K4 , K5 , K6
          , D0 , D1 , D2 , D3 , D4 , D5 , D6
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2 , D3 const& arg3 , D4 const& arg4 , D5 const& arg5 , D6 const& arg6)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2) , ::boost::fusion::make_pair<K3>(arg3) , ::boost::fusion::make_pair<K4>(arg4) , ::boost::fusion::make_pair<K5>(arg5) , ::boost::fusion::make_pair<K6>(arg6));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7
        >
        struct make_map<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7
            , ::boost::fusion::void_ , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2 , D3 const& arg3 , D4 const& arg4 , D5 const& arg5 , D6 const& arg6 , D7 const& arg7)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2) , ::boost::fusion::make_pair<K3>(arg3) , ::boost::fusion::make_pair<K4>(arg4) , ::boost::fusion::make_pair<K5>(arg5) , ::boost::fusion::make_pair<K6>(arg6) , ::boost::fusion::make_pair<K7>(arg7));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8
        >
        struct make_map<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8
            , ::boost::fusion::void_
            , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type > , ::boost::fusion::pair< K8 , typename ::boost::fusion::detail ::as_fusion_element<D8>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type > , ::boost::fusion::pair< K8 , typename ::boost::fusion::detail ::as_fusion_element<D8>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2 , D3 const& arg3 , D4 const& arg4 , D5 const& arg5 , D6 const& arg6 , D7 const& arg7 , D8 const& arg8)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type > , ::boost::fusion::pair< K8 , typename ::boost::fusion::detail ::as_fusion_element<D8>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2) , ::boost::fusion::make_pair<K3>(arg3) , ::boost::fusion::make_pair<K4>(arg4) , ::boost::fusion::make_pair<K5>(arg5) , ::boost::fusion::make_pair<K6>(arg6) , ::boost::fusion::make_pair<K7>(arg7) , ::boost::fusion::make_pair<K8>(arg8));
    }
    namespace result_of
    {
        template <
            typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9
          , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9
        >
        struct make_map<
            K0 , K1 , K2 , K3 , K4 , K5 , K6 , K7 , K8 , K9
          , D0 , D1 , D2 , D3 , D4 , D5 , D6 , D7 , D8 , D9
            
            , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::map<
                ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type > , ::boost::fusion::pair< K8 , typename ::boost::fusion::detail ::as_fusion_element<D8>::type > , ::boost::fusion::pair< K9 , typename ::boost::fusion::detail ::as_fusion_element<D9>::type >
            > type;
        };
    }
    template <
        typename K0 , typename K1 , typename K2 , typename K3 , typename K4 , typename K5 , typename K6 , typename K7 , typename K8 , typename K9
      , typename D0 , typename D1 , typename D2 , typename D3 , typename D4 , typename D5 , typename D6 , typename D7 , typename D8 , typename D9
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<
        ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type > , ::boost::fusion::pair< K8 , typename ::boost::fusion::detail ::as_fusion_element<D8>::type > , ::boost::fusion::pair< K9 , typename ::boost::fusion::detail ::as_fusion_element<D9>::type >
    >
    make_map(D0 const& arg0 , D1 const& arg1 , D2 const& arg2 , D3 const& arg3 , D4 const& arg4 , D5 const& arg5 , D6 const& arg6 , D7 const& arg7 , D8 const& arg8 , D9 const& arg9)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > , ::boost::fusion::pair< K1 , typename ::boost::fusion::detail ::as_fusion_element<D1>::type > , ::boost::fusion::pair< K2 , typename ::boost::fusion::detail ::as_fusion_element<D2>::type > , ::boost::fusion::pair< K3 , typename ::boost::fusion::detail ::as_fusion_element<D3>::type > , ::boost::fusion::pair< K4 , typename ::boost::fusion::detail ::as_fusion_element<D4>::type > , ::boost::fusion::pair< K5 , typename ::boost::fusion::detail ::as_fusion_element<D5>::type > , ::boost::fusion::pair< K6 , typename ::boost::fusion::detail ::as_fusion_element<D6>::type > , ::boost::fusion::pair< K7 , typename ::boost::fusion::detail ::as_fusion_element<D7>::type > , ::boost::fusion::pair< K8 , typename ::boost::fusion::detail ::as_fusion_element<D8>::type > , ::boost::fusion::pair< K9 , typename ::boost::fusion::detail ::as_fusion_element<D9>::type >
        >(::boost::fusion::make_pair<K0>(arg0) , ::boost::fusion::make_pair<K1>(arg1) , ::boost::fusion::make_pair<K2>(arg2) , ::boost::fusion::make_pair<K3>(arg3) , ::boost::fusion::make_pair<K4>(arg4) , ::boost::fusion::make_pair<K5>(arg5) , ::boost::fusion::make_pair<K6>(arg6) , ::boost::fusion::make_pair<K7>(arg7) , ::boost::fusion::make_pair<K8>(arg8) , ::boost::fusion::make_pair<K9>(arg9));
    }
}}
