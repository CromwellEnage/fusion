/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_EQUAL_TO_IMPL_20060128_1423)
#define FUSION_EQUAL_TO_IMPL_20060128_1423

#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/mpl.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/transform_view.hpp>
#include <boost/mpl/zip_view.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/mpl/find_if.hpp>
#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/unpack_args.hpp>
#include <boost/mpl/end.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <typename It1, typename It2>
    struct zip_iterators_equal
    {
        typedef ::boost::mpl::zip_view<
            ::boost::mpl::vector2<
                typename It1::iterators
              , typename It2::iterators
            >
        > zipped;
        typedef ::boost::mpl::transform_view<
            zipped
          , ::boost::mpl::unpack_args<
                ::boost::fusion::result_of
                ::equal_to< ::boost::mpl::_, ::boost::mpl::_>
            >
        > transformed;
        typedef typename ::boost::mpl::find_if<
            transformed
          , ::boost::mpl::equal_to< ::boost::mpl::_, ::boost::mpl::false_>
        >::type found;
        typedef typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::is_same<
#else
            ::std::is_same<
#endif
                typename ::boost::mpl::end<transformed>::type
              , found
            >
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type type;
    };
}}}

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct equal_to_impl< ::boost::fusion::zip_view_iterator_tag>
    {
        template <typename It1, typename It2>
        struct apply :
            ::boost::fusion::detail::zip_iterators_equal<It1, It2>::type
        {
        };
    };
}}}

#endif  // include guard

