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
            BOOST_PP_REPEAT_1_FUSION_MAX_VECTOR_SIZE( BOOST_PP_ENUM_BINARY_PARAMS_M, ( typename K, = ::boost::fusion::void_ BOOST_PP_INTERCEPT_))
          , BOOST_PP_REPEAT_1_FUSION_MAX_VECTOR_SIZE( BOOST_PP_ENUM_BINARY_PARAMS_M, ( typename D, = ::boost::fusion::void_ BOOST_PP_INTERCEPT_))
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
            BOOST_PP_REPEAT_1_BOOST_PP_DEC_FUSION_MAX_VECTOR_SIZE( BOOST_PP_REPEAT_FROM_TO_M_1, (1, 1 , TEXT , ::boost::fusion::void_ ))
            BOOST_PP_REPEAT_1_FUSION_MAX_VECTOR_SIZE( BOOST_PP_REPEAT_FROM_TO_M_1, (1, 0 , TEXT , ::boost::fusion::void_ ))
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
    inline ::boost::fusion::map<::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type > >
    make_map(D0 const& arg0)
    {
        return ::boost::fusion::map<
            ::boost::fusion::pair< K0 , typename ::boost::fusion::detail ::as_fusion_element<D0>::type >
        >(::boost::fusion::make_pair<K0>(arg0));
    }
    namespace result_of
    {
        template <
            
          , 
        >
        struct make_map<
            
          , 
            BOOST_PP_REPEAT_1_FUSION_MAX_VECTOR_SIZE( BOOST_PP_REPEAT_FROM_TO_M_1, (1, 0 , TEXT , ::boost::fusion::void_ ))
            BOOST_PP_REPEAT_1_FUSION_MAX_VECTOR_SIZE( BOOST_PP_REPEAT_FROM_TO_M_1, (1, 0 , TEXT , ::boost::fusion::void_ ))
        >
        {
            typedef ::boost::fusion::map<
                
            > type;
        };
    }
    template <
        
      , 
    >
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::map<>
    make_map()
    {
        return ::boost::fusion::map<
            
        >();
    }
}}
