/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    struct vector_data11
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data11() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data11(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data11(vector_data11&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data11(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data11(
            vector_data11 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data11&
        operator=(vector_data11 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data11
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9);
            return vector_data11(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data11
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9);
            return vector_data11(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    struct vector11
      : ::boost::fusion::vector_data11<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector11<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10
            >
        >
    {
        typedef ::boost::fusion::vector11<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10
        > this_type;
        typedef ::boost::fusion::vector_data11<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10
        > base_type;
        typedef ::boost::mpl::vector11<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<11> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector11()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector11(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector11(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector11(vector11&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector11(vector11 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector11&
        operator=(vector11 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector11&
        operator=(vector11&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector11(
            ::boost::fusion::vector11<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector11(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector11(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector11&
        operator=(
            ::boost::fusion::vector11<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    struct vector_data12
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data12() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data12(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data12(vector_data12&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data12(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data12(
            vector_data12 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data12&
        operator=(vector_data12 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data12
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10);
            return vector_data12(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data12
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10);
            return vector_data12(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    struct vector12
      : ::boost::fusion::vector_data12<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector12<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11
            >
        >
    {
        typedef ::boost::fusion::vector12<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11
        > this_type;
        typedef ::boost::fusion::vector_data12<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11
        > base_type;
        typedef ::boost::mpl::vector12<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<12> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector12()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector12(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector12(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector12(vector12&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector12(vector12 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector12&
        operator=(vector12 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector12&
        operator=(vector12&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector12(
            ::boost::fusion::vector12<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector12(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector12(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector12&
        operator=(
            ::boost::fusion::vector12<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    struct vector_data13
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data13() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data13(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data13(vector_data13&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data13(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data13(
            vector_data13 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data13&
        operator=(vector_data13 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data13
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11);
            return vector_data13(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data13
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11);
            return vector_data13(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    struct vector13
      : ::boost::fusion::vector_data13<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector13<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12
            >
        >
    {
        typedef ::boost::fusion::vector13<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12
        > this_type;
        typedef ::boost::fusion::vector_data13<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12
        > base_type;
        typedef ::boost::mpl::vector13<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<13> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector13()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector13(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector13(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector13(vector13&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector13(vector13 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector13&
        operator=(vector13 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector13&
        operator=(vector13&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector13(
            ::boost::fusion::vector13<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector13(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector13(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector13&
        operator=(
            ::boost::fusion::vector13<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    struct vector_data14
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data14() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12() , m13()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data14(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12)) , m13(::std::forward<U13>( arg13))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data14(vector_data14&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12)) , m13(::std::forward<T13>( other.m13))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data14(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12) , m13(arg13)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data14(
            vector_data14 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12) , m13(other.m13)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data14&
        operator=(vector_data14 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data14
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12);
            return vector_data14(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data14
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12);
            return vector_data14(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12; T13 m13;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    struct vector14
      : ::boost::fusion::vector_data14<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector14<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13
            >
        >
    {
        typedef ::boost::fusion::vector14<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13
        > this_type;
        typedef ::boost::fusion::vector_data14<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13
        > base_type;
        typedef ::boost::mpl::vector14<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<14> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector14()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector14(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector14(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12) , ::std::forward<U13>( arg13))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector14(vector14&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector14(vector14 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector14&
        operator=(vector14 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector14&
        operator=(vector14&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12); this->m13 = ::std ::forward<T13>(vec.m13);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector14(
            ::boost::fusion::vector14<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12 , vec.m13)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector14(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector14(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector14&
        operator=(
            ::boost::fusion::vector14<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12; this->m13 = *i13;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T13>::type 
# else 
        typename ::std::add_lvalue_reference<T13>::type 
# endif 
        at_impl(::boost::mpl::int_< 13>) 
        { 
            return this->m13; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T13>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T13>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 13>) const 
        { 
            return this->m13; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    struct vector_data15
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data15() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12() , m13() , m14()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data15(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12)) , m13(::std::forward<U13>( arg13)) , m14(::std::forward<U14>( arg14))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data15(vector_data15&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12)) , m13(::std::forward<T13>( other.m13)) , m14(::std::forward<T14>( other.m14))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data15(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12) , m13(arg13) , m14(arg14)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data15(
            vector_data15 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12) , m13(other.m13) , m14(other.m14)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data15&
        operator=(vector_data15 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data15
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13);
            return vector_data15(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data15
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13);
            return vector_data15(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12; T13 m13; T14 m14;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    struct vector15
      : ::boost::fusion::vector_data15<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector15<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14
            >
        >
    {
        typedef ::boost::fusion::vector15<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14
        > this_type;
        typedef ::boost::fusion::vector_data15<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14
        > base_type;
        typedef ::boost::mpl::vector15<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<15> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector15()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector15(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector15(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12) , ::std::forward<U13>( arg13) , ::std::forward<U14>( arg14))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector15(vector15&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector15(vector15 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector15&
        operator=(vector15 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector15&
        operator=(vector15&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12); this->m13 = ::std ::forward<T13>(vec.m13); this->m14 = ::std ::forward<T14>(vec.m14);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector15(
            ::boost::fusion::vector15<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12 , vec.m13 , vec.m14)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector15(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector15(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector15&
        operator=(
            ::boost::fusion::vector15<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12; this->m13 = *i13; this->m14 = *i14;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T13>::type 
# else 
        typename ::std::add_lvalue_reference<T13>::type 
# endif 
        at_impl(::boost::mpl::int_< 13>) 
        { 
            return this->m13; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T13>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T13>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 13>) const 
        { 
            return this->m13; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T14>::type 
# else 
        typename ::std::add_lvalue_reference<T14>::type 
# endif 
        at_impl(::boost::mpl::int_< 14>) 
        { 
            return this->m14; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T14>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T14>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 14>) const 
        { 
            return this->m14; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    struct vector_data16
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data16() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12() , m13() , m14() , m15()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data16(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12)) , m13(::std::forward<U13>( arg13)) , m14(::std::forward<U14>( arg14)) , m15(::std::forward<U15>( arg15))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data16(vector_data16&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12)) , m13(::std::forward<T13>( other.m13)) , m14(::std::forward<T14>( other.m14)) , m15(::std::forward<T15>( other.m15))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data16(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12) , m13(arg13) , m14(arg14) , m15(arg15)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data16(
            vector_data16 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12) , m13(other.m13) , m14(other.m14) , m15(other.m15)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data16&
        operator=(vector_data16 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data16
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14);
            return vector_data16(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data16
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14);
            return vector_data16(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12; T13 m13; T14 m14; T15 m15;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    struct vector16
      : ::boost::fusion::vector_data16<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector16<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15
            >
        >
    {
        typedef ::boost::fusion::vector16<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15
        > this_type;
        typedef ::boost::fusion::vector_data16<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15
        > base_type;
        typedef ::boost::mpl::vector16<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<16> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector16()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector16(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector16(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12) , ::std::forward<U13>( arg13) , ::std::forward<U14>( arg14) , ::std::forward<U15>( arg15))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector16(vector16&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector16(vector16 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector16&
        operator=(vector16 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector16&
        operator=(vector16&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12); this->m13 = ::std ::forward<T13>(vec.m13); this->m14 = ::std ::forward<T14>(vec.m14); this->m15 = ::std ::forward<T15>(vec.m15);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector16(
            ::boost::fusion::vector16<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12 , vec.m13 , vec.m14 , vec.m15)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector16(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector16(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector16&
        operator=(
            ::boost::fusion::vector16<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12; this->m13 = *i13; this->m14 = *i14; this->m15 = *i15;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T13>::type 
# else 
        typename ::std::add_lvalue_reference<T13>::type 
# endif 
        at_impl(::boost::mpl::int_< 13>) 
        { 
            return this->m13; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T13>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T13>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 13>) const 
        { 
            return this->m13; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T14>::type 
# else 
        typename ::std::add_lvalue_reference<T14>::type 
# endif 
        at_impl(::boost::mpl::int_< 14>) 
        { 
            return this->m14; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T14>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T14>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 14>) const 
        { 
            return this->m14; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T15>::type 
# else 
        typename ::std::add_lvalue_reference<T15>::type 
# endif 
        at_impl(::boost::mpl::int_< 15>) 
        { 
            return this->m15; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T15>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T15>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 15>) const 
        { 
            return this->m15; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    struct vector_data17
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data17() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12() , m13() , m14() , m15() , m16()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data17(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12)) , m13(::std::forward<U13>( arg13)) , m14(::std::forward<U14>( arg14)) , m15(::std::forward<U15>( arg15)) , m16(::std::forward<U16>( arg16))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data17(vector_data17&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12)) , m13(::std::forward<T13>( other.m13)) , m14(::std::forward<T14>( other.m14)) , m15(::std::forward<T15>( other.m15)) , m16(::std::forward<T16>( other.m16))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data17(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12) , m13(arg13) , m14(arg14) , m15(arg15) , m16(arg16)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data17(
            vector_data17 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12) , m13(other.m13) , m14(other.m14) , m15(other.m15) , m16(other.m16)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data17&
        operator=(vector_data17 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data17
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15);
            return vector_data17(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data17
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15);
            return vector_data17(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12; T13 m13; T14 m14; T15 m15; T16 m16;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    struct vector17
      : ::boost::fusion::vector_data17<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector17<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16
            >
        >
    {
        typedef ::boost::fusion::vector17<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16
        > this_type;
        typedef ::boost::fusion::vector_data17<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16
        > base_type;
        typedef ::boost::mpl::vector17<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<17> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector17()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector17(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector17(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12) , ::std::forward<U13>( arg13) , ::std::forward<U14>( arg14) , ::std::forward<U15>( arg15) , ::std::forward<U16>( arg16))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector17(vector17&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector17(vector17 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector17&
        operator=(vector17 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector17&
        operator=(vector17&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12); this->m13 = ::std ::forward<T13>(vec.m13); this->m14 = ::std ::forward<T14>(vec.m14); this->m15 = ::std ::forward<T15>(vec.m15); this->m16 = ::std ::forward<T16>(vec.m16);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector17(
            ::boost::fusion::vector17<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12 , vec.m13 , vec.m14 , vec.m15 , vec.m16)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector17(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector17(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector17&
        operator=(
            ::boost::fusion::vector17<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12; this->m13 = *i13; this->m14 = *i14; this->m15 = *i15; this->m16 = *i16;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T13>::type 
# else 
        typename ::std::add_lvalue_reference<T13>::type 
# endif 
        at_impl(::boost::mpl::int_< 13>) 
        { 
            return this->m13; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T13>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T13>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 13>) const 
        { 
            return this->m13; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T14>::type 
# else 
        typename ::std::add_lvalue_reference<T14>::type 
# endif 
        at_impl(::boost::mpl::int_< 14>) 
        { 
            return this->m14; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T14>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T14>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 14>) const 
        { 
            return this->m14; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T15>::type 
# else 
        typename ::std::add_lvalue_reference<T15>::type 
# endif 
        at_impl(::boost::mpl::int_< 15>) 
        { 
            return this->m15; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T15>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T15>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 15>) const 
        { 
            return this->m15; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T16>::type 
# else 
        typename ::std::add_lvalue_reference<T16>::type 
# endif 
        at_impl(::boost::mpl::int_< 16>) 
        { 
            return this->m16; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T16>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T16>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 16>) const 
        { 
            return this->m16; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    struct vector_data18
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data18() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12() , m13() , m14() , m15() , m16() , m17()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data18(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12)) , m13(::std::forward<U13>( arg13)) , m14(::std::forward<U14>( arg14)) , m15(::std::forward<U15>( arg15)) , m16(::std::forward<U16>( arg16)) , m17(::std::forward<U17>( arg17))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data18(vector_data18&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12)) , m13(::std::forward<T13>( other.m13)) , m14(::std::forward<T14>( other.m14)) , m15(::std::forward<T15>( other.m15)) , m16(::std::forward<T16>( other.m16)) , m17(::std::forward<T17>( other.m17))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data18(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16 , typename ::boost::fusion::detail::call_param<T17 >::type arg17
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12) , m13(arg13) , m14(arg14) , m15(arg15) , m16(arg16) , m17(arg17)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data18(
            vector_data18 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12) , m13(other.m13) , m14(other.m14) , m15(other.m15) , m16(other.m16) , m17(other.m17)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data18&
        operator=(vector_data18 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16; this->m17 = vec.m17;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data18
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16);
            return vector_data18(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16 , *i17);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data18
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16);
            return vector_data18(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16 , *i17);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12; T13 m13; T14 m14; T15 m15; T16 m16; T17 m17;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    struct vector18
      : ::boost::fusion::vector_data18<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector18<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17
            >
        >
    {
        typedef ::boost::fusion::vector18<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17
        > this_type;
        typedef ::boost::fusion::vector_data18<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17
        > base_type;
        typedef ::boost::mpl::vector18<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<18> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector18()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector18(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16 , typename ::boost::fusion::detail::call_param<T17 >::type arg17
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector18(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12) , ::std::forward<U13>( arg13) , ::std::forward<U14>( arg14) , ::std::forward<U15>( arg15) , ::std::forward<U16>( arg16) , ::std::forward<U17>( arg17))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector18(vector18&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector18(vector18 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector18&
        operator=(vector18 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector18&
        operator=(vector18&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12); this->m13 = ::std ::forward<T13>(vec.m13); this->m14 = ::std ::forward<T14>(vec.m14); this->m15 = ::std ::forward<T15>(vec.m15); this->m16 = ::std ::forward<T16>(vec.m16); this->m17 = ::std ::forward<T17>(vec.m17);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector18(
            ::boost::fusion::vector18<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12 , vec.m13 , vec.m14 , vec.m15 , vec.m16 , vec.m17)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector18(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector18(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector18&
        operator=(
            ::boost::fusion::vector18<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16; this->m17 = vec.m17;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12; this->m13 = *i13; this->m14 = *i14; this->m15 = *i15; this->m16 = *i16; this->m17 = *i17;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T13>::type 
# else 
        typename ::std::add_lvalue_reference<T13>::type 
# endif 
        at_impl(::boost::mpl::int_< 13>) 
        { 
            return this->m13; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T13>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T13>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 13>) const 
        { 
            return this->m13; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T14>::type 
# else 
        typename ::std::add_lvalue_reference<T14>::type 
# endif 
        at_impl(::boost::mpl::int_< 14>) 
        { 
            return this->m14; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T14>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T14>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 14>) const 
        { 
            return this->m14; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T15>::type 
# else 
        typename ::std::add_lvalue_reference<T15>::type 
# endif 
        at_impl(::boost::mpl::int_< 15>) 
        { 
            return this->m15; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T15>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T15>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 15>) const 
        { 
            return this->m15; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T16>::type 
# else 
        typename ::std::add_lvalue_reference<T16>::type 
# endif 
        at_impl(::boost::mpl::int_< 16>) 
        { 
            return this->m16; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T16>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T16>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 16>) const 
        { 
            return this->m16; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T17>::type 
# else 
        typename ::std::add_lvalue_reference<T17>::type 
# endif 
        at_impl(::boost::mpl::int_< 17>) 
        { 
            return this->m17; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T17>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T17>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 17>) const 
        { 
            return this->m17; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    struct vector_data19
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data19() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12() , m13() , m14() , m15() , m16() , m17() , m18()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data19(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17 , U18 && arg18
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12)) , m13(::std::forward<U13>( arg13)) , m14(::std::forward<U14>( arg14)) , m15(::std::forward<U15>( arg15)) , m16(::std::forward<U16>( arg16)) , m17(::std::forward<U17>( arg17)) , m18(::std::forward<U18>( arg18))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data19(vector_data19&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12)) , m13(::std::forward<T13>( other.m13)) , m14(::std::forward<T14>( other.m14)) , m15(::std::forward<T15>( other.m15)) , m16(::std::forward<T16>( other.m16)) , m17(::std::forward<T17>( other.m17)) , m18(::std::forward<T18>( other.m18))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data19(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16 , typename ::boost::fusion::detail::call_param<T17 >::type arg17 , typename ::boost::fusion::detail::call_param<T18 >::type arg18
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12) , m13(arg13) , m14(arg14) , m15(arg15) , m16(arg16) , m17(arg17) , m18(arg18)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data19(
            vector_data19 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12) , m13(other.m13) , m14(other.m14) , m15(other.m15) , m16(other.m16) , m17(other.m17) , m18(other.m18)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data19&
        operator=(vector_data19 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16; this->m17 = vec.m17; this->m18 = vec.m18;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data19
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16); typedef typename ::boost::fusion::result_of::next< 
            I17 
        >::type I18; 
        I18 i18 = ::boost::fusion 
        ::next(i17);
            return vector_data19(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16 , *i17 , *i18);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data19
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16); typedef typename ::boost::fusion::result_of::next< 
            I17 
        >::type I18; 
        I18 i18 = ::boost::fusion 
        ::next(i17);
            return vector_data19(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16 , *i17 , *i18);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12; T13 m13; T14 m14; T15 m15; T16 m16; T17 m17; T18 m18;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    struct vector19
      : ::boost::fusion::vector_data19<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector19<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18
            >
        >
    {
        typedef ::boost::fusion::vector19<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18
        > this_type;
        typedef ::boost::fusion::vector_data19<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18
        > base_type;
        typedef ::boost::mpl::vector19<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<19> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector19()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector19(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16 , typename ::boost::fusion::detail::call_param<T17 >::type arg17 , typename ::boost::fusion::detail::call_param<T18 >::type arg18
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17 , arg18)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector19(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17 , U18 && arg18) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12) , ::std::forward<U13>( arg13) , ::std::forward<U14>( arg14) , ::std::forward<U15>( arg15) , ::std::forward<U16>( arg16) , ::std::forward<U17>( arg17) , ::std::forward<U18>( arg18))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector19(vector19&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector19(vector19 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector19&
        operator=(vector19 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector19&
        operator=(vector19&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12); this->m13 = ::std ::forward<T13>(vec.m13); this->m14 = ::std ::forward<T14>(vec.m14); this->m15 = ::std ::forward<T15>(vec.m15); this->m16 = ::std ::forward<T16>(vec.m16); this->m17 = ::std ::forward<T17>(vec.m17); this->m18 = ::std ::forward<T18>(vec.m18);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector19(
            ::boost::fusion::vector19<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12 , vec.m13 , vec.m14 , vec.m15 , vec.m16 , vec.m17 , vec.m18)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector19(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector19(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector19&
        operator=(
            ::boost::fusion::vector19<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16; this->m17 = vec.m17; this->m18 = vec.m18;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16); typedef typename ::boost::fusion::result_of::next< 
            I17 
        >::type I18; 
        I18 i18 = ::boost::fusion 
        ::next(i17);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12; this->m13 = *i13; this->m14 = *i14; this->m15 = *i15; this->m16 = *i16; this->m17 = *i17; this->m18 = *i18;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T13>::type 
# else 
        typename ::std::add_lvalue_reference<T13>::type 
# endif 
        at_impl(::boost::mpl::int_< 13>) 
        { 
            return this->m13; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T13>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T13>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 13>) const 
        { 
            return this->m13; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T14>::type 
# else 
        typename ::std::add_lvalue_reference<T14>::type 
# endif 
        at_impl(::boost::mpl::int_< 14>) 
        { 
            return this->m14; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T14>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T14>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 14>) const 
        { 
            return this->m14; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T15>::type 
# else 
        typename ::std::add_lvalue_reference<T15>::type 
# endif 
        at_impl(::boost::mpl::int_< 15>) 
        { 
            return this->m15; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T15>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T15>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 15>) const 
        { 
            return this->m15; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T16>::type 
# else 
        typename ::std::add_lvalue_reference<T16>::type 
# endif 
        at_impl(::boost::mpl::int_< 16>) 
        { 
            return this->m16; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T16>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T16>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 16>) const 
        { 
            return this->m16; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T17>::type 
# else 
        typename ::std::add_lvalue_reference<T17>::type 
# endif 
        at_impl(::boost::mpl::int_< 17>) 
        { 
            return this->m17; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T17>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T17>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 17>) const 
        { 
            return this->m17; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T18>::type 
# else 
        typename ::std::add_lvalue_reference<T18>::type 
# endif 
        at_impl(::boost::mpl::int_< 18>) 
        { 
            return this->m18; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T18>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T18>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 18>) const 
        { 
            return this->m18; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct vector_data20
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data20() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9() , m10() , m11() , m12() , m13() , m14() , m15() , m16() , m17() , m18() , m19()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data20(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17 , U18 && arg18 , U19 && arg19
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<U0, T0>
# else
                    ::std::is_convertible<U0, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9)) , m10(::std::forward<U10>( arg10)) , m11(::std::forward<U11>( arg11)) , m12(::std::forward<U12>( arg12)) , m13(::std::forward<U13>( arg13)) , m14(::std::forward<U14>( arg14)) , m15(::std::forward<U15>( arg15)) , m16(::std::forward<U16>( arg16)) , m17(::std::forward<U17>( arg17)) , m18(::std::forward<U18>( arg18)) , m19(::std::forward<U19>( arg19))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data20(vector_data20&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9)) , m10(::std::forward<T10>( other.m10)) , m11(::std::forward<T11>( other.m11)) , m12(::std::forward<T12>( other.m12)) , m13(::std::forward<T13>( other.m13)) , m14(::std::forward<T14>( other.m14)) , m15(::std::forward<T15>( other.m15)) , m16(::std::forward<T16>( other.m16)) , m17(::std::forward<T17>( other.m17)) , m18(::std::forward<T18>( other.m18)) , m19(::std::forward<T19>( other.m19))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data20(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16 , typename ::boost::fusion::detail::call_param<T17 >::type arg17 , typename ::boost::fusion::detail::call_param<T18 >::type arg18 , typename ::boost::fusion::detail::call_param<T19 >::type arg19
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9) , m10(arg10) , m11(arg11) , m12(arg12) , m13(arg13) , m14(arg14) , m15(arg15) , m16(arg16) , m17(arg17) , m18(arg18) , m19(arg19)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data20(
            vector_data20 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9) , m10(other.m10) , m11(other.m11) , m12(other.m12) , m13(other.m13) , m14(other.m14) , m15(other.m15) , m16(other.m16) , m17(other.m17) , m18(other.m18) , m19(other.m19)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data20&
        operator=(vector_data20 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16; this->m17 = vec.m17; this->m18 = vec.m18; this->m19 = vec.m19;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data20
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16); typedef typename ::boost::fusion::result_of::next< 
            I17 
        >::type I18; 
        I18 i18 = ::boost::fusion 
        ::next(i17); typedef typename ::boost::fusion::result_of::next< 
            I18 
        >::type I19; 
        I19 i19 = ::boost::fusion 
        ::next(i18);
            return vector_data20(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16 , *i17 , *i18 , *i19);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data20
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16); typedef typename ::boost::fusion::result_of::next< 
            I17 
        >::type I18; 
        I18 i18 = ::boost::fusion 
        ::next(i17); typedef typename ::boost::fusion::result_of::next< 
            I18 
        >::type I19; 
        I19 i19 = ::boost::fusion 
        ::next(i18);
            return vector_data20(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9 , *i10 , *i11 , *i12 , *i13 , *i14 , *i15 , *i16 , *i17 , *i18 , *i19);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9; T10 m10; T11 m11; T12 m12; T13 m13; T14 m14; T15 m15; T16 m16; T17 m17; T18 m18; T19 m19;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct vector20
      : ::boost::fusion::vector_data20<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector20<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19
            >
        >
    {
        typedef ::boost::fusion::vector20<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19
        > this_type;
        typedef ::boost::fusion::vector_data20<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19
        > base_type;
        typedef ::boost::mpl::vector20<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<20> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector20()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector20(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9 , typename ::boost::fusion::detail::call_param<T10 >::type arg10 , typename ::boost::fusion::detail::call_param<T11 >::type arg11 , typename ::boost::fusion::detail::call_param<T12 >::type arg12 , typename ::boost::fusion::detail::call_param<T13 >::type arg13 , typename ::boost::fusion::detail::call_param<T14 >::type arg14 , typename ::boost::fusion::detail::call_param<T15 >::type arg15 , typename ::boost::fusion::detail::call_param<T16 >::type arg16 , typename ::boost::fusion::detail::call_param<T17 >::type arg17 , typename ::boost::fusion::detail::call_param<T18 >::type arg18 , typename ::boost::fusion::detail::call_param<T19 >::type arg19
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17 , arg18 , arg19)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector20(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17 , U18 && arg18 , U19 && arg19) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9) , ::std::forward<U10>( arg10) , ::std::forward<U11>( arg11) , ::std::forward<U12>( arg12) , ::std::forward<U13>( arg13) , ::std::forward<U14>( arg14) , ::std::forward<U15>( arg15) , ::std::forward<U16>( arg16) , ::std::forward<U17>( arg17) , ::std::forward<U18>( arg18) , ::std::forward<U19>( arg19))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector20(vector20&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector20(vector20 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector20&
        operator=(vector20 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector20&
        operator=(vector20&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9); this->m10 = ::std ::forward<T10>(vec.m10); this->m11 = ::std ::forward<T11>(vec.m11); this->m12 = ::std ::forward<T12>(vec.m12); this->m13 = ::std ::forward<T13>(vec.m13); this->m14 = ::std ::forward<T14>(vec.m14); this->m15 = ::std ::forward<T15>(vec.m15); this->m16 = ::std ::forward<T16>(vec.m16); this->m17 = ::std ::forward<T17>(vec.m17); this->m18 = ::std ::forward<T18>(vec.m18); this->m19 = ::std ::forward<T19>(vec.m19);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector20(
            ::boost::fusion::vector20<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9 , vec.m10 , vec.m11 , vec.m12 , vec.m13 , vec.m14 , vec.m15 , vec.m16 , vec.m17 , vec.m18 , vec.m19)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector20(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector20(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector20&
        operator=(
            ::boost::fusion::vector20<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9; this->m10 = vec.m10; this->m11 = vec.m11; this->m12 = vec.m12; this->m13 = vec.m13; this->m14 = vec.m14; this->m15 = vec.m15; this->m16 = vec.m16; this->m17 = vec.m17; this->m18 = vec.m18; this->m19 = vec.m19;
            return *this;
        }
        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::disable_if<
            typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, T0>
# else
                ::std::is_convertible<Sequence, T0>
# endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
          , this_type&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0); typedef typename ::boost::fusion::result_of::next< 
            I1 
        >::type I2; 
        I2 i2 = ::boost::fusion 
        ::next(i1); typedef typename ::boost::fusion::result_of::next< 
            I2 
        >::type I3; 
        I3 i3 = ::boost::fusion 
        ::next(i2); typedef typename ::boost::fusion::result_of::next< 
            I3 
        >::type I4; 
        I4 i4 = ::boost::fusion 
        ::next(i3); typedef typename ::boost::fusion::result_of::next< 
            I4 
        >::type I5; 
        I5 i5 = ::boost::fusion 
        ::next(i4); typedef typename ::boost::fusion::result_of::next< 
            I5 
        >::type I6; 
        I6 i6 = ::boost::fusion 
        ::next(i5); typedef typename ::boost::fusion::result_of::next< 
            I6 
        >::type I7; 
        I7 i7 = ::boost::fusion 
        ::next(i6); typedef typename ::boost::fusion::result_of::next< 
            I7 
        >::type I8; 
        I8 i8 = ::boost::fusion 
        ::next(i7); typedef typename ::boost::fusion::result_of::next< 
            I8 
        >::type I9; 
        I9 i9 = ::boost::fusion 
        ::next(i8); typedef typename ::boost::fusion::result_of::next< 
            I9 
        >::type I10; 
        I10 i10 = ::boost::fusion 
        ::next(i9); typedef typename ::boost::fusion::result_of::next< 
            I10 
        >::type I11; 
        I11 i11 = ::boost::fusion 
        ::next(i10); typedef typename ::boost::fusion::result_of::next< 
            I11 
        >::type I12; 
        I12 i12 = ::boost::fusion 
        ::next(i11); typedef typename ::boost::fusion::result_of::next< 
            I12 
        >::type I13; 
        I13 i13 = ::boost::fusion 
        ::next(i12); typedef typename ::boost::fusion::result_of::next< 
            I13 
        >::type I14; 
        I14 i14 = ::boost::fusion 
        ::next(i13); typedef typename ::boost::fusion::result_of::next< 
            I14 
        >::type I15; 
        I15 i15 = ::boost::fusion 
        ::next(i14); typedef typename ::boost::fusion::result_of::next< 
            I15 
        >::type I16; 
        I16 i16 = ::boost::fusion 
        ::next(i15); typedef typename ::boost::fusion::result_of::next< 
            I16 
        >::type I17; 
        I17 i17 = ::boost::fusion 
        ::next(i16); typedef typename ::boost::fusion::result_of::next< 
            I17 
        >::type I18; 
        I18 i18 = ::boost::fusion 
        ::next(i17); typedef typename ::boost::fusion::result_of::next< 
            I18 
        >::type I19; 
        I19 i19 = ::boost::fusion 
        ::next(i18);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9; this->m10 = *i10; this->m11 = *i11; this->m12 = *i12; this->m13 = *i13; this->m14 = *i14; this->m15 = *i15; this->m16 = *i16; this->m17 = *i17; this->m18 = *i18; this->m19 = *i19;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T0>::type 
# else 
        typename ::std::add_lvalue_reference<T0>::type 
# endif 
        at_impl(::boost::mpl::int_< 0>) 
        { 
            return this->m0; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T0>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T0>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 0>) const 
        { 
            return this->m0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->m1; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T1>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T1>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 1>) const 
        { 
            return this->m1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->m2; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T2>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T2>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 2>) const 
        { 
            return this->m2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->m3; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T3>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T3>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 3>) const 
        { 
            return this->m3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->m4; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T4>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T4>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 4>) const 
        { 
            return this->m4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->m5; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T5>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T5>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 5>) const 
        { 
            return this->m5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->m6; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T6>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T6>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 6>) const 
        { 
            return this->m6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->m7; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T7>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T7>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 7>) const 
        { 
            return this->m7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->m8; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T8>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T8>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 8>) const 
        { 
            return this->m8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->m9; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T9>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T9>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 9>) const 
        { 
            return this->m9; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T10>::type 
# else 
        typename ::std::add_lvalue_reference<T10>::type 
# endif 
        at_impl(::boost::mpl::int_< 10>) 
        { 
            return this->m10; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T10>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T10>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 10>) const 
        { 
            return this->m10; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T11>::type 
# else 
        typename ::std::add_lvalue_reference<T11>::type 
# endif 
        at_impl(::boost::mpl::int_< 11>) 
        { 
            return this->m11; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T11>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T11>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 11>) const 
        { 
            return this->m11; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T12>::type 
# else 
        typename ::std::add_lvalue_reference<T12>::type 
# endif 
        at_impl(::boost::mpl::int_< 12>) 
        { 
            return this->m12; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T12>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T12>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 12>) const 
        { 
            return this->m12; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T13>::type 
# else 
        typename ::std::add_lvalue_reference<T13>::type 
# endif 
        at_impl(::boost::mpl::int_< 13>) 
        { 
            return this->m13; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T13>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T13>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 13>) const 
        { 
            return this->m13; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T14>::type 
# else 
        typename ::std::add_lvalue_reference<T14>::type 
# endif 
        at_impl(::boost::mpl::int_< 14>) 
        { 
            return this->m14; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T14>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T14>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 14>) const 
        { 
            return this->m14; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T15>::type 
# else 
        typename ::std::add_lvalue_reference<T15>::type 
# endif 
        at_impl(::boost::mpl::int_< 15>) 
        { 
            return this->m15; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T15>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T15>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 15>) const 
        { 
            return this->m15; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T16>::type 
# else 
        typename ::std::add_lvalue_reference<T16>::type 
# endif 
        at_impl(::boost::mpl::int_< 16>) 
        { 
            return this->m16; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T16>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T16>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 16>) const 
        { 
            return this->m16; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T17>::type 
# else 
        typename ::std::add_lvalue_reference<T17>::type 
# endif 
        at_impl(::boost::mpl::int_< 17>) 
        { 
            return this->m17; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T17>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T17>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 17>) const 
        { 
            return this->m17; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T18>::type 
# else 
        typename ::std::add_lvalue_reference<T18>::type 
# endif 
        at_impl(::boost::mpl::int_< 18>) 
        { 
            return this->m18; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T18>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T18>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 18>) const 
        { 
            return this->m18; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T19>::type 
# else 
        typename ::std::add_lvalue_reference<T19>::type 
# endif 
        at_impl(::boost::mpl::int_< 19>) 
        { 
            return this->m19; 
        } 
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference< 
            typename ::boost::add_const<T19>::type 
# else 
        typename ::std::add_lvalue_reference< 
            typename ::std::add_const<T19>::type 
# endif 
        >::type 
        at_impl(::boost::mpl::int_< 19>) const 
        { 
            return this->m19; 
        }
        template <typename I>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
# else
        typename ::std::add_lvalue_reference<
# endif
            typename ::boost::mpl::at<types, I>::type
        >::type
        at_impl(I)
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
        template <typename I>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<
# else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<
# endif
                typename ::boost::mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I) const
        {
            return this->at_impl(::boost::mpl::int_<I::value>());
        }
    };
}}
