/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_IS_SEQUENCE_05052005_1002)
#define FUSION_IS_SEQUENCE_05052005_1002

#include <boost/fusion/support/detail/is_native_fusion_sequence.hpp>

namespace boost { namespace fusion { namespace traits
{
    using ::boost::fusion::detail::is_native_fusion_sequence;
}}}

#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_convertible.hpp>
#else
#include <type_traits>
#endif

#include <boost/fusion/support/is_sequence_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <typename T>
    struct is_sequence_impl
    {
        template <typename Sequence>
        struct apply :
            ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<
#else
                ::std::is_convertible<
#endif
                    Sequence
                  , ::boost::fusion::detail::from_sequence_convertible_type
                >
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
        {
        };
    };
}}}

#include <boost/fusion/support/special_tags_fwd.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_sequence_impl< ::boost::fusion::non_fusion_tag>
    {
        template <typename T>
        struct apply : ::boost::mpl::false_
        {
        };
    };
}}}

#include <boost/fusion/support/tag_of.hpp>

namespace boost { namespace fusion { namespace traits
{
    template <typename T>
    struct is_sequence :
        ::boost::mpl::bool_<
            static_cast<bool>(
                ::boost::fusion::extension::is_sequence_impl<
                    typename ::boost::fusion::detail::tag_of<T>::type
                >::template apply<T>::type::value
            )
        >
    {
    };
}}}

#endif  // include guard

