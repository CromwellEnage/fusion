/*=============================================================================
    Copyright (c) 2006 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_BINARY_TREE_EAN_05032006_1027)
#define FUSION_BINARY_TREE_EAN_05032006_1027

#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/sequence/intrinsic/segments.hpp>
#include <boost/fusion/sequence/intrinsic/empty.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/view/single_view.hpp>
#include <boost/fusion/container/list/cons.hpp> // for nil
#include <boost/fusion/container/vector/vector10.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/is_segmented.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    struct tree_tag;

    template <
        typename Data
      , typename Left = ::boost::fusion::nil
      , typename Right = ::boost::fusion::nil
    >
    struct tree :
        ::boost::fusion::sequence_base<
            ::boost::fusion::tree<Data, Left, Right>
        >
    {
        typedef Data data_type;
        typedef Left left_type;
        typedef Right right_type;
        typedef ::boost::fusion::tree_tag fusion_tag;
        typedef ::boost::fusion::forward_traversal_tag category;
        typedef ::boost::mpl::false_ is_view;

        typedef typename ::boost::mpl::if_<
            ::boost::fusion::traits::is_sequence<Data>
          , Data
          , ::boost::fusion::single_view<Data>
        >::type data_view;

        explicit tree(
            typename ::boost::fusion::detail::call_param<Data>::type data_
          , typename ::boost::fusion::detail::call_param<
                Left
            >::type left_ = Left()
          , typename ::boost::fusion::detail::call_param<
                Right
            >::type right_ = Right()
        ) : segments(left_, data_view(data_), right_)
        {
        }

        typedef ::boost::fusion::vector3<
            Left
          , data_view
          , Right
        > segments_type;
        segments_type segments;
    };

    template <typename Data>
    ::boost::fusion::tree<Data> make_tree(Data const &data)
    {
        return tree<Data>(data);
    }

    template <typename Data, typename Left, typename Right>
    ::boost::fusion::tree<Data, Left, Right>
    make_tree(Data const &data, Left const &left, Right const &right)
    {
        return ::boost::fusion::tree<Data, Left, Right>(data, left, right);
    }

    namespace extension
    {
        template <>
        struct is_segmented_impl< ::boost::fusion::tree_tag>
        {
            template <typename Sequence>
            struct apply : ::boost::mpl::true_
            {
            };
        };

        template <>
        struct segments_impl< ::boost::fusion::tree_tag>
        {
            template <typename Sequence>
            struct apply
            {
                typedef typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                    ::boost::is_const<Sequence>
#else
                    ::std::is_const<Sequence>
#endif
                  , typename Sequence::segments_type const&
                  , typename Sequence::segments_type&
                >::type type;

                static type call(Sequence &seq)
                {
                    return seq.segments;
                }
            };
        };
    }
}}

#endif  // include guard

