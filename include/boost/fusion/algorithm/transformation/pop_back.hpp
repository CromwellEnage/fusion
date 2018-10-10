/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_POP_BACK_09172005_1038)
#define FUSION_POP_BACK_09172005_1038

#include <boost/fusion/iterator/iterator_adapter.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/minus.hpp>

namespace boost { namespace fusion
{
    template <typename Iterator_, bool IsLast>
    struct pop_back_iterator :
        ::boost::fusion::iterator_adapter<
            ::boost::fusion::pop_back_iterator<Iterator_, IsLast>
          , Iterator_
        >
    {
        typedef ::boost::fusion::iterator_adapter<
            ::boost::fusion::pop_back_iterator<Iterator_, IsLast>
          , Iterator_
        > base_type;

        static bool const is_last = IsLast;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        pop_back_iterator(Iterator_ const& iterator_base) :
            base_type(iterator_base)
        {
        }

        template <typename BaseIterator>
        struct make
        {
            typedef ::boost::fusion
            ::pop_back_iterator<BaseIterator, is_last> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(BaseIterator const& i)
            {
                return type(i);
            }
        };

        template <typename I, bool IsLast_>
        struct equal_to_helper :
            ::boost::mpl::identity<typename I::iterator_base_type>
        {
        };

        template <typename I>
        struct equal_to_helper<I, true> :
            ::boost::fusion::result_of::next<typename I::iterator_base_type>
        {
        };

        template <typename I1, typename I2>
        struct equal_to :
            ::boost::fusion::result_of::equal_to<
                typename ::boost::fusion::pop_back_iterator<Iterator_, IsLast>
                ::template equal_to_helper<I1, (I2::is_last && !I1::is_last)>
                ::type
              , typename ::boost::fusion::pop_back_iterator<Iterator_, IsLast>
                ::template equal_to_helper<I2, (I1::is_last && !I2::is_last)>
                ::type
            >
        {
        };

        template <typename First, typename Last>
        struct distance :
            ::boost::mpl::minus<
                typename ::boost::fusion::result_of::distance<
                    typename First::iterator_base_type
                  , typename Last::iterator_base_type
                >::type
              , ::boost::mpl::int_<(Last::is_last ? 1 : 0)>
            >::type
        {
        };

        template <typename Iterator, bool IsLast_>
        struct prior_impl
        {
            typedef typename Iterator::iterator_base_type base_type;

            typedef typename ::boost::fusion::result_of
            ::prior<base_type>::type base_prior;

            typedef ::boost::fusion
            ::pop_back_iterator<base_prior, false> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(::boost::fusion::prior(i.iterator_base));
            }
        };

        template <typename Iterator>
        struct prior_impl<Iterator, true>
        {
            // If this is the last iterator, we'll have to double back
            typedef typename Iterator::iterator_base_type base_type;

            typedef typename ::boost::fusion::result_of::prior<
                typename ::boost::fusion::result_of::prior<base_type>::type
            >::type base_prior;

            typedef ::boost::fusion
            ::pop_back_iterator<base_prior, false> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(
                    ::boost::fusion::prior(
                        ::boost::fusion::prior(i.iterator_base)
                    )
                );
            }
        };

        template <typename Iterator>
        struct prior :
            ::boost::fusion::pop_back_iterator<Iterator_, IsLast>
            ::template prior_impl<Iterator, Iterator::is_last>
        {
        };
    };
}}

#include <boost/fusion/sequence/intrinsic/empty.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>
#include <boost/mpl/assert.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence>
    struct pop_back
    {
        BOOST_MPL_ASSERT_NOT((::boost::fusion::result_of::empty<Sequence>));

        typedef ::boost::fusion::pop_back_iterator<
            typename ::boost::fusion::result_of::begin<Sequence>::type
          , false
        > begin_type;

        typedef ::boost::fusion::pop_back_iterator<
            typename ::boost::fusion::result_of::end<Sequence>::type
          , true
        > end_type;

        typedef ::boost::fusion::iterator_range<begin_type, end_type> type;
    };
}}}

#include <boost/fusion/view/iterator_range/iterator_range.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of::pop_back<Sequence const>::type
    pop_back(Sequence const& seq)
    {
        typedef ::boost::fusion::result_of::pop_back<Sequence const> comp;
        typedef typename comp::begin_type begin_type;
        typedef typename comp::end_type end_type;
        typedef typename comp::type result;

        return result(
            begin_type(::boost::fusion::begin(seq))
          , end_type(::boost::fusion::end(seq))
        );
    }
}}

#endif  // include guard

