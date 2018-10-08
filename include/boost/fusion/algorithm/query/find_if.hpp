/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_FIND_IF_05052005_1108)
#define FUSION_FIND_IF_05052005_1108

#include <boost/fusion/algorithm/query/find_if_fwd.hpp>
#include <boost/fusion/algorithm/query/detail/find_if.hpp>
#include <boost/fusion/algorithm/query/detail/segmented_find_if.hpp>
#include <boost/fusion/iterator/value_of.hpp>
#include <boost/fusion/support/is_segmented.hpp>
#include <boost/mpl/bind.hpp>
#include <boost/mpl/lambda.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/quote.hpp>

namespace boost { namespace fusion { namespace result_of
{
    template <typename Sequence, typename Pred>
    struct find_if :
        ::boost::mpl::if_<
            ::boost::fusion::traits::is_segmented<Sequence>
          , ::boost::fusion::detail
            ::result_of_segmented_find_if<Sequence, Pred>
          , ::boost::fusion::detail::result_of_find_if<
                Sequence
              , ::boost::mpl::bind1<
                    typename ::boost::mpl::lambda<Pred>::type
                  , ::boost::mpl::bind1<
                        ::boost::mpl::quote1<
                            ::boost::fusion::result_of::value_of
                        >
                      , ::boost::mpl::_1
                    >
                >
            >
        >::type
    {
    };
}}}

#include <boost/fusion/support/config.hpp>

namespace boost { namespace fusion
{
    template <typename Pred, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::find_if<Sequence const, Pred>::type const
    find_if(Sequence const& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::find_if<Sequence const, Pred>::filter filter;
        return filter::call(seq);
    }
}}

#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Pred, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::lazy_disable_if<
        typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
            ::boost::is_const<Sequence>
#else
            ::std::is_const<Sequence>
#endif
          , ::boost::mpl::true_
          , ::boost::mpl::false_
        >::type
      , ::boost::fusion::result_of::find_if<Sequence, Pred>
    >::type const
    find_if(Sequence& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::find_if<Sequence, Pred>::filter filter;
        return filter::call(seq);
    }
}}

#endif  // include guard

