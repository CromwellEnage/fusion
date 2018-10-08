/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2007 Dan Marsden
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_FIND_IF_05052005_1107)
#define FUSION_FIND_IF_05052005_1107

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, typename Pred>
    struct main_find_if;

    template <typename First, typename Last, typename Pred, bool>
    struct choose_find_if;

    template <typename Iter, typename Pred, int n, int unrolling>
    struct unroll_again;

    template <typename Iter, typename Pred, int n>
    struct unrolled_find_if;

    template <typename Iter, typename Pred>
    struct unrolled_find_if<Iter, Pred, 0>
    {
        typedef Iter type;
    };
}}}

#include <boost/fusion/support/config.hpp>
#include <boost/mpl/apply.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Iterator, typename Pred>
    struct apply_filter
    {
        typedef typename ::boost::mpl::apply1<Pred, Iterator>::type type;
        BOOST_STATIC_CONSTANT(int, value = type::value);
    };
}}}

#include <boost/fusion/iterator/advance.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Iter, typename Pred, int offset>
    struct apply_offset_filter
    {
        typedef typename ::boost::fusion::result_of
        ::advance_c<Iter, offset>::type Shifted;
        typedef typename ::boost::mpl::apply1<Pred, Shifted>::type type;
        BOOST_STATIC_CONSTANT(int, value = type::value);
    };
}}}

#include <boost/fusion/iterator/next.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, typename Pred>
    struct recursive_find_if :
        ::boost::fusion::detail::main_find_if<
            typename ::boost::fusion::result_of::next<First>::type
          , Last
          , Pred
        >
    {
    };
}}}

#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Iter, typename Pred>
    struct unrolled_find_if<Iter, Pred, 1> :
        ::boost::mpl::eval_if<
            ::boost::fusion::detail::apply_filter<Iter, Pred>
          , ::boost::mpl::identity<Iter>
          , ::boost::fusion::result_of::advance_c<Iter, 1>
        >
    {
    };

    template <typename Iter, typename Pred>
    struct unrolled_find_if<Iter, Pred, 2> :
        ::boost::mpl::eval_if<
            ::boost::fusion::detail::apply_filter<Iter, Pred>
          , ::boost::mpl::identity<Iter>
          , ::boost::mpl::eval_if<
                ::boost::fusion::detail::apply_offset_filter<Iter, Pred, 1>
              , ::boost::fusion::result_of::advance_c<Iter, 1>
              , ::boost::fusion::result_of::advance_c<Iter, 2>
            >
        >
    {
    };

    template <typename Iter, typename Pred>
    struct unrolled_find_if<Iter, Pred, 3> :
        ::boost::mpl::eval_if<
            ::boost::fusion::detail::apply_filter<Iter, Pred>
          , ::boost::mpl::identity<Iter>
          , ::boost::mpl::eval_if<
                ::boost::fusion::detail::apply_offset_filter<Iter, Pred, 1>
              , ::boost::fusion::result_of::advance_c<Iter, 1>
              , ::boost::mpl::eval_if<
                    ::boost::fusion::detail
                    ::apply_offset_filter<Iter, Pred, 2>
                  , ::boost::fusion::result_of::advance_c<Iter, 2>
                  , ::boost::fusion::result_of::advance_c<Iter, 3>
                >
            >
        >
    {
    };

    template <typename Iter, typename Pred, int n>
    struct unrolled_find_if :
        ::boost::mpl::eval_if<
            ::boost::fusion::detail::apply_filter<Iter, Pred>
          , ::boost::mpl::identity<Iter>
          , ::boost::mpl::eval_if<
                ::boost::fusion::detail::apply_offset_filter<Iter, Pred, 1>
              , ::boost::fusion::result_of::advance_c<Iter, 1>
              , ::boost::mpl::eval_if<
                    ::boost::fusion::detail
                    ::apply_offset_filter<Iter, Pred, 2>
                  , ::boost::fusion::result_of::advance_c<Iter, 2>
                  , ::boost::mpl::eval_if<
                        ::boost::fusion::detail
                        ::apply_offset_filter<Iter, Pred, 3>
                      , ::boost::fusion::result_of::advance_c<Iter, 3>
                      , ::boost::fusion::detail
                        ::unroll_again<Iter, Pred, n, 4>
                    >
                >
            >
        >
    {
    };

    template <typename Iter, typename Pred, int n, int unrolling>
    struct unroll_again :
        ::boost::fusion::detail::unrolled_find_if<
            typename ::boost::fusion::result_of
            ::advance_c<Iter, unrolling>::type
          , Pred
          , (n - unrolling)
        >
    {
    };
}}}

