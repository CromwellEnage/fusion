/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_PRIOR_IMPL_20060124_2006)
#define FUSION_PRIOR_IMPL_20060124_2006

#include <boost/fusion/iterator/prior.hpp>
#include <boost/fusion/support/unused.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/mpl/identity.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    struct poly_prior
    {
        template <typename Sig>
        struct result;

        template <typename It>
        struct result< ::boost::fusion::detail::poly_prior(It)>
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::remove_const<
                typename ::boost::remove_reference<It>::type
#else
            typedef typename ::std::remove_const<
                typename ::std::remove_reference<It>::type
#endif
            >::type it;
            typedef typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<it, ::boost::fusion::unused_type>
#else
                ::std::is_same<it, ::boost::fusion::unused_type>
#endif
              , ::boost::mpl::identity< ::boost::fusion::unused_type>
              , ::boost::fusion::result_of::prior<it>
            >::type type;
        };

        template <typename It>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::fusion::detail::poly_prior::template result<
            ::boost::fusion::detail::poly_prior(It)
        >::type
        operator()(It const& it) const
        {
            return ::boost::fusion::prior(it);
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        ::boost::fusion::unused_type
        operator()(::boost::fusion::unused_type const&) const
        {
            return ::boost::fusion::unused_type();
        }
    };
}}}

#include <boost/fusion/view/zip_view/zip_view_iterator_fwd.hpp>
#include <boost/fusion/algorithm/transformation/transform.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct prior_impl< ::boost::fusion::zip_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef ::boost::fusion::zip_view_iterator<
                typename ::boost::fusion::result_of::transform<
                    typename Iterator::iterators
                  , ::boost::fusion::detail::poly_prior
                >::type
              , typename Iterator::category
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& it)
            {
                return type(
                    ::boost::fusion::transform(
                        it.iterators_
                      , ::boost::fusion::detail::poly_prior()
                    )
                );
            }
        };
    };
}}}

#endif  // include guard

