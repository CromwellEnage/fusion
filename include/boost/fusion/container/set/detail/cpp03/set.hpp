/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_SET_09162005_1104)
#define FUSION_SET_09162005_1104

#include <boost/fusion/container/set/set_tag_fwd.hpp>
#include <boost/fusion/container/set/set_fwd.hpp>
#include <boost/fusion/container/set/detail/key_of_impl.hpp>
#include <boost/fusion/container/set/detail/deref_data_impl.hpp>
#include <boost/fusion/container/set/detail/value_of_data_impl.hpp>
#include <boost/fusion/container/set/detail/value_of_impl.hpp>
#include <boost/fusion/container/set/detail/deref_impl.hpp>
#include <boost/fusion/container/set/detail/begin_impl.hpp>
#include <boost/fusion/container/set/detail/end_impl.hpp>
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/detail/enabler.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/traversal_tags.hpp>
#include <boost/fusion/support/void.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_DONT_USE_PREPROCESSED_FILES)
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 2, line: 0, output: "preprocessed/set" \
FUSION_MAX_SET_SIZE_STR ".hpp")
#endif

/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
============================================================================*/

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 1)
#endif

namespace boost { namespace fusion
{
    template <BOOST_PP_ENUM_PARAMS(FUSION_MAX_SET_SIZE, typename T)>
    struct set :
        ::boost::fusion::sequence_base<
            ::boost::fusion::set<BOOST_PP_ENUM_PARAMS(FUSION_MAX_SET_SIZE, T)>
        >
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

        typedef ::boost::fusion::vector<
            BOOST_PP_ENUM_PARAMS(FUSION_MAX_SET_SIZE, T)
        > storage_type;

        typedef typename storage_type::size size;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set() : data()
        {
        }

        template <typename Sequence>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        set(
            Sequence const& rhs
          , typename ::boost::enable_if<
                ::boost::fusion::traits::is_sequence<Sequence>
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) : data(rhs)
        {
        }

#include <boost/fusion/container/set/detail/cpp03/set_forward_ctor.hpp>

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
}}

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(output: null)
#endif

#else
#include <boost/fusion/container/set/detail/cpp03/preprocessed/set.hpp>
#endif  // BOOST_FUSION_DONT_USE_PREPROCESSED_FILES
#endif  // include guard

