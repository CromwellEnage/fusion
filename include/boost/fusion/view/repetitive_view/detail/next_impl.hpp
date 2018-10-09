/*============================================================================
    Copyright (c) 2007 Tobias Schwinger

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_REPETITIVE_VIEW_NEXT_IMPL_HPP_INCLUDED)
#define BOOST_FUSION_REPETITIVE_VIEW_NEXT_IMPL_HPP_INCLUDED

#include <boost/fusion/view/repetitive_view/repetitive_view_iterator_fwd.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct next_impl< ::boost::fusion::repetitive_view_iterator_tag>
    {
        template <
            typename Iterator
          , bool Last = ::boost::fusion::result_of::equal_to<
                typename Iterator::end_type
              , typename ::boost::fusion::result_of
                ::next<typename Iterator::pos_type>::type
            >::value
        >
        struct apply_nonempty // <Iterator, false>
        {
            // advanvce to next position
            typedef ::boost::fusion::repetitive_view_iterator<
                typename Iterator::sequence_type
              , typename ::boost::fusion::result_of
                ::next<typename Iterator::pos_type>::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.seq, ::boost::fusion::next(i.pos));
            }
        };

        template <typename Iterator>
        struct apply_nonempty<Iterator, true>
        {
            // reset to beginning
            typedef ::boost::fusion::repetitive_view_iterator<
                typename Iterator::sequence_type
              , typename Iterator::first_type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.seq);
            }    
        };

        template <
            typename Iterator
          , bool Empty = ::boost::fusion::result_of::equal_to<
                typename Iterator::end_type
              , typename Iterator::pos_type
            >::value
        >
        struct apply : // <Iterator,false>
            ::boost::fusion::extension
            ::next_impl< ::boost::fusion::repetitive_view_iterator_tag>
            ::template apply_nonempty<Iterator>
        {
        };

        template <typename Iterator>
        struct apply<Iterator, true>
        {
            // eps^n = eps
            typedef Iterator type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i);
            }
        };
    };
}}}

#endif  // include guard

