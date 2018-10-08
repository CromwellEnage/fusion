/*============================================================================
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_SEGMENTED_SIZE_08112006_1141)
#define BOOST_FUSION_SEGMENTED_SIZE_08112006_1141

namespace boost { namespace fusion { namespace detail
{
    //////////////////////////////////////////////////////////////////////////
    // calculates the size of any segmented data structure.
    template <typename Sequence>
    struct segmented_size;
    //////////////////////////////////////////////////////////////////////////

    template <typename Sequence>
    struct unsegmented_size : Sequence::size
    {
    };
}}}

#include <boost/fusion/sequence/intrinsic/segments.hpp>
#include <boost/fusion/mpl/begin.hpp>
#include <boost/fusion/mpl/end.hpp>
#include <boost/fusion/support/is_segmented.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/size_t.hpp>
#include <boost/mpl/fold.hpp>
#include <boost/mpl/plus.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion { namespace detail
{
    template <
        typename Sequence
      , bool IsSegmented = ::boost::fusion::traits::is_segmented<
            Sequence
        >::value
    >
    struct segmented_size_impl :
        ::boost::mpl::fold<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::remove_reference<
                typename ::boost::add_const<
#else
            typename ::std::remove_reference<
                typename ::std::add_const<
#endif
                    typename ::boost::fusion::result_of::segments<
                        Sequence
                    >::type
                >::type
            >::type
          , ::boost::mpl::size_t<0>
          , ::boost::mpl::plus<
                ::boost::mpl::_1
              , ::boost::fusion::detail::segmented_size<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::remove_reference<
#else
                    ::std::remove_reference<
#endif
                        ::boost::mpl::_2
                    >
                >
            >
        >
    {
    };
}}}

#include <boost/fusion/sequence/intrinsic_fwd.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Sequence>
    struct segmented_size_impl<Sequence, false>
      : ::boost::fusion::result_of::size<Sequence>
    {
    };

    template <typename Sequence>
    struct segmented_size : segmented_size_impl<Sequence>::type
    {
    };
}}}

#endif  // include guard

