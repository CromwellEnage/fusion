/*============================================================================
    Copyright (c) 2009 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ITERATOR_BASIC_ITERATOR_HPP)
#define BOOST_FUSION_ITERATOR_BASIC_ITERATOR_HPP

#include <boost/fusion/iterator/iterator_facade.hpp>
#include <boost/fusion/iterator/intrinsic_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/equal_to.hpp>
#include <boost/mpl/minus.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_const.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Tag, typename Category, typename Seq, int Index>
    struct basic_iterator :
        ::boost::fusion::iterator_facade<
            ::boost::fusion::basic_iterator<Tag, Category, Seq, Index>
          , Category
        >
    {
        typedef ::boost::mpl::int_<Index> index;
        typedef Seq seq_type;

        template <typename It>
        struct key_of :
            ::boost::fusion::extension::key_of_impl<Tag>::template apply<It>
        {
        };

        template <typename It>
        struct deref_data :
            ::boost::fusion::extension::deref_data_impl<
                Tag
            >::template apply<It>
        {
        };

        template <typename It>
        struct value_of_data :
            ::boost::fusion::extension::value_of_data_impl<
                Tag
            >::template apply<It>
        {
        };

        template <typename It>
        struct value_of :
            ::boost::fusion::extension::value_of_impl<Tag>::template apply<It>
        {
        };

        template <typename It>
        struct deref :
            ::boost::fusion::extension::deref_impl<Tag>::template apply<It>
        {
        };

        template <typename It, typename N>
        struct advance
        {
            typedef ::boost::fusion::basic_iterator<
                Tag
              , Category
              , Seq
              , (Index + N::value)
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It const& it)
            {
                return type(*it.seq, 0);
            }
        };

        template <typename It>
        struct next :
            ::boost::fusion::basic_iterator<Tag, Category, Seq, Index>
            ::template advance<It, ::boost::mpl::int_<1> >
        {
        };

        template <typename It>
        struct prior :
            ::boost::fusion::basic_iterator<Tag, Category, Seq, Index>
            ::template advance<It, ::boost::mpl::int_<-1> >
        {
        };

        template <typename It1, typename It2>
        struct distance
        {
            typedef ::boost::mpl::minus<
                typename It2::index
              , typename It1::index
            > type;

            BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
            static type call(It1 const&, It2 const&)
            {
                return type();
            }
        };

        template <typename It1, typename It2>
        struct equal_to :
            ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_same<
                    typename ::boost::remove_const<
                        typename It1::seq_type
                    >::type
                  , typename ::boost::remove_const<
                        typename It2::seq_type
                    >::type
#else
                ::std::is_same<
                    typename ::std::remove_const<typename It1::seq_type>::type
                  , typename ::std::remove_const<typename It2::seq_type>::type
#endif
                >
              , ::boost::mpl::equal_to<typename It1::index,typename It2::index>
              , ::boost::mpl::false_
            >::type
        {
        };

        template <typename OtherSeq>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        basic_iterator(
            ::boost::fusion::basic_iterator<
                Tag
              , Category
              , OtherSeq
              , Index
            > const& it
        ) : seq(it.seq)
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        basic_iterator(Seq& in_seq, int) : seq(&in_seq)
        {
        }

        template<typename OtherSeq>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        basic_iterator&
        operator=(
            ::boost::fusion::basic_iterator<
                Tag
              , Category
              , OtherSeq
              , Index
            > const& it
        )
        {
            this->seq = it.seq;
            return *this;
        }

        Seq* seq;
    };
}}

#if defined(BOOST_FUSION_WORKAROUND_FOR_LWG_2408)
namespace std
{
    template <typename Tag, typename Category, typename Seq, int Index>
    struct iterator_traits<
        ::boost::fusion::basic_iterator<Tag, Category, Seq, Index>
    >
    {
    };
}
#endif

#endif  // include guard

