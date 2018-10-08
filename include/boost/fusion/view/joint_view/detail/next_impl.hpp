/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_NEXT_IMPL_07162005_0136)
#define FUSION_NEXT_IMPL_07162005_0136

#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/view/joint_view/joint_view_iterator_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct next_impl< ::boost::fusion::joint_view_iterator_tag>
    {
        template <typename Iterator>
        struct apply
        {
            typedef typename Iterator::first_type first_type;
            typedef typename Iterator::last_type last_type;
            typedef typename Iterator::concat_type concat_type;
            typedef typename Iterator::category category;
            typedef typename ::boost::fusion::result_of::next<
                first_type
            >::type next_type;
            typedef ::boost::fusion::result_of::equal_to<
                next_type
              , last_type
            > equal_to;

            typedef typename ::boost::mpl::if_<
                equal_to
              , concat_type
              , ::boost::fusion::joint_view_iterator<
                    category
                  , next_type
                  , last_type
                  , concat_type
                >
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i, ::boost::mpl::true_)
            {
                return i.concat;
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i, ::boost::mpl::false_)
            {
                return type(::boost::fusion::next(i.first), i.concat);
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return ::boost::fusion::extension::next_impl<
                    ::boost::fusion::joint_view_iterator_tag
                >::template apply<Iterator>::call(i, equal_to());
            }
        };
    };
}}}

#endif  // include guard

