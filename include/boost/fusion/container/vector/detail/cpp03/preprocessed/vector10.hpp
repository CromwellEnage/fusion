/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion
{
    template <typename T0>
    struct vector_data1
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data1() :
            m0()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data1(
            U0 && arg0
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
        ) : m0(::std::forward<U0>( arg0))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data1(vector_data1&& other) :
            m0(::std::forward<T0>( other.m0))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data1(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0
        ) : m0(arg0)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data1(
            vector_data1 const& other
        ) : m0(other.m0)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data1&
        operator=(vector_data1 const& vec)
        {
            this->m0 = vec.m0;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data1
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            
            return vector_data1(*i0);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data1
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            
            return vector_data1(*i0);
        }
        T0 m0;
    };
    template <typename T0>
    struct vector1
      : ::boost::fusion::vector_data1<
            T0
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector1<
                T0
            >
        >
    {
        typedef ::boost::fusion::vector1<
            T0
        > this_type;
        typedef ::boost::fusion::vector_data1<
            T0
        > base_type;
        typedef ::boost::mpl::vector1<
            T0
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<1> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector1()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        explicit
        vector1(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0
        ) : base_type(arg0)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        explicit vector1(
            U0&& _0
          , typename ::boost::enable_if<
                typename ::boost::mpl::if_<
                    ::std::is_convertible<U0, T0>
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(::std::forward<U0>( _0))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector1(vector1&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector1(vector1 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector1&
        operator=(vector1 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector1&
        operator=(vector1&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0);
            return *this;
        }
# endif
        template <typename U0>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector1(
            ::boost::fusion::vector1<
                U0
            > const& vec
        ) : base_type(vec.m0)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector1(
            Sequence const& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
          , typename ::boost::disable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Sequence, T0>
# else
                    ::std::is_convertible<Sequence, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector1(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
          , typename ::boost::disable_if<
                typename ::boost::mpl::if_<
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_convertible<Sequence, T0>
# else
                    ::std::is_convertible<Sequence, T0>
# endif
                  , ::boost::mpl::true_
                  , ::boost::mpl::false_
                >::type
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector1&
        operator=(
            ::boost::fusion::vector1<
                U0
            > const& vec
        )
        {
            this->m0 = vec.m0;
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
            
            this->m0 = *i0;
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
            return this->T0; 
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
            return this->T0; 
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
    template <typename T0 , typename T1>
    struct vector_data2
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data2() :
            m0() , m1()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data2(
            U0 && arg0 , U1 && arg1
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data2(vector_data2&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data2(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1
        ) : m0(arg0) , m1(arg1)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data2(
            vector_data2 const& other
        ) : m0(other.m0) , m1(other.m1)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data2&
        operator=(vector_data2 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data2
        init_from_sequence(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence const>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0);
            return vector_data2(*i0 , *i1);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data2
        init_from_sequence(Sequence& seq)
        {
            typedef typename ::boost::fusion::result_of
            ::begin<Sequence>::type I0;
            I0 i0 = ::boost::fusion::begin(seq);
            typedef typename ::boost::fusion::result_of::next< 
            I0 
        >::type I1; 
        I1 i1 = ::boost::fusion 
        ::next(i0);
            return vector_data2(*i0 , *i1);
        }
        T0 m0; T1 m1;
    };
    template <typename T0 , typename T1>
    struct vector2
      : ::boost::fusion::vector_data2<
            T0 , T1
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector2<
                T0 , T1
            >
        >
    {
        typedef ::boost::fusion::vector2<
            T0 , T1
        > this_type;
        typedef ::boost::fusion::vector_data2<
            T0 , T1
        > base_type;
        typedef ::boost::mpl::vector2<
            T0 , T1
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<2> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector2()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector2(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1
        ) : base_type(arg0 , arg1)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector2(U0 && arg0 , U1 && arg1) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector2(vector2&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector2(vector2 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector2&
        operator=(vector2 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector2&
        operator=(vector2&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1);
            return *this;
        }
# endif
        template <typename U0 , typename U1>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector2(
            ::boost::fusion::vector2<
                U0 , U1
            > const& vec
        ) : base_type(vec.m0 , vec.m1)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector2(
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
        vector2(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector2&
        operator=(
            ::boost::fusion::vector2<
                U0 , U1
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1;
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
        ::next(i0);
            this->m0 = *i0; this->m1 = *i1;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
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
    template <typename T0 , typename T1 , typename T2>
    struct vector_data3
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data3() :
            m0() , m1() , m2()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data3(
            U0 && arg0 , U1 && arg1 , U2 && arg2
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data3(vector_data3&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data3(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2
        ) : m0(arg0) , m1(arg1) , m2(arg2)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data3(
            vector_data3 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data3&
        operator=(vector_data3 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data3
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
        ::next(i1);
            return vector_data3(*i0 , *i1 , *i2);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data3
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
        ::next(i1);
            return vector_data3(*i0 , *i1 , *i2);
        }
        T0 m0; T1 m1; T2 m2;
    };
    template <typename T0 , typename T1 , typename T2>
    struct vector3
      : ::boost::fusion::vector_data3<
            T0 , T1 , T2
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector3<
                T0 , T1 , T2
            >
        >
    {
        typedef ::boost::fusion::vector3<
            T0 , T1 , T2
        > this_type;
        typedef ::boost::fusion::vector_data3<
            T0 , T1 , T2
        > base_type;
        typedef ::boost::mpl::vector3<
            T0 , T1 , T2
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<3> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector3()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector3(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2
        ) : base_type(arg0 , arg1 , arg2)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector3(U0 && arg0 , U1 && arg1 , U2 && arg2) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector3(vector3&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector3(vector3 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector3&
        operator=(vector3 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector3&
        operator=(vector3&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector3(
            ::boost::fusion::vector3<
                U0 , U1 , U2
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector3(
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
        vector3(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector3&
        operator=(
            ::boost::fusion::vector3<
                U0 , U1 , U2
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2;
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
        ::next(i1);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
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
    template <typename T0 , typename T1 , typename T2 , typename T3>
    struct vector_data4
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data4() :
            m0() , m1() , m2() , m3()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data4(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data4(vector_data4&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data4(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data4(
            vector_data4 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data4&
        operator=(vector_data4 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data4
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
        ::next(i2);
            return vector_data4(*i0 , *i1 , *i2 , *i3);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data4
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
        ::next(i2);
            return vector_data4(*i0 , *i1 , *i2 , *i3);
        }
        T0 m0; T1 m1; T2 m2; T3 m3;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3>
    struct vector4
      : ::boost::fusion::vector_data4<
            T0 , T1 , T2 , T3
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector4<
                T0 , T1 , T2 , T3
            >
        >
    {
        typedef ::boost::fusion::vector4<
            T0 , T1 , T2 , T3
        > this_type;
        typedef ::boost::fusion::vector_data4<
            T0 , T1 , T2 , T3
        > base_type;
        typedef ::boost::mpl::vector4<
            T0 , T1 , T2 , T3
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<4> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector4()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector4(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3
        ) : base_type(arg0 , arg1 , arg2 , arg3)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector4(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector4(vector4&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector4(vector4 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector4&
        operator=(vector4 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector4&
        operator=(vector4&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector4(
            ::boost::fusion::vector4<
                U0 , U1 , U2 , U3
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector4(
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
        vector4(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector4&
        operator=(
            ::boost::fusion::vector4<
                U0 , U1 , U2 , U3
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3;
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
        ::next(i2);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->T3; 
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
            return this->T3; 
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
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    struct vector_data5
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data5() :
            m0() , m1() , m2() , m3() , m4()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data5(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data5(vector_data5&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data5(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data5(
            vector_data5 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data5&
        operator=(vector_data5 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data5
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
        ::next(i3);
            return vector_data5(*i0 , *i1 , *i2 , *i3 , *i4);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data5
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
        ::next(i3);
            return vector_data5(*i0 , *i1 , *i2 , *i3 , *i4);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    struct vector5
      : ::boost::fusion::vector_data5<
            T0 , T1 , T2 , T3 , T4
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector5<
                T0 , T1 , T2 , T3 , T4
            >
        >
    {
        typedef ::boost::fusion::vector5<
            T0 , T1 , T2 , T3 , T4
        > this_type;
        typedef ::boost::fusion::vector_data5<
            T0 , T1 , T2 , T3 , T4
        > base_type;
        typedef ::boost::mpl::vector5<
            T0 , T1 , T2 , T3 , T4
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<5> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector5()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector5(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector5(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector5(vector5&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector5(vector5 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector5&
        operator=(vector5 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector5&
        operator=(vector5&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector5(
            ::boost::fusion::vector5<
                U0 , U1 , U2 , U3 , U4
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector5(
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
        vector5(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector5&
        operator=(
            ::boost::fusion::vector5<
                U0 , U1 , U2 , U3 , U4
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4;
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
        ::next(i3);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->T3; 
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
            return this->T3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->T4; 
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
            return this->T4; 
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
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    struct vector_data6
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data6() :
            m0() , m1() , m2() , m3() , m4() , m5()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data6(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data6(vector_data6&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data6(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data6(
            vector_data6 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data6&
        operator=(vector_data6 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data6
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
        ::next(i4);
            return vector_data6(*i0 , *i1 , *i2 , *i3 , *i4 , *i5);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data6
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
        ::next(i4);
            return vector_data6(*i0 , *i1 , *i2 , *i3 , *i4 , *i5);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    struct vector6
      : ::boost::fusion::vector_data6<
            T0 , T1 , T2 , T3 , T4 , T5
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector6<
                T0 , T1 , T2 , T3 , T4 , T5
            >
        >
    {
        typedef ::boost::fusion::vector6<
            T0 , T1 , T2 , T3 , T4 , T5
        > this_type;
        typedef ::boost::fusion::vector_data6<
            T0 , T1 , T2 , T3 , T4 , T5
        > base_type;
        typedef ::boost::mpl::vector6<
            T0 , T1 , T2 , T3 , T4 , T5
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<6> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector6()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector6(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector6(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector6(vector6&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector6(vector6 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector6&
        operator=(vector6 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector6&
        operator=(vector6&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector6(
            ::boost::fusion::vector6<
                U0 , U1 , U2 , U3 , U4 , U5
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector6(
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
        vector6(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector6&
        operator=(
            ::boost::fusion::vector6<
                U0 , U1 , U2 , U3 , U4 , U5
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5;
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
        ::next(i4);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->T3; 
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
            return this->T3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->T4; 
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
            return this->T4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->T5; 
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
            return this->T5; 
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
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    struct vector_data7
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data7() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data7(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data7(vector_data7&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data7(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data7(
            vector_data7 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data7&
        operator=(vector_data7 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data7
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
        ::next(i5);
            return vector_data7(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data7
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
        ::next(i5);
            return vector_data7(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    struct vector7
      : ::boost::fusion::vector_data7<
            T0 , T1 , T2 , T3 , T4 , T5 , T6
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector7<
                T0 , T1 , T2 , T3 , T4 , T5 , T6
            >
        >
    {
        typedef ::boost::fusion::vector7<
            T0 , T1 , T2 , T3 , T4 , T5 , T6
        > this_type;
        typedef ::boost::fusion::vector_data7<
            T0 , T1 , T2 , T3 , T4 , T5 , T6
        > base_type;
        typedef ::boost::mpl::vector7<
            T0 , T1 , T2 , T3 , T4 , T5 , T6
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<7> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector7()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector7(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector7(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector7(vector7&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector7(vector7 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector7&
        operator=(vector7 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector7&
        operator=(vector7&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector7(
            ::boost::fusion::vector7<
                U0 , U1 , U2 , U3 , U4 , U5 , U6
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector7(
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
        vector7(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector7&
        operator=(
            ::boost::fusion::vector7<
                U0 , U1 , U2 , U3 , U4 , U5 , U6
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6;
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
        ::next(i5);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->T3; 
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
            return this->T3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->T4; 
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
            return this->T4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->T5; 
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
            return this->T5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->T6; 
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
            return this->T6; 
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
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    struct vector_data8
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data8() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data8(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data8(vector_data8&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data8(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data8(
            vector_data8 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data8&
        operator=(vector_data8 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data8
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
        ::next(i6);
            return vector_data8(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data8
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
        ::next(i6);
            return vector_data8(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    struct vector8
      : ::boost::fusion::vector_data8<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector8<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
            >
        >
    {
        typedef ::boost::fusion::vector8<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
        > this_type;
        typedef ::boost::fusion::vector_data8<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
        > base_type;
        typedef ::boost::mpl::vector8<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<8> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector8()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector8(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector8(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector8(vector8&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector8(vector8 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector8&
        operator=(vector8 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector8&
        operator=(vector8&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector8(
            ::boost::fusion::vector8<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector8(
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
        vector8(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector8&
        operator=(
            ::boost::fusion::vector8<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7;
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
        ::next(i6);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->T3; 
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
            return this->T3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->T4; 
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
            return this->T4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->T5; 
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
            return this->T5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->T6; 
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
            return this->T6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->T7; 
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
            return this->T7; 
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
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    struct vector_data9
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data9() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data9(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data9(vector_data9&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data9(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data9(
            vector_data9 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data9&
        operator=(vector_data9 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data9
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
        ::next(i7);
            return vector_data9(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data9
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
        ::next(i7);
            return vector_data9(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    struct vector9
      : ::boost::fusion::vector_data9<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector9<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
            >
        >
    {
        typedef ::boost::fusion::vector9<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
        > this_type;
        typedef ::boost::fusion::vector_data9<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
        > base_type;
        typedef ::boost::mpl::vector9<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<9> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector9()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector9(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector9(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector9(vector9&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector9(vector9 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector9&
        operator=(vector9 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector9&
        operator=(vector9&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector9(
            ::boost::fusion::vector9<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector9(
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
        vector9(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector9&
        operator=(
            ::boost::fusion::vector9<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8;
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
        ::next(i7);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->T3; 
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
            return this->T3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->T4; 
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
            return this->T4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->T5; 
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
            return this->T5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->T6; 
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
            return this->T6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->T7; 
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
            return this->T7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->T8; 
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
            return this->T8; 
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
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct vector_data10
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data10() :
            m0() , m1() , m2() , m3() , m4() , m5() , m6() , m7() , m8() , m9()
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data10(
            U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9
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
        ) : m0(::std::forward<U0>( arg0)) , m1(::std::forward<U1>( arg1)) , m2(::std::forward<U2>( arg2)) , m3(::std::forward<U3>( arg3)) , m4(::std::forward<U4>( arg4)) , m5(::std::forward<U5>( arg5)) , m6(::std::forward<U6>( arg6)) , m7(::std::forward<U7>( arg7)) , m8(::std::forward<U8>( arg8)) , m9(::std::forward<U9>( arg9))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data10(vector_data10&& other) :
            m0(::std::forward<T0>( other.m0)) , m1(::std::forward<T1>( other.m1)) , m2(::std::forward<T2>( other.m2)) , m3(::std::forward<T3>( other.m3)) , m4(::std::forward<T4>( other.m4)) , m5(::std::forward<T5>( other.m5)) , m6(::std::forward<T6>( other.m6)) , m7(::std::forward<T7>( other.m7)) , m8(::std::forward<T8>( other.m8)) , m9(::std::forward<T9>( other.m9))
        {
        }
# endif
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector_data10(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9
        ) : m0(arg0) , m1(arg1) , m2(arg2) , m3(arg3) , m4(arg4) , m5(arg5) , m6(arg6) , m7(arg7) , m8(arg8) , m9(arg9)
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data10(
            vector_data10 const& other
        ) : m0(other.m0) , m1(other.m1) , m2(other.m2) , m3(other.m3) , m4(other.m4) , m5(other.m5) , m6(other.m6) , m7(other.m7) , m8(other.m8) , m9(other.m9)
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_data10&
        operator=(vector_data10 const& vec)
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9;
            return *this;
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data10
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
        ::next(i8);
            return vector_data10(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9);
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        static vector_data10
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
        ::next(i8);
            return vector_data10(*i0 , *i1 , *i2 , *i3 , *i4 , *i5 , *i6 , *i7 , *i8 , *i9);
        }
        T0 m0; T1 m1; T2 m2; T3 m3; T4 m4; T5 m5; T6 m6; T7 m7; T8 m8; T9 m9;
    };
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct vector10
      : ::boost::fusion::vector_data10<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
        >
      , ::boost::fusion::sequence_base<
            ::boost::fusion::vector10<
                T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
            >
        >
    {
        typedef ::boost::fusion::vector10<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
        > this_type;
        typedef ::boost::fusion::vector_data10<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
        > base_type;
        typedef ::boost::mpl::vector10<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
        > types;
        typedef ::boost::fusion::vector_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<10> size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector10()
        {
        }
# if !defined(BOOST_CLANG)
        BOOST_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector10(
            typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9
        ) : base_type(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
        {
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector10(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9) :
            base_type(::std::forward<U0>( arg0) , ::std::forward<U1>( arg1) , ::std::forward<U2>( arg2) , ::std::forward<U3>( arg3) , ::std::forward<U4>( arg4) , ::std::forward<U5>( arg5) , ::std::forward<U6>( arg6) , ::std::forward<U7>( arg7) , ::std::forward<U8>( arg8) , ::std::forward<U9>( arg9))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector10(vector10&& rhs) :
            base_type(::std::forward<base_type>(rhs))
        {
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector10(vector10 const& rhs) :
            base_type(static_cast<base_type const&>(rhs))
        {
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector10&
        operator=(vector10 const& vec)
        {
            base_type::operator=(vec);
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector10&
        operator=(vector10&& vec)
        {
            this->m0 = ::std ::forward<T0>(vec.m0); this->m1 = ::std ::forward<T1>(vec.m1); this->m2 = ::std ::forward<T2>(vec.m2); this->m3 = ::std ::forward<T3>(vec.m3); this->m4 = ::std ::forward<T4>(vec.m4); this->m5 = ::std ::forward<T5>(vec.m5); this->m6 = ::std ::forward<T6>(vec.m6); this->m7 = ::std ::forward<T7>(vec.m7); this->m8 = ::std ::forward<T8>(vec.m8); this->m9 = ::std ::forward<T9>(vec.m9);
            return *this;
        }
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector10(
            ::boost::fusion::vector10<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9
            > const& vec
        ) : base_type(vec.m0 , vec.m1 , vec.m2 , vec.m3 , vec.m4 , vec.m5 , vec.m6 , vec.m7 , vec.m8 , vec.m9)
        {
        }
        template <typename Sequence>
# if !defined(BOOST_CLANG)
        BOOST_CXX14_CONSTEXPR
# endif
        BOOST_FUSION_GPU_ENABLED
        vector10(
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
        vector10(
            Sequence& seq
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type* = BOOST_TTI_DETAIL_NULLPTR
        ) : base_type(base_type::init_from_sequence(seq))
        {
        }
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector10&
        operator=(
            ::boost::fusion::vector10<
                U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9
            > const& vec
        )
        {
            this->m0 = vec.m0; this->m1 = vec.m1; this->m2 = vec.m2; this->m3 = vec.m3; this->m4 = vec.m4; this->m5 = vec.m5; this->m6 = vec.m6; this->m7 = vec.m7; this->m8 = vec.m8; this->m9 = vec.m9;
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
        ::next(i8);
            this->m0 = *i0; this->m1 = *i1; this->m2 = *i2; this->m3 = *i3; this->m4 = *i4; this->m5 = *i5; this->m6 = *i6; this->m7 = *i7; this->m8 = *i8; this->m9 = *i9;
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
            return this->T0; 
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
            return this->T0; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T1>::type 
# else 
        typename ::std::add_lvalue_reference<T1>::type 
# endif 
        at_impl(::boost::mpl::int_< 1>) 
        { 
            return this->T1; 
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
            return this->T1; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T2>::type 
# else 
        typename ::std::add_lvalue_reference<T2>::type 
# endif 
        at_impl(::boost::mpl::int_< 2>) 
        { 
            return this->T2; 
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
            return this->T2; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T3>::type 
# else 
        typename ::std::add_lvalue_reference<T3>::type 
# endif 
        at_impl(::boost::mpl::int_< 3>) 
        { 
            return this->T3; 
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
            return this->T3; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T4>::type 
# else 
        typename ::std::add_lvalue_reference<T4>::type 
# endif 
        at_impl(::boost::mpl::int_< 4>) 
        { 
            return this->T4; 
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
            return this->T4; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T5>::type 
# else 
        typename ::std::add_lvalue_reference<T5>::type 
# endif 
        at_impl(::boost::mpl::int_< 5>) 
        { 
            return this->T5; 
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
            return this->T5; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T6>::type 
# else 
        typename ::std::add_lvalue_reference<T6>::type 
# endif 
        at_impl(::boost::mpl::int_< 6>) 
        { 
            return this->T6; 
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
            return this->T6; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T7>::type 
# else 
        typename ::std::add_lvalue_reference<T7>::type 
# endif 
        at_impl(::boost::mpl::int_< 7>) 
        { 
            return this->T7; 
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
            return this->T7; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T8>::type 
# else 
        typename ::std::add_lvalue_reference<T8>::type 
# endif 
        at_impl(::boost::mpl::int_< 8>) 
        { 
            return this->T8; 
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
            return this->T8; 
        } BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED 
# if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) 
        typename ::boost::add_lvalue_reference<T9>::type 
# else 
        typename ::std::add_lvalue_reference<T9>::type 
# endif 
        at_impl(::boost::mpl::int_< 9>) 
        { 
            return this->T9; 
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
            return this->T9; 
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
