/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_EQUAL_TO_05052005_1208)
#define FUSION_EQUAL_TO_05052005_1208

#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename It1, typename It2, typename Tag1, typename Tag2>
    struct equal_to_dispatch : ::boost::mpl::false_
    {
    };

    template <typename It1, typename It2, typename Tag>
    struct equal_to_dispatch<It1, It2, Tag, Tag> : // same tag
        It1::template equal_to<It1, It2>
    {
    };
}}}

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/add_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <typename Tag>
    struct equal_to_impl
    {
        // default implementation
        template <typename I1, typename I2>
        struct apply :
            ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<
                    typename ::boost::add_const<I1>::type
                  , typename ::boost::add_const<I2>::type
#else
                ::std::is_same<
                    typename ::std::add_const<I1>::type
                  , typename ::std::add_const<I2>::type
#endif
                >
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
        {
        };
    };
}}}

#include <boost/fusion/iterator/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct equal_to_impl< ::boost::fusion::iterator_facade_tag>
    {
        template <typename It1, typename It2>
        struct apply :
            ::boost::fusion::detail::equal_to_dispatch<
                It1
              , It2
              , typename It1::fusion_tag
              , typename It2::fusion_tag
            >
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename I1, typename I2>
    struct equal_to :
        ::boost::fusion::extension::equal_to_impl<
            typename ::boost::fusion::detail::tag_of<I1>::type
        >::template apply<I1, I2>::type
    {
    };
}}}

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/is_iterator.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    namespace iterator_operators
    {
        template <typename Iter1, typename Iter2>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        inline typename ::boost::enable_if<
            typename ::boost::mpl::if_<
                ::boost::fusion::is_fusion_iterator<Iter1>
              , ::boost::fusion::is_fusion_iterator<Iter2>
              , ::boost::mpl::false_
            >::type
          , bool
        >::type
        operator==(Iter1 const&, Iter2 const&)
        {
            return ::boost::fusion::result_of::equal_to<Iter1, Iter2>::value;
        }

        template <typename Iter1, typename Iter2>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        inline typename ::boost::enable_if<
            typename ::boost::mpl::if_<
                ::boost::fusion::is_fusion_iterator<Iter1>
              , ::boost::fusion::is_fusion_iterator<Iter2>
              , ::boost::mpl::false_
            >::type
          , bool
        >::type
        operator!=(Iter1 const&, Iter2 const&)
        {
            return !::boost::fusion::result_of::equal_to<Iter1, Iter2>::value;
        }
    }

    using iterator_operators::operator==;
    using iterator_operators::operator!=;
}}

#endif  // include guard

