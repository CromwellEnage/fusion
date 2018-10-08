/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ZIP_VIEW_23012006_0813)
#define FUSION_ZIP_VIEW_23012006_0813

#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/algorithm/query/find_if.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_lvalue_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequences>
    struct all_references :
        ::boost::fusion::result_of::equal_to<
            typename ::boost::fusion::result_of::find_if<
                Sequences
              , ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_lvalue_reference< ::boost::mpl::_>
#else
                    ::std::is_lvalue_reference< ::boost::mpl::_>
#endif
                  , ::boost::mpl::false_
                  , ::boost::mpl::true_
                >
            >::type
          , typename ::boost::fusion::result_of::end<Sequences>::type
        >
    {
    };
}}}

#include <boost/mpl/min.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_reference.hpp>
#endif

namespace boost { namespace fusion { namespace detail
{
    struct poly_min
    {
        template <typename T>
        struct result;

        template <typename Lhs, typename Rhs>
        struct result< ::boost::fusion::detail::poly_min(Lhs, Rhs)>
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::remove_reference<Lhs>::type lhs;
            typedef typename ::boost::remove_reference<Rhs>::type rhs;
#else
            typedef typename ::std::remove_reference<Lhs>::type lhs;
            typedef typename ::std::remove_reference<Rhs>::type rhs;
#endif
            typedef typename ::boost::mpl::min<lhs, rhs>::type type;
        };

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        // never called, but needed for decltype-based result_of (C++0x)
        template <typename Lhs, typename Rhs>
        BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::poly_min
        ::template result< ::boost::fusion::detail::poly_min(Lhs, Rhs)>::type
        operator()(Lhs&&, Rhs&&) const;
#endif
    };
}}}

#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/algorithm/query/find_if.hpp>
#include <boost/fusion/support/category_of.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace detail
{
    struct seq_ref_size
    {
        template <typename Params>
        struct result;

        template <typename Seq>
        struct result< ::boost::fusion::detail::seq_ref_size(Seq)>
        {
            static int const high_int = static_cast<int>(
                (static_cast<unsigned>(~0) >> 1) - 1
            );
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::remove_reference<Seq>::type SeqClass;
#else
            typedef typename ::std::remove_reference<Seq>::type SeqClass;
#endif
            typedef typename ::boost::mpl::if_<
                ::boost::fusion::traits::is_forward<SeqClass>
              , ::boost::fusion::result_of::size<SeqClass>
              , ::boost::mpl::int_<high_int>
            >::type type;
        };

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        // never called, but needed for decltype-based result_of (C++0x)
        template <typename Seq>
        BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::seq_ref_size::template result<
            ::boost::fusion::detail::seq_ref_size(Seq)
        >::type
        operator()(Seq&&) const;
#endif
    };
}}}

#include <boost/fusion/sequence/intrinsic/front.hpp>
#include <boost/fusion/algorithm/iteration/fold.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequences>
    struct min_size
    {
        typedef typename ::boost::fusion::result_of::transform<
            Sequences
          , ::boost::fusion::detail::seq_ref_size
        >::type sizes;
        typedef typename ::boost::fusion::result_of::fold<
            sizes
          , typename ::boost::fusion::result_of::front<sizes>::type
          , ::boost::fusion::detail::poly_min
        >::type type;
    };
}}}

#include <boost/fusion/view/zip_view/zip_view_tag_fwd.hpp>
#include <boost/fusion/view/zip_view/detail/size_impl.hpp>
#include <boost/fusion/view/zip_view/detail/begin_impl.hpp>
#include <boost/fusion/view/zip_view/detail/end_impl.hpp>
#include <boost/fusion/view/zip_view/detail/at_impl.hpp>
#include <boost/fusion/view/zip_view/detail/value_at_impl.hpp>
#include <boost/fusion/view/detail/strictest_traversal.hpp>
#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/algorithm/transformation/remove.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/unused.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/assert.hpp>

namespace boost { namespace fusion
{
    template <typename Sequences>
    struct zip_view :
        ::boost::fusion::sequence_base< ::boost::fusion::zip_view<Sequences> >
    {
        typedef typename ::boost::fusion::result_of::remove<
            Sequences
          , ::boost::fusion::unused_type const&
        >::type real_sequences;
        BOOST_MPL_ASSERT((
            ::boost::fusion::detail::all_references<Sequences>
        ));
        typedef typename ::boost::fusion::detail
        ::strictest_traversal<real_sequences>::type category;
        typedef ::boost::fusion::zip_view_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::true_ is_view;
        typedef typename ::boost::fusion::result_of
        ::as_vector<Sequences>::type sequences;
        typedef typename ::boost::fusion::detail
        ::min_size<real_sequences>::type size;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        zip_view(Sequences const& seqs) : sequences_(seqs)
        {
        }

        sequences sequences_;
    };
}}

#endif  // include guard

