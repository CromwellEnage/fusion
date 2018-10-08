/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_TAG_OF_09232005_0845)
#define FUSION_TAG_OF_09232005_0845

#include <boost/fusion/support/config.hpp>
#include <cstddef>

namespace boost
{
    template <typename T, ::std::size_t N>
    class array; // forward
}

#include <boost/mpl/has_xxx.hpp>

namespace boost { namespace fusion { namespace detail
{
    BOOST_MPL_HAS_XXX_TRAIT_DEF(fusion_tag)
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/detail/is_mpl_sequence.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence, typename Active>
    struct tag_of_impl :
        ::boost::mpl::if_<
            ::boost::fusion::detail::is_mpl_sequence<Sequence>
          , ::boost::mpl::identity< ::boost::fusion::mpl_sequence_tag>
          , ::boost::mpl::identity< ::boost::fusion::non_fusion_tag>
        >::type
    {
    };
}}}

#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence>
    struct tag_of_impl<
        Sequence
      , typename ::boost::enable_if<
            ::boost::fusion::detail::has_fusion_tag<Sequence>
        >::type
    >
    {
        typedef typename Sequence::fusion_tag type;
    };
}}}

#include <boost/fusion/support/tag_of_fwd.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <typename Sequence, typename Active>
    struct tag_of : ::boost::fusion::detail::tag_of_impl<Sequence, Active>
    {
    };
}}}

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename T>
    struct tag_of :
        ::boost::fusion::traits::tag_of<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::remove_const<T>::type
#else
            typename ::std::remove_const<T>::type
#endif
        >
    {
    };
}}}

#endif  // include guard

