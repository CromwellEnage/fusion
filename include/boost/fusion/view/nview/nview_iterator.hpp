/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_ITERATOR_SEP_23_2009_0948PM)
#define BOOST_FUSION_NVIEW_ITERATOR_SEP_23_2009_0948PM

#include <boost/fusion/view/nview/nview_iterator_fwd.hpp>
#include <boost/fusion/view/nview/detail/deref_impl.hpp>
#include <boost/fusion/view/nview/detail/value_of_impl.hpp>
#include <boost/fusion/view/nview/detail/next_impl.hpp>
#include <boost/fusion/view/nview/detail/prior_impl.hpp>
#include <boost/fusion/view/nview/detail/advance_impl.hpp>
#include <boost/fusion/view/nview/detail/distance_impl.hpp>
#include <boost/fusion/view/nview/detail/equal_to_impl.hpp>
#include <boost/fusion/support/iterator_base.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Sequence, typename Pos>
    struct nview_iterator :
        ::boost::fusion::iterator_base<
            ::boost::fusion::nview_iterator<Sequence, Pos>
        >
    {
        typedef ::boost::fusion::nview_iterator_tag fusion_tag;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef Sequence sequence_type;
        typedef Pos first_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit nview_iterator(Sequence& in_seq) : seq(in_seq)
        {
        }

        Sequence& seq;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        nview_iterator& operator=(nview_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Sequence, typename Pos>
    struct iterator_traits< ::boost::fusion::nview_iterator<Sequence, Pos> >
    {
    };
}
#endif

#endif  // include guard

