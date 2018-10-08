/*============================================================================
    Copyright (c) 2005-2013 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_MAP_ITERATOR_02042013_0835)
#define BOOST_FUSION_MAP_ITERATOR_02042013_0835

#include <boost/fusion/iterator/iterator_facade.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/minus.hpp>
#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/if.hpp>
#include <boost/type_traits/declval.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/add_const.hpp>
#include <boost/type_traits/add_lvalue_reference.hpp>
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
    template <typename Seq, int Pos>
    struct map_iterator :
        ::boost::fusion::iterator_facade<
            ::boost::fusion::map_iterator<Seq, Pos>
          , typename Seq::category
        >
    {
        typedef Seq sequence;
        typedef ::boost::mpl::int_<Pos> index;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        map_iterator(Seq& seq) : seq_(seq)
        {
        }

        template <typename Iterator>
        struct value_of
        {
            typedef typename Iterator::sequence sequence;
            typedef typename Iterator::index index;
            typedef decltype(
                ::boost::declval<sequence>().get_val(index())
            ) type;
        };

        template <typename Iterator>
        struct value_of_data
        {
            typedef typename Iterator::sequence sequence;
            typedef typename Iterator::index index;
            typedef decltype(
                ::boost::declval<sequence>().get_val(index()).second
            ) type;
        };

        template <typename Iterator>
        struct key_of
        {
            typedef typename Iterator::sequence sequence;
            typedef typename Iterator::index index;
            typedef decltype(
                ::boost::declval<sequence>().get_key(index())
            ) key_identity_type;
            typedef typename key_identity_type::type type;
        };

        template <typename Iterator>
        struct deref
        {
            typedef typename Iterator::sequence sequence;
            typedef typename Iterator::index index;
            typedef decltype(
                ::boost::declval<sequence>().get(index())
            ) type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& it)
            {
                return it.seq_.get(typename Iterator::index());
            }
        };

        template <typename Iterator>
        struct deref_data
        {
            typedef typename Iterator::sequence sequence;
            typedef typename Iterator::index index;

            typedef decltype(
                ::boost::declval<sequence>().get(index()).second
            ) second_type_;

            typedef typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                ::boost::is_const<sequence>
#else
                ::std::is_const<sequence>
#endif
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
              , typename ::boost::add_const<second_type_>::type
#else
              , typename ::std::add_const<second_type_>::type
#endif
              , second_type_
            >::type second_type;

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::add_lvalue_reference<
#else
            typedef typename ::std::add_lvalue_reference<
#endif
                second_type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& it)
            {
                return it.seq_.get(typename Iterator::index()).second;
            }
        };

        template <typename Iterator, typename N>
        struct advance
        {
            typedef typename Iterator::index index;
            typedef typename Iterator::sequence sequence;
            typedef ::boost::fusion::map_iterator<
                sequence
              , (index::value + N::value)
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.seq_);
            }
        };

        template <typename Iterator>
        struct next :
            ::boost::fusion::map_iterator<Seq, Pos>
            ::template advance<Iterator, ::boost::mpl::int_<1> >
        {
        };

        template <typename Iterator>
        struct prior :
            ::boost::fusion::map_iterator<Seq, Pos>
            ::template advance<Iterator, ::boost::mpl::int_<-1> >
        {
        };

        template <typename I1, typename I2>
        struct distance
        {
            typedef typename ::boost::mpl::minus<
                typename I2::index
              , typename I1::index
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(I1 const&, I2 const&)
            {
                return type();
            }
        };

        template<typename I1, typename I2>
        struct equal_to :
            ::boost::mpl::equal_to<typename I1::index, typename I2::index>
        {
        };

        Seq& seq_;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        map_iterator& operator=(map_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Seq, int Pos>
    struct iterator_traits< ::boost::fusion::map_iterator<Seq, Pos> >
    {
    };
}
#endif

#endif  // include guard

