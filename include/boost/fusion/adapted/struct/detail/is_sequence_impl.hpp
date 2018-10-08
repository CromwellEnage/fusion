/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden
    Copyright (c) 2009-2010 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_DETAIL_IS_SEQUENCE_IMPL_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_DETAIL_IS_SEQUENCE_IMPL_HPP

#include <boost/fusion/support/is_sequence_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace extension
{
    template <>
    struct is_sequence_impl< ::boost::fusion::struct_tag>
    {
        template <typename Seq>
        struct apply : ::boost::mpl::true_
        {
        };
    };

    template <>
    struct is_sequence_impl< ::boost::fusion::assoc_struct_tag> :
        ::boost::fusion::extension
        ::is_sequence_impl< ::boost::fusion::struct_tag>
    {
    };
}}}

#endif  // include guard

