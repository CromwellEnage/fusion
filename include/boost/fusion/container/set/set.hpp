/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SET_11062014_1726)
#define FUSION_SET_11062014_1726

#include <boost/fusion/support/config.hpp>
#include <boost/fusion/container/set/set_fwd.hpp>

#if defined(BOOST_FUSION_HAS_VARIADIC_SET)

//////////////////////////////////////////////////////////////////////////////
// C++11 interface
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/container/set/detail/key_of_impl.hpp>
#include <boost/fusion/container/set/detail/deref_data_impl.hpp>
#include <boost/fusion/container/set/detail/value_of_data_impl.hpp>
#include <boost/fusion/container/set/detail/deref_impl.hpp>
#include <boost/fusion/container/set/detail/value_of_impl.hpp>
#include <boost/fusion/container/set/detail/begin_impl.hpp>
#include <boost/fusion/container/set/detail/end_impl.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/detail/enabler.hpp>
#include <boost/fusion/support/detail/is_same_size.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion
{
    template <>
    struct set<> : ::boost::fusion::sequence_base< ::boost::fusion::set<> >
    {
        struct category
          : ::boost::fusion::forward_traversal_tag
          , ::boost::fusion::associative_tag
        {
        };

        typedef ::boost::fusion::set_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::false_ is_view;

        typedef ::boost::fusion::vector<> storage_type;

        typedef storage_type::size size;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set() : data()
        {
        }

        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        set(
            Sequence const& rhs
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
          , typename ::boost::enable_if<
                ::boost::fusion::detail::is_same_size<Sequence, storage_type>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) : data(rhs)
        {
        }

        template <typename T>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set& operator=(T const& rhs)
        {
            this->data = rhs;
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        storage_type& get_data()
        {
            return this->data;
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        storage_type const& get_data() const
        {
            return this->data;
        }

     private:
        storage_type data;
    };

    template <typename ...T>
    struct set : ::boost::fusion::sequence_base< ::boost::fusion::set<T...> >
    {
        struct category
          : ::boost::fusion::forward_traversal_tag
          , ::boost::fusion::associative_tag
        {
        };

        typedef ::boost::fusion::set_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::false_ is_view;

        typedef ::boost::fusion::vector<T...> storage_type;

        typedef typename storage_type::size size;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set() : data()
        {
        }

        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        set(
            Sequence&& rhs
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
          , typename ::boost::enable_if<
                ::boost::fusion::detail::is_same_size<Sequence, storage_type>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) : data(::std::forward<Sequence>(rhs))
        {
        }

        template <typename ...U>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit set(U&& ...args) : data(::std::forward<U>(args)...)
        {
        }

        template <typename U>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set& operator=(U&& rhs)
        {
            this->data = ::std::forward<U>(rhs);
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        storage_type& get_data()
        {
            return this->data;
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        storage_type const& get_data() const
        {
            return this->data;
        }

     private:
        storage_type data;
    };

}}

#else

//////////////////////////////////////////////////////////////////////////////
// Without variadics, we will use the PP version
//////////////////////////////////////////////////////////////////////////////
#include <boost/fusion/container/set/detail/cpp03/set.hpp>

#endif  // BOOST_FUSION_HAS_VARIADIC_SET
#endif  // include guard

