/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_LESS_EQUAL_05052005_1141)
#define FUSION_LESS_EQUAL_05052005_1141

#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/support/as_const.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Seq1, typename Seq2>
    struct sequence_less_equal
    {
        typedef typename ::boost::fusion::result_of
        ::end<Seq1>::type end1_type;
        typedef typename ::boost::fusion::result_of
        ::end<Seq2>::type end2_type;

        template <typename I1, typename I2>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static bool call(I1 const&, I2 const&, ::boost::mpl::true_)
        {
            return true;
        }

        template <typename I1, typename I2>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static bool call(I1 const& a, I2 const& b, ::boost::mpl::false_)
        {
            return (
                ::boost::fusion::extension::as_const(*a) <=
                ::boost::fusion::extension::as_const(*b)
            ) && (
                !(
                    ::boost::fusion::extension::as_const(*b) <=
                    ::boost::fusion::extension::as_const(*a)
                ) || (
                    ::boost::fusion::detail::sequence_less_equal<Seq1, Seq2>
                    ::call(::boost::fusion::next(a), ::boost::fusion::next(b))
                )
            );
        }

        template <typename I1, typename I2>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        static bool call(I1 const& a, I2 const& b)
        {
            return ::boost::fusion::detail::sequence_less_equal<Seq1, Seq2>
            ::template call(
                a, b, typename ::boost::fusion::result_of
                ::equal_to<I1, end1_type>::type()
            );
        }
    };
}}}

#endif  // include guard

