/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_FIND_HPP_INCLUDED)
#define BOOST_FUSION_SEGMENTED_FIND_HPP_INCLUDED

#include <boost/fusion/algorithm/query/find_fwd.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/support/segmented_fold_until.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename T>
    struct segmented_find_fun
    {
        template <typename Sequence, typename State, typename Context>
        struct apply
        {
            typedef typename ::boost::fusion::result_of
            ::find<Sequence, T>::type iterator_type;

            typedef typename ::boost::fusion::result_of::equal_to<
                iterator_type
              , typename ::boost::fusion::result_of::end<Sequence>::type
            >::type continue_type;

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
                    ::boost::fusion::find<T>(seq)
                  , context
                );
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type
            call(
                Sequence& seq
              , State const& state
              , Context const& context
              , ::boost::fusion::detail::segmented_find_fun<T>
            )
            {
                return ::boost::fusion::detail::segmented_find_fun<T>
                ::template apply<Sequence, State, Context>
                ::call_impl(seq, state, context, continue_type());
            }
        };
    };

    template <typename Sequence, typename T>
    struct result_of_segmented_find
    {
        struct filter
        {
            typedef typename ::boost::fusion::result_of::segmented_fold_until<
                Sequence
              , typename ::boost::fusion::result_of::end<Sequence>::type
              , ::boost::fusion::detail::segmented_find_fun<T>
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                return ::boost::fusion::segmented_fold_until(
                    seq
                  , ::boost::fusion::end(seq)
                  , ::boost::fusion::detail::segmented_find_fun<T>()
                );
            }
        };

        typedef typename filter::type type;
    };
}}}

#endif  // include guard

