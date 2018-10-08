/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONS_ITERATOR_07172005_0849)
#define FUSION_CONS_ITERATOR_07172005_0849

namespace boost { namespace fusion
{
    template <typename Cons>
    struct cons_iterator_identity;
}}

#include <boost/fusion/container/list/cons_fwd.hpp>
#include <boost/fusion/container/list/cons_iterator_fwd.hpp>
#include <boost/fusion/support/iterator_base.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    struct nil_iterator :
        ::boost::fusion::iterator_base< ::boost::fusion::nil_iterator>
    {
        typedef ::boost::fusion::forward_traversal_tag category;
        typedef ::boost::fusion::cons_iterator_tag fusion_tag;
        typedef ::boost::fusion::nil_ cons_type;
        typedef ::boost::fusion::cons_iterator_identity<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            ::boost::add_const< ::boost::fusion::nil_>::type
#else
            ::std::add_const< ::boost::fusion::nil_>::type
#endif
        > identity;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        nil_iterator() BOOST_NOEXCEPT
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit nil_iterator(::boost::fusion::nil_ const&) BOOST_NOEXCEPT
        {
        }
    };

    template <>
    struct cons_iterator< ::boost::fusion::nil_> :
        ::boost::fusion::nil_iterator 
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons_iterator() BOOST_NOEXCEPT
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit cons_iterator(::boost::fusion::nil_ const&) BOOST_NOEXCEPT
        {
        }
    };

    template <>
    struct cons_iterator< ::boost::fusion::nil_ const> :
        ::boost::fusion::nil_iterator 
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons_iterator() BOOST_NOEXCEPT
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit cons_iterator(::boost::fusion::nil_ const&) BOOST_NOEXCEPT
        {
        }
    };
}}

#include <boost/fusion/container/list/list_fwd.hpp>

namespace boost { namespace fusion
{
    template <>
    struct cons_iterator< ::boost::fusion::list<> > :
        ::boost::fusion::nil_iterator 
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons_iterator() BOOST_NOEXCEPT
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit cons_iterator(::boost::fusion::nil_ const&) BOOST_NOEXCEPT
        {
        }
    };

    template <>
    struct cons_iterator< ::boost::fusion::list<> const> :
        ::boost::fusion::nil_iterator 
    {
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons_iterator() BOOST_NOEXCEPT
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit cons_iterator(::boost::fusion::nil_ const&) BOOST_NOEXCEPT
        {
        }
    };
}}

#include <boost/fusion/container/list/detail/deref_impl.hpp>
#include <boost/fusion/container/list/detail/value_of_impl.hpp>
#include <boost/fusion/container/list/detail/next_impl.hpp>
#include <boost/fusion/container/list/detail/equal_to_impl.hpp>

namespace boost { namespace fusion
{
    template <typename Cons>
    struct cons_iterator :
        ::boost::fusion::iterator_base< ::boost::fusion::cons_iterator<Cons> >
    {
        typedef ::boost::fusion::cons_iterator_tag fusion_tag;
        typedef ::boost::fusion::forward_traversal_tag category;
        typedef Cons cons_type;
        typedef ::boost::fusion::cons_iterator_identity<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::add_const<Cons>::type
#else
            typename ::std::add_const<Cons>::type
#endif
        > identity;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit cons_iterator(cons_type& in_cons) BOOST_NOEXCEPT :
            cons(in_cons)
        {
        }

        cons_type& cons;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        cons_iterator& operator=(cons_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Cons>
    struct iterator_traits< ::boost::fusion::cons_iterator<Cons> >
    {
    };
}
#endif

#endif  // include guard

