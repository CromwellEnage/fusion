/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_JOINT_VIEW_ITERATOR_07162005_0140)
#define FUSION_JOINT_VIEW_ITERATOR_07162005_0140

#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/iterator/mpl/convert_iterator.hpp>
#include <boost/fusion/adapted/mpl/mpl_iterator.hpp>
#include <boost/fusion/view/joint_view/detail/key_of_impl.hpp>
#include <boost/fusion/view/joint_view/detail/deref_data_impl.hpp>
#include <boost/fusion/view/joint_view/detail/value_of_data_impl.hpp>
#include <boost/fusion/view/joint_view/detail/deref_impl.hpp>
#include <boost/fusion/view/joint_view/detail/value_of_impl.hpp>
#include <boost/fusion/view/joint_view/detail/next_impl.hpp>
#include <boost/fusion/support/iterator_base.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/static_assert.hpp>

namespace boost { namespace fusion
{
    template <
        typename Category
      , typename First
      , typename Last
      , typename Concat
    >
    struct joint_view_iterator :
        ::boost::fusion::iterator_base<
            ::boost::fusion::joint_view_iterator<
                Category
              , First
              , Last
              , Concat
            >
        >
    {
        typedef ::boost::fusion::convert_iterator<First> first_converter;
        typedef ::boost::fusion::convert_iterator<Last> last_converter;
        typedef ::boost::fusion::convert_iterator<Concat> concat_converter;

        typedef typename first_converter::type first_type;
        typedef typename last_converter::type last_type;
        typedef typename concat_converter::type concat_type;

        typedef ::boost::fusion::joint_view_iterator_tag fusion_tag;
        typedef Category category;
        BOOST_STATIC_ASSERT((
            !::boost::fusion::result_of::equal_to<
                first_type
              , last_type
            >::value
        ));

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        joint_view_iterator(First const& in_first, Concat const& in_concat)
          : first(first_converter::call(in_first))
          , concat(concat_converter::call(in_concat))
        {
        }

        first_type first;
        concat_type concat;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        joint_view_iterator& operator=(joint_view_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <
        typename Category
      , typename First
      , typename Last
      , typename Concat
    >
    struct iterator_traits<
        ::boost::fusion::joint_view_iterator<Category, First, Last, Concat>
    >
    {
    };
}
#endif

#endif  // include guard

