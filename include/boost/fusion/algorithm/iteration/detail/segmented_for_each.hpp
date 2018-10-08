/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_FOR_EACH_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_FOR_EACH_HPP_INCLUDED

#include <boost/fusion/algorithm/iteration/for_each_fwd.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Fun>
    struct segmented_for_each_fun
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit segmented_for_each_fun(Fun& f) : fun(f)
        {
        }

        Fun& fun;

        template <typename Sequence, typename State, typename Context>
        struct apply
        {
            typedef ::boost::fusion::void_ type;
            typedef ::boost::mpl::true_ continue_type;

            BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type
            call(
                Sequence& seq
              , State const&
              , Context const&
              , ::boost::fusion::detail
                ::segmented_for_each_fun<Fun> const& fun
            )
            {
                ::boost::fusion::for_each(seq, fun.fun);
                return ::boost::fusion::void_();
            }
        };
    };
}}}

#include <boost/fusion/support/segmented_fold_until.hpp>

namespace boost { namespace fusion { namespace detail
{
    // segmented implementation
    template <typename Sequence, typename F>
    BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline void for_each(Sequence& seq, F& f, ::boost::mpl::true_)
    {
        ::boost::fusion::segmented_fold_until(
            seq
          , ::boost::fusion::void_()
          , ::boost::fusion::detail::segmented_for_each_fun<F>(f)
        );
    }
}}}

#endif  // include guard

