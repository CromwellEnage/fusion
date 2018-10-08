/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SWAP_20070501_1956)
#define BOOST_FUSION_SWAP_20070501_1956

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/core/enable_if.hpp>
#include <boost/mpl/and.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Seq1, typename Seq2>
    struct swap :
        ::boost::enable_if<
            ::boost::mpl::and_<
                ::boost::fusion::traits::is_sequence<Seq1>
              , ::boost::fusion::traits::is_sequence<Seq2>
            >
        >
    {
    };
}}}

#include <boost/fusion/sequence/intrinsic/front.hpp>
#include <boost/fusion/sequence/intrinsic/back.hpp>
#include <boost/fusion/support/config.hpp>
#include <algorithm>

namespace boost { namespace fusion { namespace detail
{
    struct swap
    {
        template <typename Elem>
        struct result
        {
            typedef void type;
        };

        template <typename Elem>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        void operator()(Elem const& e) const
        {
            using ::std::swap;
            swap(::boost::fusion::front(e), ::boost::fusion::back(e));
        }
    };
}}}

#include <boost/fusion/container/list/list.hpp>
#include <boost/fusion/view/zip_view.hpp>
#include <boost/fusion/algorithm/iteration/for_each.hpp>

namespace boost { namespace fusion
{
    template <typename Seq1, typename Seq2>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::swap<Seq1, Seq2>::type
    swap(Seq1& lhs, Seq2& rhs)
    {
        typedef ::boost::fusion::list<Seq1&, Seq2&> references;
        ::boost::fusion::for_each(
            ::boost::fusion::zip_view<references>(references(lhs, rhs))
          , ::boost::fusion::detail::swap()
        );
    }
}}

#endif  // include guard

