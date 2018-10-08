/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_FIND_IF_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_FIND_IF_HPP_INCLUDED

#include <boost/fusion/algorithm/query/find_if_fwd.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/fusion/support/segmented_fold_until.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Pred>
    struct segmented_find_if_fun
    {
        template <typename Sequence, typename State, typename Context>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::find_if<Sequence, Pred>::type iterator_type;

            typedef ::boost::fusion::result_of::equal_to<
                iterator_type
              , typename ::boost::fusion::result_of::end<Sequence>::type
            > continue_type;

            typedef typename ::boost::mpl::eval_if<
                continue_type
              , ::boost::mpl::identity<State>
              , ::boost::fusion::result_of
                ::make_segmented_iterator<iterator_type, Context>
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type
            call_impl(
                Sequence&
              , State const& state
              , Context const&
              , ::boost::mpl::true_
            )
            {
                return state;
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type
            call_impl(
                Sequence& seq
              , State const&
              , Context const& context
              , ::boost::mpl::false_
            )
            {
                return ::boost::fusion::make_segmented_iterator(
                    ::boost::fusion::find_if<Pred>(seq)
                  , context
                );
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type
            call(
                Sequence& seq
              , State const& state
              , Context const& context
              , ::boost::fusion::detail::segmented_find_if_fun<Pred>
            )
            {
                return ::boost::fusion::detail::segmented_find_if_fun<Pred>
                ::template apply<Sequence, State, Context>
                ::call_impl(seq, state, context, continue_type());
            }
        };
    };

    template <typename Sequence, typename Pred>
    struct result_of_segmented_find_if
    {
        struct filter
        {
            typedef typename ::boost::fusion::result_of::segmented_fold_until<
                Sequence
              , typename ::boost::fusion::result_of::end<Sequence>::type
              , ::boost::fusion::detail::segmented_find_if_fun<Pred>
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                return ::boost::fusion::segmented_fold_until(
                    seq
                  , ::boost::fusion::end(seq)
                  , ::boost::fusion::detail::segmented_find_if_fun<Pred>()
                );
            }
        };

        typedef typename filter::type type;
    };
}}}

#endif  // include guard

