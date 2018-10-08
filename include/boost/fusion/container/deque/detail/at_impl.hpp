/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_DEQUE_AT_IMPL_09122006_2017)
#define BOOST_FUSION_DEQUE_AT_IMPL_09122006_2017

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/container/deque/deque_fwd.hpp>
#include <boost/fusion/container/deque/detail/keyed_element.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/mpl/assert.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/add_lvalue_reference.hpp>
#else
#include <type_traits>
#endif

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct at_impl< ::boost::fusion::deque_tag>
    {
        template <typename Sequence, typename N>
        struct apply
        {
            typedef typename Sequence::next_up next_up;
            typedef typename Sequence::next_down next_down;
            BOOST_MPL_ASSERT_RELATION(next_down::value, !=, next_up::value);

            static int const offset = next_down::value + 1;
            typedef ::boost::mpl::int_<(N::value + offset)> adjusted_index;
            typedef typename ::boost::fusion::detail::keyed_element_value_at<
                Sequence
              , adjusted_index
            >::type element_type;

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::add_lvalue_reference<
#else
            typedef typename ::std::add_lvalue_reference<
#endif
                typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                    ::boost::is_const<Sequence>
#else
                    ::std::is_const<Sequence>
#endif
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                  , ::boost::add_const<element_type>
#else
                  , ::std::add_const<element_type>
#endif
                  , ::boost::mpl::identity<element_type>
                >::type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& seq)
            {
                return seq.get(adjusted_index());
            }
        };
    };
}}}

#endif  // include guard

