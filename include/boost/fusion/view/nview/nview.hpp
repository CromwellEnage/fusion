/*============================================================================
    Copyright (c) 2009 Hartmut Kaiser

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_NVIEW_SEP_23_2009_0948PM)
#define BOOST_FUSION_NVIEW_SEP_23_2009_0948PM

#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_lvalue_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    struct addref
    {
        template <typename Sig>
        struct result;

        template <typename U>
        struct result< ::boost::fusion::detail::addref(U)> :
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::add_lvalue_reference<U>
#else
            ::std::add_lvalue_reference<U>
#endif
        {
        };

        template <typename T>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<T>::type 
#else
        typename ::std::add_lvalue_reference<T>::type 
#endif
        operator()(T& x) const
#else   // !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        typename result< ::boost::fusion::detail::addref(T)>::type
        operator()(T&& x) const
#endif  // BOOST_NO_CXX11_RVALUE_REFERENCES
        {
            return x;
        }
    };
}}}

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    struct addconstref
    {
        template <typename Sig>
        struct result;

        template <typename U>
        struct result< ::boost::fusion::detail::addconstref(U)> :
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::add_lvalue_reference<
                typename ::boost::add_const<U>::type
            >
#else
            ::std::add_lvalue_reference<typename ::std::add_const<U>::type>
#endif
        {
        };

        template <typename T>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<T>::type
#else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<T>::type
#endif
        >::type 
        operator()(T& x) const
        {
            return x;
        }

        template <typename T>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        typename ::boost::add_lvalue_reference<
            typename ::boost::add_const<T>::type
#else
        typename ::std::add_lvalue_reference<
            typename ::std::add_const<T>::type
#endif
        >::type 
        operator()(T const& x) const
        {
            return x;
        }
    };
}}}

#include <boost/fusion/view/nview/nview_tag_fwd.hpp>
#include <boost/fusion/view/nview/detail/size_impl.hpp>
#include <boost/fusion/view/nview/detail/begin_impl.hpp>
#include <boost/fusion/view/nview/detail/end_impl.hpp>
#include <boost/fusion/view/nview/detail/at_impl.hpp>
#include <boost/fusion/view/nview/detail/value_at_impl.hpp>
#include <boost/fusion/view/transform_view.hpp>
#include <boost/fusion/container/vector.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#endif

namespace boost { namespace fusion
{
    template <typename Sequence, typename Indicies>
    struct nview :
        ::boost::fusion::sequence_base<
            ::boost::fusion::nview<Sequence, Indicies>
        >
    {
        typedef ::boost::fusion::nview_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::true_ is_view;
        typedef Indicies index_type;
        typedef typename ::boost::fusion::result_of
        ::size<Indicies>::type size;

        typedef typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
            ::boost::is_const<Sequence>
#else
            ::std::is_const<Sequence>
#endif
          , ::boost::fusion::detail::addconstref
          , ::boost::fusion::detail::addref
        >::type transform_type;
        typedef ::boost::fusion
        ::transform_view<Sequence, transform_type> transform_view_type;
        typedef typename ::boost::fusion::result_of
        ::as_vector<transform_view_type>::type sequence_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit nview(Sequence& val) :
            seq(sequence_type(transform_view_type(val, transform_type())))
        {
        }

        sequence_type seq;
    };
}}

// define the nview() generator functions
#include <boost/fusion/view/nview/detail/nview_impl.hpp>

#endif  // include guard

