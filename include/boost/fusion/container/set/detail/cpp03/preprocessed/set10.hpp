/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
namespace boost { namespace fusion
{
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct set :
        ::boost::fusion::sequence_base<
            ::boost::fusion::set<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
        >
    {
        struct category
          : ::boost::fusion::forward_traversal_tag
          , ::boost::fusion::associative_tag
        {
        };
        typedef ::boost::fusion::set_tag fusion_tag;
        
        typedef ::boost::fusion::fusion_sequence_tag tag;
        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::vector<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
        > storage_type;
        typedef typename storage_type::size size;
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set() : data()
        {
        }
        template <typename Sequence>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set(
            Sequence const& rhs
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) : data(rhs)
        {
        }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    explicit
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0
    ) : data(arg0)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1
    ) : data(arg0 , arg1)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2
    ) : data(arg0 , arg1 , arg2)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3
    ) : data(arg0 , arg1 , arg2 , arg3)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4
    ) : data(arg0 , arg1 , arg2 , arg3 , arg4)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5
    ) : data(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6
    ) : data(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7
    ) : data(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8
    ) : data(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
    {
    }
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    set(
        typename ::boost::fusion::detail::call_param<T0 >::type arg0 , typename ::boost::fusion::detail::call_param<T1 >::type arg1 , typename ::boost::fusion::detail::call_param<T2 >::type arg2 , typename ::boost::fusion::detail::call_param<T3 >::type arg3 , typename ::boost::fusion::detail::call_param<T4 >::type arg4 , typename ::boost::fusion::detail::call_param<T5 >::type arg5 , typename ::boost::fusion::detail::call_param<T6 >::type arg6 , typename ::boost::fusion::detail::call_param<T7 >::type arg7 , typename ::boost::fusion::detail::call_param<T8 >::type arg8 , typename ::boost::fusion::detail::call_param<T9 >::type arg9
    ) : data(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
    {
    }
        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set& operator=(T const& rhs)
        {
            this->data = rhs;
            return *this;
        }
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        storage_type& get_data()
        {
            return this->data;
        }
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        storage_type const& get_data() const
        {
            return this->data;
        }
     private:
        storage_type data;
    };
}}
