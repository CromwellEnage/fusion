/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2007 Dan Marsden
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/
#if BOOST_WORKAROUND (BOOST_MSVC, < 1500)
#define BOOST_FUSION_FOLD_IMPL_ENABLER(T) void
#else
#define BOOST_FUSION_FOLD_IMPL_ENABLER(T) typename T::type
#endif
namespace boost { namespace fusion
{
    namespace detail
    {
        template <
            int SeqSize
          , typename It
          , typename State
          , typename F
          , typename = void
#if BOOST_WORKAROUND (BOOST_MSVC, < 1500)
          , bool = (SeqSize == 0)
#endif
        >
        struct result_of_it_fold
        {
        };

        template <typename It, typename State, typename F>
        struct result_of_it_fold<
            0
          , It
          , State
          , F
          , typename ::boost::enable_if_has_type<
                BOOST_FUSION_FOLD_IMPL_ENABLER(State)
            >::type
#if BOOST_WORKAROUND (BOOST_MSVC, < 1500)
          , true
#endif
        >
        {
            typedef typename State::type type;
        };

        template <int SeqSize, typename It, typename State, typename F>
        struct result_of_it_fold<
            SeqSize
          , It
          , State
          , F
          , typename ::boost::enable_if_has_type<
#if BOOST_WORKAROUND (BOOST_MSVC, >= 1500)
                typename ::boost::disable_if_c<
                    (SeqSize == 0)
                  , State
                >::type::type
#else
                BOOST_FUSION_FOLD_IMPL_ENABLER(State)
#endif
            >::type
#if BOOST_WORKAROUND (BOOST_MSVC, < 1500)
          , false
#endif
        > : ::boost::fusion::detail::result_of_it_fold<
                (SeqSize - 1)
              , typename ::boost::fusion::result_of::next<It>::type
              , ::boost::result_of<
                    F(
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                        typename ::boost
#else
                        typename ::std
#endif
                        ::add_lvalue_reference<typename State::type>::type
                      , typename ::boost::fusion::result_of
                        ::deref<It const>::type
                    )
                >
              , F
            >
        {
        };

        template <typename It, typename State, typename F>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        inline typename ::boost::fusion::detail
        ::result_of_it_fold<0, It, State, F>::type
        it_fold(
            ::boost::mpl::int_<0>
          , It const&
          , typename State::type state
          , F&
        )
        {
            return state;
        }

        template <typename It, typename State, typename F, int SeqSize>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        inline typename ::boost::lazy_enable_if_c<
            (SeqSize != 0)
          , ::boost::fusion::detail::result_of_it_fold<
                SeqSize
              , It
              , State
              , F
            >
        >::type
        it_fold(
            ::boost::mpl::int_<SeqSize>
          , It const& it
          , typename State::type state
          , F& f
        )
        {
            return ::boost::fusion::detail::it_fold<
                typename ::boost::fusion::result_of::next<It>::type
              , ::boost::result_of<
                    F(
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                        typename ::boost
#else
                        typename ::std
#endif
                        ::add_lvalue_reference<typename State::type>::type
                      , typename ::boost::fusion::result_of
                        ::deref<It const>::type
                    )
                >
              , F
            >(
                ::boost::mpl::int_<SeqSize-1>()
              , ::boost::fusion::next(it)
              , f(state, ::boost::fusion::deref(it))
              , f
            );
        }

        template <
            typename Seq
          , typename State
          , typename F
          , bool = ::boost::fusion::traits::is_sequence<Seq>::value
          , bool = ::boost::fusion::traits::is_segmented<Seq>::value
        >
        struct result_of_fold
        {
        };

        template <typename Seq, typename State, typename F>
        struct result_of_fold<Seq, State, F, true, false>
          : ::boost::fusion::detail::result_of_it_fold<
                ::boost::fusion::result_of::size<Seq>::value
              , typename ::boost::fusion::result_of::begin<Seq>::type
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
              , ::boost::add_lvalue_reference<State>
#else
              , ::std::add_lvalue_reference<State>
#endif
              , F
            >
        {
        };

        template <typename Seq, typename State, typename F>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        inline typename ::boost::fusion::detail
        ::result_of_fold<Seq, State, F>::type
        fold(Seq& seq, State& state, F& f)
        {
            return ::boost::fusion::detail::it_fold<
                typename result_of::begin<Seq>::type
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
              , ::boost::add_lvalue_reference<State>
#else
              , ::std::add_lvalue_reference<State>
#endif
              , F
            >(
                typename ::boost::fusion::result_of::size<Seq>::type()
              , ::boost::fusion::begin(seq)
              , state
              , f
            );
        }
    }

    namespace result_of
    {
        template <typename Seq, typename State, typename F>
        struct fold :
            ::boost::fusion::detail::result_of_fold<Seq, State, F>
        {
        };
    }

    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::fold<Seq, State const, F>::type
    fold(Seq& seq, State const& state, F f)
    {
        return ::boost::fusion::detail
        ::fold<Seq, State const, F>(seq, state, f);
    }

    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::fold<Seq const, State const, F>::type
    fold(Seq const& seq, State const& state, F f)
    {
        return ::boost::fusion::detail
        ::fold<Seq const, State const, F>(seq, state, f);
    }

    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::fold<Seq, State, F>::type
    fold(Seq& seq, State& state, F f)
    {
        return ::boost::fusion::detail
        ::fold<Seq, State, F>(seq, state, f);
    }

    template <typename Seq, typename State, typename F>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::fold<Seq const, State, F>::type
    fold(Seq const& seq, State& state, F f)
    {
        return ::boost::fusion::detail
        ::fold<Seq const, State, F>(seq, state, f);
    }
}}

