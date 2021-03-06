/*============================================================================
    Copyright (c) 2014-2015 Kohei Takahashi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_CONTAINER_VECTOR_VECTOR_ITERATOR_FWD_HPP)
#define BOOST_FUSION_CONTAINER_VECTOR_VECTOR_ITERATOR_FWD_HPP

namespace boost { namespace fusion
{
    struct vector_iterator_tag;

    template <typename Vector, int N>
    struct vector_iterator_identity;

    template <typename Vector, int N>
    struct vector_iterator;
}}

#endif  // include guard

