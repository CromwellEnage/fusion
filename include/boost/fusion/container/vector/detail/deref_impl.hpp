/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_DEREF_IMPL_05042005_1037)
#define FUSION_DEREF_IMPL_05042005_1037

#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/container/vector/vector_tag_fwd.hpp>
#include <boost/fusion/container/vector/vector_iterator_fwd.hpp>
#include <boost/fusion/container/vector/detail/value_at_impl.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/mpl/eval_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct deref_impl< ::boost::fusion::vector_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::vector vector;
            typedef typename Iterator::index index;
            typedef typename ::boost::fusion::extension::value_at_impl<
                ::boost::fusion::vector_tag
            >::template apply<vector, index>::type element;

            typedef typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                ::boost::is_const<vector>
#else
                ::std::is_const<vector>
#endif
              , ::boost::fusion::detail::cref_result<element>
              , ::boost::fusion::detail::ref_result<element>
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return i.vec.at_impl(index());
            }
        };
    };
}}}

#endif  // include guard

