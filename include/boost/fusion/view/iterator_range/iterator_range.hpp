/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ITERATOR_RANGE_05062005_1224)
#define FUSION_ITERATOR_RANGE_05062005_1224

#include <boost/fusion/view/iterator_range/iterator_range_fwd.hpp>
#include <boost/fusion/view/iterator_range/detail/size_impl.hpp>
#include <boost/fusion/view/iterator_range/detail/begin_impl.hpp>
#include <boost/fusion/view/iterator_range/detail/end_impl.hpp>
#include <boost/fusion/view/iterator_range/detail/at_impl.hpp>
#include <boost/fusion/view/iterator_range/detail/value_at_impl.hpp>
#include <boost/fusion/view/iterator_range/detail/is_segmented_impl.hpp>
#include <boost/fusion/view/iterator_range/detail/segments_impl.hpp>
#include <boost/fusion/adapted/mpl/mpl_iterator.hpp>
#include <boost/fusion/iterator/distance.hpp>
#include <boost/fusion/iterator/mpl/convert_iterator.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_MSVC)
#pragma warning(push)
#pragma warning(disable: 4512) // assignment operator could not be generated.
#endif

namespace boost { namespace fusion
{
    template <typename First, typename Last>
    struct iterator_range :
        ::boost::fusion::sequence_base<
            ::boost::fusion::iterator_range<First, Last>
        >
    {
        typedef typename ::boost::fusion
        ::convert_iterator<First>::type begin_type;

        typedef typename ::boost::fusion
        ::convert_iterator<Last>::type end_type;

        typedef ::boost::fusion::iterator_range_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::true_ is_view;

        typedef typename ::boost::fusion::traits
        ::category_of<begin_type>::type category;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        iterator_range(First const& in_first, Last const& in_last)
          : first(::boost::fusion::convert_iterator<First>::call(in_first))
          , last(::boost::fusion::convert_iterator<Last>::call(in_last))
        {
        }

        begin_type first;
        end_type last;
    };
}}

#if defined(BOOST_MSVC)
#pragma warning(pop)
#endif

#endif  // include guard

