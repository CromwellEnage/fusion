/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_REVERSE_VIEW_07202005_0836)
#define FUSION_REVERSE_VIEW_07202005_0836

#include <boost/fusion/view/reverse_view/reverse_view_tag_fwd.hpp>
#include <boost/fusion/view/reverse_view/reverse_view_iterator.hpp>
#include <boost/fusion/view/reverse_view/detail/begin_impl.hpp>
#include <boost/fusion/view/reverse_view/detail/end_impl.hpp>
#include <boost/fusion/view/reverse_view/detail/at_impl.hpp>
#include <boost/fusion/view/reverse_view/detail/value_at_impl.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_view.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/assert.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence>
    struct reverse_view :
        ::boost::fusion::sequence_base<
            ::boost::fusion::reverse_view<Sequence>
        >
    {
        typedef ::boost::fusion::reverse_view_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::true_ is_view;

        typedef Sequence seq_type;
        typedef typename ::boost::fusion::traits
        ::category_of<Sequence>::type category;
        typedef typename ::boost::fusion::result_of
        ::begin<Sequence>::type first_type;
        typedef typename ::boost::fusion::result_of
        ::end<Sequence>::type last_type;
        typedef typename ::boost::fusion::result_of
        ::size<Sequence>::type size;

        BOOST_MPL_ASSERT((
            ::boost::fusion::traits::is_bidirectional<first_type>
        ));

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        reverse_view(Sequence& in_seq) : seq(in_seq)
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        first_type first() const
        {
            return ::boost::fusion::begin(this->seq);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        last_type last() const
        {
            return ::boost::fusion::end(this->seq);
        }

        typename ::boost::mpl::if_<
            ::boost::fusion::traits::is_view<Sequence>
          , Sequence
          , Sequence&
        >::type seq;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        reverse_view& operator=(reverse_view const&);
    };
}}

#endif  // include guard

