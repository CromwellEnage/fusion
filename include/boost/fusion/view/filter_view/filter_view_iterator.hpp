/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_FILTER_VIEW_ITERATOR_05062005_0849)
#define FUSION_FILTER_VIEW_ITERATOR_05062005_0849

#include <boost/fusion/view/filter_view/filter_view_iterator_fwd.hpp>
#include <boost/fusion/view/filter_view/detail/deref_impl.hpp>
#include <boost/fusion/view/filter_view/detail/next_impl.hpp>
#include <boost/fusion/view/filter_view/detail/value_of_impl.hpp>
#include <boost/fusion/view/filter_view/detail/equal_to_impl.hpp>
#include <boost/fusion/view/filter_view/detail/deref_data_impl.hpp>
#include <boost/fusion/view/filter_view/detail/value_of_data_impl.hpp>
#include <boost/fusion/view/filter_view/detail/key_of_impl.hpp>
#include <boost/fusion/iterator/mpl/convert_iterator.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/algorithm/query/detail/find_if.hpp>
#include <boost/fusion/support/iterator_base.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/lambda.hpp>
#include <boost/mpl/quote.hpp>
#include <boost/mpl/bind.hpp>
#include <boost/mpl/placeholders.hpp>

namespace boost { namespace fusion
{
    template <typename Category, typename First, typename Last, typename Pred>
    struct filter_iterator :
        ::boost::fusion::iterator_base<
            ::boost::fusion::filter_iterator<Category, First, Last, Pred>
        >
    {
        typedef ::boost::fusion::convert_iterator<First> first_converter;
        typedef typename first_converter::type first_iter;
        typedef ::boost::fusion::convert_iterator<Last> last_converter;
        typedef typename last_converter::type last_iter;

        typedef ::boost::fusion::filter_view_iterator_tag fusion_tag;
        typedef Category category;
        typedef ::boost::fusion::detail::static_find_if<
            first_iter
          , last_iter
          , ::boost::mpl::bind1<
                typename ::boost::mpl::lambda<Pred>::type
              , ::boost::mpl::bind1<
                    ::boost::mpl::quote1<
                        ::boost::fusion::result_of::value_of
                    >
                  , ::boost::mpl::_1
                >
            >
        > filter;
        typedef typename filter::type first_type;
        typedef last_iter last_type;
        typedef Pred pred_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        filter_iterator(First const& in_first) :
            first(filter::iter_call(first_converter::call(in_first)))
        {
        }

        first_type first;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        filter_iterator& operator=(filter_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Category, typename First, typename Last, typename Pred>
    struct iterator_traits<
        ::boost::fusion::filter_iterator<Category, First, Last, Pred>
    >
    {
    };
}
#endif

#endif  // include guard

