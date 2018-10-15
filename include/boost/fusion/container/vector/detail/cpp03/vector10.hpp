/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VECTOR10_05042005_0257)
#define FUSION_VECTOR10_05042005_0257

#include <boost/fusion/container/vector/detail/cpp03/vector10_fwd.hpp>
#include <boost/fusion/container/vector/detail/begin_impl.hpp>
#include <boost/fusion/container/vector/detail/end_impl.hpp>
#include <boost/fusion/container/vector/detail/at_impl.hpp>
#include <boost/fusion/container/vector/detail/value_at_impl.hpp>
#include <boost/fusion/sequence/intrinsic/detail/begin.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/mpl/void.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/at.hpp>
#include <boost/mpl/vector/vector10.hpp>
#include <boost/tti/detail/dnullptr.hpp>
#include <boost/core/enable_if.hpp>
#include <boost/preprocessor/dec.hpp>
#include <boost/preprocessor/iteration/iterate.hpp>
#include <boost/preprocessor/repetition/enum.hpp>
#include <boost/preprocessor/repetition/enum_shifted.hpp>
#include <boost/preprocessor/repetition/enum_params.hpp>
#include <boost/preprocessor/repetition/enum_binary_params.hpp>
#include <boost/preprocessor/repetition/repeat_from_to.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/add_lvalue_reference.hpp>
#include <boost/type_traits/is_convertible.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Dummy>
    struct vector0 :
        ::boost::fusion::sequence_base< ::boost::fusion::vector0<Dummy> >
    {
        typedef ::boost::mpl::vector0<> types;
        typedef ::boost::fusion::vector_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::mpl::int_<0> size;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector0() BOOST_NOEXCEPT
        {
        }

        template<typename Sequence>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector0(Sequence const& /*seq*/) BOOST_NOEXCEPT
        {
        }
    };
}}

#if defined(BOOST_FUSION_DONT_USE_PREPROCESSED_FILES)
#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(preserve: 2, line: 0, output: "preprocessed/vector10.hpp")
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
#define FUSION_HASH #
// expand vector1 to vector10
#define BOOST_PP_FILENAME_1 \
    <boost/fusion/container/vector/detail/cpp03/vector_n.hpp>
#define BOOST_PP_ITERATION_LIMITS (1, 10)
#include BOOST_PP_ITERATE()
#undef FUSION_HASH
}}

#if defined(__WAVE__) && defined(BOOST_FUSION_CREATE_PREPROCESSED_FILES)
#pragma wave option(output: null)
#endif

#else
#include \
<boost/fusion/container/vector/detail/cpp03/preprocessed/vector10.hpp>
#endif  // BOOST_FUSION_DONT_USE_PREPROCESSED_FILES
#endif  // include guard

