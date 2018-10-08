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
            BOOST_PP_REPEAT_1_FUSION_MAX_VECTOR_SIZE( BOOST_PP_ENUM_BINARY_PARAMS_M, ( typename T, = ::boost::fusion::void_ BOOST_PP_INTERCEPT_))
          , typename Extra = ::boost::fusion::void_
        >
        struct make_set;
        template <>
        struct make_set<>
        {
            typedef ::boost::fusion::set<> type;
        };
    }
    
# if defined(BOOST_CLANG)
    BOOST_CXX14_CONSTEXPR
# else
    BOOST_CONSTEXPR
# endif
    BOOST_FUSION_GPU_ENABLED
    inline ::boost::fusion::set<> make_set()
    {
        return ::boost::fusion::set<>();
    }
    namespace result_of
    {
        template <typename T0>
        struct make_set<
            T0
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::set<
                typename ::boost::fusion::detail ::as_fusion_element<T0>::type
            > type;
        };
    }
    template <typename T0>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline set<
        typename ::boost::fusion::detail ::as_fusion_element<T0>::type
    >
    make_set(T0 const& arg0)
    {
        return ::boost::fusion::set<
            typename ::boost::fusion::detail ::as_fusion_element<T0>::type
        >(arg0);
    }
    namespace result_of
    {
        template <>
        struct make_set<
            
            , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_ , ::boost::fusion::void_
        >
        {
            typedef ::boost::fusion::set<
                
            > type;
        };
    }
    template <>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline set<
        
    >
    make_set()
    {
        return ::boost::fusion::set<
            
        >();
    }
}}
