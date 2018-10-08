/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_STRICTEST_TRAVERSAL_20060123_2101)
#define FUSION_STRICTEST_TRAVERSAL_20060123_2101

#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_convertible.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Tag1
      , typename Tag2
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
      , bool Tag1Stricter = ::boost::is_convertible<Tag2, Tag1>::value
#else
      , bool Tag1Stricter = ::std::is_convertible<Tag2, Tag1>::value
#endif
    >
    struct stricter_traversal
    {
        typedef Tag1 type;
    };

    template <typename Tag1, typename Tag2>
    struct stricter_traversal<Tag1, Tag2, false>
    {
        typedef Tag2 type;
    };
}}}

#include <boost/fusion/support/category_of.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_reference.hpp>
#endif

namespace boost { namespace fusion { namespace detail
{
    struct strictest_traversal_impl
    {
        template <typename Sig>
        struct result;

        template <typename StrictestSoFar, typename Next>
        struct result<
            ::boost::fusion::detail
            ::strictest_traversal_impl(StrictestSoFar, Next)
        >
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::remove_reference<Next>::type next_value;
            typedef typename ::boost
#else
            typedef typename ::std::remove_reference<Next>::type next_value;
            typedef typename ::std
#endif
            ::remove_reference<StrictestSoFar>::type tag1;
            typedef typename ::boost::fusion::traits
            ::category_of<next_value>::type tag2;
            typedef typename ::boost::fusion::detail
            ::stricter_traversal<tag1, tag2>::type type;
        };

#if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        // never called, but needed for decltype-based result_of (C++0x)
        template <typename StrictestSoFar, typename Next>
        BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::strictest_traversal_impl
        ::template result<
            ::boost::fusion::detail
            ::strictest_traversal_impl(StrictestSoFar, Next)
        >::type
        operator()(StrictestSoFar&&, Next&&) const;
#endif
    };
}}}

#include <boost/fusion/algorithm/iteration/fold.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence>
    struct strictest_traversal :
        ::boost::fusion::result_of::fold<
            Sequence
          , ::boost::fusion::random_access_traversal_tag
          , ::boost::fusion::detail::strictest_traversal_impl
        >
    {
    };
}}}

#endif  // include guard

