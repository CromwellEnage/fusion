/*============================================================================
    Copyright (c) 2005-2012 Joel de Guzman
    Copyright (c) 2005-2006 Dan Marsden

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_DEQUE_ITERATOR_26112006_2154)
#define BOOST_FUSION_DEQUE_ITERATOR_26112006_2154

#include <boost/fusion/iterator/iterator_facade.hpp>
#include <boost/fusion/container/deque/detail/keyed_element.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/minus.hpp>
#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/identity.hpp>
#include <boost/mpl/if.hpp>

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
    struct deque_iterator :
        ::boost::fusion::iterator_facade<
            ::boost::fusion::deque_iterator<Seq, Pos>
          , ::boost::fusion::bidirectional_traversal_tag
        >
    {
        typedef Seq sequence;
        typedef ::boost::mpl::int_<Pos> index;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        deque_iterator(Seq& seq) : seq_(seq)
        {
        }

        template <typename Iterator>
        struct value_of :
            ::boost::fusion::detail::keyed_element_value_at<
                typename Iterator::sequence
              , typename Iterator::index
            >
        {
        };

        template <typename Iterator>
        struct deref
        {
            typedef typename ::boost::fusion::detail::keyed_element_value_at<
                typename Iterator::sequence
              , typename Iterator::index
            >::type element_type;

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename ::boost::add_lvalue_reference<
#else
            typedef typename ::std::add_lvalue_reference<
#endif
                typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS) || ( \
        BOOST_WORKAROUND(BOOST_MSVC, >= 1700) && \
        BOOST_WORKAROUND(BOOST_MSVC, < 1800) \
    )
                    ::boost::is_const<typename Iterator::sequence>
#else
                    ::std::is_const<typename Iterator::sequence>
#endif
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                  , ::boost::add_const<element_type>
#else
                  , ::std::add_const<element_type>
#endif
                  , ::boost::mpl::identity<element_type>
                >::type
            >::type type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& it)
            {
                return it.seq_.get(typename Iterator::index());
            }
        };

        template <typename Iterator, typename N>
        struct advance
        {
            typedef typename Iterator::index index;
            typedef typename Iterator::sequence sequence;
            typedef ::boost::fusion
            ::deque_iterator<sequence, (index::value + N::value)> type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(Iterator const& i)
            {
                return type(i.seq_);
            }
        };

        template <typename Iterator>
        struct next :
            ::boost::fusion::deque_iterator<Seq, Pos>
            ::template advance<Iterator, ::boost::mpl::int_<1> >
        {
        };

        template <typename Iterator>
        struct prior :
            ::boost::fusion::deque_iterator<Seq, Pos>
            ::template advance<Iterator, ::boost::mpl::int_<-1> >
        {
        };

        template <typename I1, typename I2>
        struct distance :
            ::boost::mpl::minus<typename I2::index, typename I1::index>
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

        template <typename I1, typename I2>
        struct equal_to :
            ::boost::mpl::equal_to<typename I1::index, typename I2::index>
        {
        };

        Seq& seq_;

     private:
        // silence MSVC warning C4512:
        // assignment operator could not be generated
        deque_iterator& operator=(deque_iterator const&);
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Seq, int Pos>
    struct iterator_traits< ::boost::fusion::deque_iterator<Seq, Pos> >
    {
    };
}
#endif

#endif  // include guard

