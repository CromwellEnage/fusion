/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ERASE_07232005_0534)
#define FUSION_ERASE_07232005_0534

#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/iterator/mpl/convert_iterator.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename First>
    struct compute_erase_last
    {
        typedef typename ::boost::fusion
        ::result_of::end<Sequence>::type seq_last_type;
        typedef typename ::boost::fusion
        ::convert_iterator<First>::type first_type;
        typedef typename ::boost::mpl::if_<
            ::boost::fusion::result_of::equal_to<first_type, seq_last_type>
          , first_type
          , typename ::boost::fusion::result_of::next<first_type>::type
        >::type type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const& first, ::boost::mpl::false_)
        {
            return ::boost::fusion::next(
                ::boost::fusion::convert_iterator<First>::call(first)
            );
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const& first, ::boost::mpl::true_)
        {
            return ::boost::fusion::convert_iterator<First>::call(first);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static type call(First const& first)
        {
            return ::boost::fusion::detail
            ::compute_erase_last<Sequence, First>::call(
                first
              , ::boost::fusion::result_of
                ::equal_to<first_type, seq_last_type>()
            );
        }
    };
}}}

#include <boost/fusion/view/joint_view/joint_view.hpp>
#include <boost/fusion/view/iterator_range/iterator_range.hpp>
#include <boost/fusion/support/use_default.hpp>
#include <boost/fusion/support/detail/use_default_help.hpp>
#include <boost/static_assert.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <
        typename Sequence
      , typename First
      , typename Last = ::boost::fusion::result_of::use_default
    >
    struct erase
    {
        typedef typename ::boost::fusion::result_of
        ::begin<Sequence>::type seq_first_type;
        typedef typename ::boost::fusion::result_of
        ::end<Sequence>::type seq_last_type;
        BOOST_STATIC_ASSERT((
            !::boost::fusion::result_of
            ::equal_to<seq_first_type, seq_last_type>::value
        ));

        typedef First FirstType;
        typedef typename ::boost::fusion::detail::use_default_help<
            Last 
          , typename ::boost::fusion::detail
            ::compute_erase_last<Sequence, First>::type
        >::type LastType;

        typedef typename ::boost::fusion
        ::convert_iterator<FirstType>::type first_type;
        typedef typename ::boost::fusion
        ::convert_iterator<LastType>::type last_type;
        typedef ::boost::fusion
        ::iterator_range<seq_first_type, first_type> left_type;
        typedef ::boost::fusion
        ::iterator_range<last_type, seq_last_type> right_type;
        typedef ::boost::fusion::joint_view<left_type, right_type> type;
    };
}}}

namespace boost { namespace fusion
{
    template <typename Sequence, typename First, typename Last>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::erase<Sequence const, First, Last>::type
    erase(Sequence const& seq, First const& first, Last const& last)
    {
        typedef ::boost::fusion::result_of
        ::erase<Sequence const, First, Last> result_of;
        typedef typename result_of::left_type left_type;
        typedef typename result_of::right_type right_type;
        typedef typename result_of::type result_type;

        left_type left(::boost::fusion::begin(seq), first);
        right_type right(last, ::boost::fusion::end(seq));
        return result_type(left, right);
    }
}}

#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence, typename First>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::lazy_enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , typename ::boost::fusion::result_of::erase<Sequence const, First>
    >::type
    erase(Sequence const& seq, First const& first)
    {
        typedef ::boost::fusion::result_of
        ::erase<Sequence const, First> result_of;
        typedef typename result_of::left_type left_type;
        typedef typename result_of::right_type right_type;
        typedef typename result_of::type result_type;

        left_type left(
            ::boost::fusion::begin(seq)
          , ::boost::fusion::convert_iterator<First>::call(first)
        );
        right_type right(
            ::boost::fusion::detail
            ::compute_erase_last<Sequence const, First>::call(first)
          , ::boost::fusion::end(seq)
        );
        return result_type(left, right);
    }
}}

#endif  // include guard