#include <boost/fusion/iterator/distance.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, typename Pred>
    struct choose_find_if<First, Last, Pred, true>
    {
        typedef typename ::boost::fusion::result_of
        ::distance<First, Last>::type N;
        typedef typename ::boost::fusion::detail
        ::unrolled_find_if<First, Pred, N::value>::type type;
    };
}}}

#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, typename Pred>
    struct main_find_if
    {
        typedef typename ::boost::mpl::if_<
            ::boost::fusion::result_of::equal_to<First, Last>
          , ::boost::mpl::true_
          , ::boost::fusion::detail::apply_filter<First, Pred>
        >::type filter;

        typedef typename ::boost::mpl::eval_if<
            filter
          , ::boost::mpl::identity<First>
          , ::boost::fusion::detail::recursive_find_if<First, Last, Pred>
        >::type type;
    };

    template <typename First, typename Last, typename Pred>
    struct choose_find_if<First, Last, Pred, false> :
        ::boost::fusion::detail::main_find_if<First, Last, Pred>
    {
    };
}}}

#include <boost/fusion/support/category_of.hpp>
#include <boost/core/enable_if.hpp>
#include <boost/mpl/lambda.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename First, typename Last, typename Pred>
    struct static_find_if
    {
        typedef typename ::boost::fusion::detail::choose_find_if<
            First
          , Last
          , typename ::boost::mpl::lambda<Pred>::type
          , ::boost::fusion::traits::is_random_access<First>::value
        >::type type;

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type recursive_call(Iterator const& iter, ::boost::mpl::true_)
        {
            return iter;
        }

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type recursive_call(Iterator const& iter, ::boost::mpl::false_)
        {
            return ::boost::fusion::detail::static_find_if<First, Last, Pred>
            ::recursive_call(::boost::fusion::next(iter));
        }

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type recursive_call(Iterator const& iter)
        {
            typedef ::boost::fusion::result_of
            ::equal_to<Iterator, type> found;
            return ::boost::fusion::detail::static_find_if<First, Last, Pred>
            ::recursive_call(iter, found());
        }

        template <typename Iterator, typename Tag>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type choose_call(Iterator const& iter, Tag)
        {
            return ::boost::fusion::detail::static_find_if<First, Last, Pred>
            ::recursive_call(iter);
        }

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::disable_if<
            ::boost::fusion::traits::is_random_access<Iterator>
          , type
        >::type
        iter_call(Iterator const& iter)
        {
            return ::boost::fusion::detail::static_find_if<First, Last, Pred>
            ::recursive_call(iter);
        }

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static typename ::boost::enable_if<
            ::boost::fusion::traits::is_random_access<Iterator>
          , type
        >::type
        iter_call(Iterator const& iter)
        {
            typedef typename ::boost::fusion::result_of
            ::distance<Iterator, type>::type N;
            return ::boost::fusion::advance<N>(iter);
        }

        template <typename Sequence>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(Sequence& seq)
        {
            return ::boost::fusion::detail::static_find_if<First, Last, Pred>
            ::iter_call(::boost::fusion::begin(seq));
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename Pred>
    struct result_of_find_if
    {
        typedef ::boost::fusion::detail::static_find_if<
            typename ::boost::fusion::result_of::begin<Sequence>::type
          , typename ::boost::fusion::result_of::end<Sequence>::type
          , Pred
        > filter;

        typedef typename filter::type type;
    };
}}}

#endif  // include guard

