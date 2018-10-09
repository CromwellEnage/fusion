/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_STD_TUPLE_ITERATOR_09112011_1905)
#define FUSION_STD_TUPLE_ITERATOR_09112011_1905

#include <boost/fusion/iterator/iterator_facade.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/eval_if.hpp>
#include <tuple>
#include <utility>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/is_same.hpp>
#else
#include <type_traits>
#endif

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
#include <boost/type_traits/is_const.hpp>
#endif

namespace boost { namespace fusion
{
    template <typename Tuple, int Index>
    struct std_tuple_iterator_identity;

    template <typename Tuple, int Index>
    struct std_tuple_iterator :
        ::boost::fusion::iterator_facade<
            ::boost::fusion::std_tuple_iterator<Tuple, Index>
          , ::boost::fusion::random_access_traversal_tag
        >
    {
        typedef Tuple tuple_type;
        static int const index = Index;
        typedef ::boost::fusion::std_tuple_iterator_identity<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typename ::boost::add_const<Tuple>::type
#else
            typename ::std::add_const<Tuple>::type
#endif
          , Index
        >
        identity;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit std_tuple_iterator(Tuple& t) : tuple(t)
        {
        }

        Tuple& tuple;

        template <typename Iterator>
        struct value_of :
            ::std::tuple_element<
                Iterator::index
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
              , typename ::boost::remove_const<
#else
              , typename ::std::remove_const<
#endif
                    typename Iterator::tuple_type
                >::type
            >
        {
        };

        template <typename Iterator>
        struct deref
        {
            typedef typename ::boost::fusion::std_tuple_iterator<Tuple, Index>
            ::template value_of<Iterator>::type element;
            typedef typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                ::boost::is_const<typename Iterator::tuple_type>
#else
                ::std::is_const<typename Iterator::tuple_type>
#endif
              , ::boost::fusion::detail::cref_result<element>
              , ::boost::fusion::detail::ref_result<element>
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& iter)
            {
                return ::std::get<Index>(iter.tuple);
            }
        };

        template <typename Iterator, typename N>
        struct advance
        {
            static int const index = Iterator::index;
            typedef typename Iterator::tuple_type tuple_type;
            typedef ::boost::fusion
            ::std_tuple_iterator<tuple_type, (index + N::value)> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.tuple);
            }
        };

        template <typename Iterator>
        struct next :
            ::boost::fusion::std_tuple_iterator<Tuple, Index>
            ::template advance<Iterator, ::boost::mpl::int_<1> >
        {
        };

        template <typename Iterator>
        struct prior :
            ::boost::fusion::std_tuple_iterator<Tuple, Index>
            ::template advance<Iterator, ::boost::mpl::int_<-1> >
        {
        };

        template <typename I1, typename I2>
        struct equal_to :
            ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<typename I1::identity, typename I2::identity>
#else
                ::std::is_same<typename I1::identity, typename I2::identity>
#endif
              , ::boost::mpl::true_
              , ::boost::mpl::false_
            >::type
        {
        };

        template <typename First, typename Last>
        struct distance
        {
            typedef ::boost::mpl::int_<(Last::index - First::index)> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(First const&, Last const&)
            {
                return type();
            }
        };
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Tuple, int Index>
    struct iterator_traits<
        ::boost::fusion::std_tuple_iterator<Tuple, Index>
    >
    {
    };
}
#endif

#endif  // include guard

