/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_ADVANCE_IMPL_20061024_2021)
#define FUSION_ADVANCE_IMPL_20061024_2021

#include <boost/fusion/iterator/advance.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename N>
    struct poly_advance
    {
        template <typename Sig>
        struct result;

        template <typename N1, typename It>
        struct result< ::boost::fusion::detail::poly_advance<N1>(It)>
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::remove_reference<It>::type it;
#else
            typedef typename ::std::remove_reference<It>::type it;
#endif
            typedef typename ::boost::fusion::result_of
            ::advance<it, N>::type type;
        };

        template <typename It>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::poly_advance<N>::template result<
            ::boost::fusion::detail::poly_advance<N>(It)
        >::type
        operator()(It const& it) const
        {
            return ::boost::fusion::advance<N>(it);
        }
    };
}}}

#include <boost/fusion/view/zip_view/zip_view_iterator_fwd.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct advance_impl< ::boost::fusion::zip_view_iterator_tag>
    {
        template <typename It, typename N>
        struct apply
        {
            typedef ::boost::fusion::zip_view_iterator<
                typename ::boost::fusion::result_of::transform<
                    typename It::iterators
                  , ::boost::fusion::detail::poly_advance<N>
                >::type
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It const& it)
            {
                return type(
                    ::boost::fusion::transform(
                        it.iterators_
                      , ::boost::fusion::detail::poly_advance<N>()
                    )
                );
            }
        };
     };
}}}

#endif  // include guard

