/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_BEGIN_IMPL_07162005_0115)
#define FUSION_BEGIN_IMPL_07162005_0115

#include <boost/fusion/sequence/intrinsic_fwd.hpp>
#include <boost/fusion/view/joint_view/joint_view_fwd.hpp>
#include <boost/fusion/view/joint_view/joint_view_iterator_fwd.hpp>
#include <boost/fusion/iterator/equal_to.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/if.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct begin_impl< ::boost::fusion::joint_view_tag>
    {
        template <typename Sequence>
        struct apply
        {
            typedef typename Sequence::first_type first_type;
            typedef typename Sequence::last_type last_type;
            typedef typename Sequence::concat_type concat_type;
            typedef typename Sequence::category category;
            typedef ::boost::fusion::result_of
            ::equal_to<first_type, last_type> equal_to;

            typedef typename ::boost::mpl::if_<
                equal_to
              , concat_type
              , ::boost::fusion::joint_view_iterator<
                    category
                  , first_type
                  , last_type
                  , concat_type
                >
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s, ::boost::mpl::true_)
            {
                return s.concat();
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s, ::boost::mpl::false_)
            {
                return type(s.first(), s.concat());
            }

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Sequence& s)
            {
                return ::boost::fusion::extension::begin_impl<
                    ::boost::fusion::joint_view_tag
                >::template apply<Sequence>::call(s, equal_to());
            }
        };
    };
}}}

#endif  // include guard

