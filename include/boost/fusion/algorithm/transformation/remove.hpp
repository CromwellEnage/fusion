/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_REMOVE_07162005_0818)
#define FUSION_REMOVE_07162005_0818

#include <boost/fusion/view/filter_view/filter_view.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    namespace result_of
    {
        template <typename Sequence, typename T>
        struct remove
        {
            typedef ::boost::fusion::filter_view<
                Sequence
              , ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_same< ::boost::mpl::_, T>
#else
                    ::std::is_same< ::boost::mpl::_, T>
#endif
                  , ::boost::mpl::false_
                  , ::boost::mpl::true_
                >
            > type;
        };
    }

    template <typename T, typename Sequence>
    BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
    inline typename ::boost::fusion::result_of
    ::remove<Sequence const, T>::type
    remove(Sequence const& seq)
    {
        typedef typename ::boost::fusion::result_of
        ::remove<Sequence const, T>::type result_type;
        return result_type(seq);
    }
}}

#endif  // include guard

