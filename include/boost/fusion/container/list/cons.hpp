/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2005 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_CONS_07172005_0843)
#define FUSION_CONS_07172005_0843

#include <boost/fusion/container/list/cons_fwd.hpp>
#include <boost/fusion/container/list/nil.hpp>
#include <boost/fusion/container/list/cons_iterator.hpp>
#include <boost/fusion/container/list/detail/empty_impl.hpp>
#include <boost/fusion/container/list/detail/begin_impl.hpp>
#include <boost/fusion/container/list/detail/end_impl.hpp>
#include <boost/fusion/container/list/detail/at_impl.hpp>
#include <boost/fusion/container/list/detail/value_at_impl.hpp>
#include <boost/fusion/sequence/intrinsic/size.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/support/sequence_base.hpp>
#include <boost/fusion/support/is_sequence.hpp>
#include <boost/fusion/support/traversal_tags_fwd.hpp>
#include <boost/fusion/support/special_tags_fwd.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/fusion/support/detail/enabler.hpp>
#include <boost/fusion/support/detail/access.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/int.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/eval_if.hpp>
#include <boost/core/enable_if.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/is_base_of.hpp>
#include <boost/type_traits/is_convertible.hpp>
#else
#include <type_traits>
#endif

namespace boost { namespace fusion
{
    template <typename Car, typename Cdr /*= nil_*/>
    struct cons :
        ::boost::fusion::sequence_base< ::boost::fusion::cons<Car, Cdr> >
    {
        typedef ::boost::mpl::int_<(Cdr::size::value + 1)> size;
        typedef ::boost::fusion::cons_tag fusion_tag;

        // This gets picked up by MPL.
        typedef ::boost::fusion::fusion_sequence_tag tag;

        typedef ::boost::mpl::false_ is_view;
        typedef ::boost::fusion::forward_traversal_tag category;
        typedef Car car_type;
        typedef Cdr cdr_type;

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons() : car(), cdr()
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        explicit cons(
            typename ::boost::fusion::detail::call_param<Car>::type in_car
        ) : car(in_car), cdr()
        {
        }

        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons(
            typename ::boost::fusion::detail::call_param<Car>::type in_car
          , typename ::boost::fusion::detail::call_param<Cdr>::type in_cdr
        ) : car(in_car), cdr(in_cdr)
        {
        }
        
        template <typename Car2, typename Cdr2>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons(
            ::boost::fusion::cons<Car2, Cdr2> const& rhs
        ) : car(rhs.car), cdr(rhs.cdr)
        {
        }

#if BOOST_WORKAROUND(BOOST_GCC, / 100 == 406) && \
    !defined(BOOST_NO_CXX11_FUNCTION_TEMPLATE_DEFAULT_ARGS)
        // Workaround for `array used as initializer` compile error
        // on gcc 4.6 w/ c++0x.
        template <typename = void>
#endif
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons(cons const& rhs) : car(rhs.car), cdr(rhs.cdr)
        {
        }

        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        cons(
            Sequence const& seq
          , typename ::boost::enable_if<
                typename ::boost::mpl::eval_if<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    ::boost::is_base_of<cons, Sequence>
#else
                    ::std::is_base_of<cons, Sequence>
#endif
                  , ::boost::mpl::false_
                  , ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                        ::boost::is_convertible<Sequence, Car>
#else
                        ::std::is_convertible<Sequence, Car>
#endif
                      , ::boost::mpl::false_
                      , ::boost::fusion::traits::is_sequence<Sequence>
                    >
                >::type // use copy to car instead
              , ::boost::fusion::detail::enabler_
            >::type = ::boost::fusion::detail::enabler
        ) : car(*::boost::fusion::begin(seq))
          , cdr(
                ::boost::fusion::next(::boost::fusion::begin(seq))
              , ::boost::mpl::true_()
            )
        {
        }

        template <typename Iterator>
        BOOST_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons(
            Iterator const& iter
          , ::boost::mpl::true_ /*this_is_an_iterator*/
        ) : car(*iter)
          , cdr(::boost::fusion::next(iter), ::boost::mpl::true_())
        {
        }

        template <typename Car2, typename Cdr2>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons& operator=(::boost::fusion::cons<Car2, Cdr2> const& rhs)
        {
            car = rhs.car;
            cdr = rhs.cdr;
            return *this;
        }

        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        cons& operator=(cons const& rhs)
        {
            car = rhs.car;
            cdr = rhs.cdr;
            return *this;
        }

        template <typename Sequence>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        typename ::boost::enable_if<
            typename ::boost::mpl::if_<
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                ::boost::is_convertible<Sequence, Car>
#else
                ::std::is_convertible<Sequence, Car>
#endif
              , ::boost::mpl::false_
              , ::boost::fusion::traits::is_sequence<Sequence>
            >::type
          , cons&
        >::type
        operator=(Sequence const& seq)
        {
            typedef typename ::boost::fusion::result_of::begin<
                Sequence const
            >::type Iterator;
            Iterator iter = ::boost::fusion::begin(seq);
            this->assign_from_iter(iter);
            return *this;
        }

        template <typename Iterator>
        BOOST_CXX14_CONSTEXPR BOOST_FUSION_GPU_ENABLED
        void assign_from_iter(Iterator const& iter)
        {
            car = *iter;
            cdr.assign_from_iter(::boost::fusion::next(iter));
        }

        car_type car;
        cdr_type cdr;
    };
}}

#endif  // include guard

