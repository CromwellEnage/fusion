/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_VECTOR_ITERATOR_05042005_0635)
#define FUSION_VECTOR_ITERATOR_05042005_0635

#include <boost/fusion/container/vector/vector_iterator_fwd.hpp>
#include <boost/fusion/container/vector/detail/deref_impl.hpp>
#include <boost/fusion/container/vector/detail/value_of_impl.hpp>
#include <boost/fusion/container/vector/detail/next_impl.hpp>
#include <boost/fusion/container/vector/detail/prior_impl.hpp>
#include <boost/fusion/container/vector/detail/advance_impl.hpp>
#include <boost/fusion/container/vector/detail/distance_impl.hpp>
#include <boost/fusion/container/vector/detail/equal_to_impl.hpp>
#include <boost/fusion/support/iterator_base.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Vector, int N>
    struct vector_iterator :
        ::boost::fusion::iterator_base<
            ::boost::fusion::vector_iterator<Vector, N>
        >
    {
        typedef ::boost::mpl::int_<N> index;
        typedef Vector vector;
        typedef ::boost::fusion::vector_iterator_tag fusion_tag;
        typedef ::boost::fusion::random_access_traversal_tag category;
        typedef ::boost::fusion::vector_iterator_identity<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::add_const<Vector>::type
#else
            typename ::std::add_const<Vector>::type
#endif
          , N
        > identity;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        vector_iterator(Vector& in_vec) : vec(in_vec)
        {
        }

        Vector& vec;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        vector_iterator& operator=(vector_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Vector, int N>
    struct iterator_traits< ::boost::fusion::vector_iterator<Vector, N> >
    {
    };
}
#endif

#endif  // include guard

