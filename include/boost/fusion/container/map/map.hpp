/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_MAP_MAIN_07212005_1106)
#define FUSION_MAP_MAIN_07212005_1106

#include <boost/fusion/container/map/map_fwd.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_MAP)

///////////////////////////////////////////////////////////////////////////////
// C++11 interface
///////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/map/detail/begin_impl.hpp>
#include <boost/fusion/container/map/detail/end_impl.hpp>
#include <boost/fusion/container/map/detail/at_impl.hpp>
#include <boost/fusion/container/map/detail/at_key_impl.hpp>
#include <boost/fusion/container/map/detail/value_at_impl.hpp>
#include <boost/fusion/container/map/detail/value_at_key_impl.hpp>
#include <boost/fusion/container/map/detail/map_impl.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/sequence/intrinsic/detail/end.hpp>
#include <boost/fusion/sequence/intrinsic/at.hpp>
#include <boost/fusion/sequence/intrinsic/at_c.hpp>
#include <boost/fusion/sequence/intrinsic/has_key.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/fusion/support/detail/enabler.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    template <typename ...T>
    struct map
      : ::boost::fusion::detail::map_impl<0, T...>
      , ::boost::fusion::sequence_base< ::boost::fusion::map<T...> >
    {
        typedef ::boost::fusion::map_tag fusion_tag;
        typedef ::boost::fusion::detail::map_impl<0, T...> base_type;

        struct category
          : ::boost::fusion::random_access_traversal_tag
          , ::boost::fusion::associative_tag
        {
        };

        typedef ::boost::mpl::int_<base_type::size> size;
        typedef ::boost::mpl::false_ is_view;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        map()
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        map(map const& seq) : base_type(seq.base())
        {
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        map(map&& seq) : base_type(::std::forward<map>(seq))
        {
        }

        template <
            typename Sequence
          , typename = typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type
        >
        BOOST_FUSION_GPU_ENABLED
        map(Sequence const& seq) :
            base_type(
                ::boost::fusion::begin(seq)
              , ::boost::fusion::detail::map_impl_from_iterator()
            )
        {
        }

        template <
            typename Sequence
          , typename = typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type
        >
        BOOST_FUSION_GPU_ENABLED
        map(Sequence& seq) :
            base_type(
                ::boost::fusion::begin(seq)
              , ::boost::fusion::detail::map_impl_from_iterator()
            )
        {
        }

        template <
            typename Sequence
          , typename = typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
            >::type
        >
        BOOST_FUSION_GPU_ENABLED
        map(Sequence&& seq) :
            base_type(
                ::boost::fusion::begin(seq)
              , ::boost::fusion::detail::map_impl_from_iterator()
            )
        {
        }

        template <typename First, typename ...T_>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        map(First const& first, T_ const&... rest) : base_type(first, rest...)
        {
        }

        template <typename First, typename ...T_>
        BOOST_FUSION_GPU_ENABLED
        map(First&& first, T_&&... rest) :
            base_type(
                BOOST_FUSION_FWD_ELEM(First, first)
              , BOOST_FUSION_FWD_ELEM(T_, rest)...
            )
        {
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        map& operator=(map const& rhs)
        {
            base_type::operator=(rhs.base());
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        map& operator=(map&& rhs)
        {
            base_type::operator=(::std::forward<base_type>(rhs.base()));
            return *this;
        }

        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::enable_if<
            ::boost::fusion::traits::is_sequence<Sequence>
          , map&
        >::type
        operator=(Sequence const& seq)
        {
            base().assign(
                ::boost::fusion::begin(seq)
              , ::boost::fusion::detail::map_impl_from_iterator()
            );
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        base_type& base() BOOST_NOEXCEPT
        {
            return *this;
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        base_type const& base() const BOOST_NOEXCEPT
        {
            return *this;
        }
    };
}}

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/map/detail/cpp03/map.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_MAP
#endif  // include guard

