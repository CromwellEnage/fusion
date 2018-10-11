/*============================================================================
    Copyright (C) 2015 Kohei Takahshi

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(LIBS_FUSION_TEST_SEQUENCE_NEST_HPP)
#define LIBS_FUSION_TEST_SEQUENCE_NEST_HPP

#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/fusion/include/as_deque.hpp>
#include <boost/fusion/include/as_list.hpp>
#include <boost/fusion/include/as_vector.hpp>
#include <boost/fusion/include/begin.hpp>
#include <boost/fusion/include/is_sequence.hpp>
#include <boost/fusion/include/size.hpp>
#include <boost/fusion/include/value_of.hpp>
#include <boost/fusion/support/config.hpp>

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
#include <boost/type_traits/integral_constant.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/remove_reference.hpp>
#else
#include <type_traits>
#endif

#include <utility>
#include "fixture.hpp"

namespace test_detail
{
    struct adapted_sequence
    {
        adapted_sequence() : value_()
        {
        }

        explicit adapted_sequence(int value) : value_(value)
        {
        }

        int value_;
    };

    bool
    operator==(
        test_detail::adapted_sequence const& lhs
      , test_detail::adapted_sequence const& rhs
    )
    {
        return lhs.value_ == rhs.value_;
    }

    bool
    operator!=(
        test_detail::adapted_sequence const& lhs
      , test_detail::adapted_sequence const& rhs
    )
    {
        return lhs.value_ != rhs.value_;
    }

    template <template <typename> class Scenario>
    struct can_convert_using
    {
        template <typename T>
        struct to
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            static bool can_convert_(boost::true_type /* skip */)
#else
            static bool can_convert_(std::true_type /* skip */)
#endif
            {
                return true;
            }

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            static bool can_convert_(boost::false_type /* skip */)
#else
            static bool can_convert_(std::false_type /* skip */)
#endif
            {
                return test_detail::run<Scenario<T> >(
                    typename boost::fusion::result_of::as_deque<T>::type()
                ) && test_detail::run<Scenario<T> >(
                    typename boost::fusion::result_of::as_list<T>::type()
                ) && test_detail::run<Scenario<T> >(
                    typename boost::fusion::result_of::as_vector<T>::type()
                );
            }

            template <typename Source, typename Expected>
            bool operator()(Source const&, Expected const&) const
            {
                // bug when converting single element sequences in C++03 and
                // C++11... 
                // not_<not_<is_convertible<sequence<sequence<int>>, int >
                // is invalid check
                typedef typename boost::fusion::result_of
                ::size<T>::type seq_size;
                return test_detail::can_convert_using<Scenario>
                ::template to<T>::can_convert_(
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                    boost::integral_constant<bool, (seq_size::value == 1)>()
#else
                    std::integral_constant<bool, (seq_size::value == 1)>()
#endif
                );
            }
        };
    };

    template <typename T>
    struct can_construct_from_elements
    {
        template <int Size>
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        static bool can_construct_(boost::integral_constant<int, Size>)
#else
        static bool can_construct_(std::integral_constant<int, Size>)
#endif
        {
            return (Size == 0) || (Size == 2) || (Size == 3);
        }

#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
        static bool can_construct_(boost::integral_constant<int, 1>)
#else
        static bool can_construct_(std::integral_constant<int, 1>)
#endif
        {
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
            typedef typename boost::remove_reference<
                typename boost::remove_const<
#else
            typedef typename std::remove_reference<
                typename std::remove_const<
#endif
                    typename boost::fusion::result_of::value_of<
                        typename boost::fusion::result_of::begin<T>::type
                    >::type
                >::type
            >::type element;

            return test_detail::run<
                test_detail::can_construct<T>
            >(element(), T());
        }

        template <typename Source, typename Expected>
        bool operator()(Source const&, Expected const&) const
        {
            // constructing a nested sequence of one is the complicated case
            // to disambiguate from a conversion-copy, so focus on that
            typedef typename boost::fusion::result_of::size<T>::type seq_size;
            return test_detail::can_construct_from_elements<T>
            ::can_construct_(
#if defined(BOOST_FUSION_USES_BOOST_VICE_CXX11_TYPE_TRAITS)
                boost::integral_constant<int, seq_size::value>()
#else
                std::integral_constant<int, seq_size::value>()
#endif
            );
        }
    };

    template <typename T>
    struct can_nest
    {
        template <typename Source, typename Expected>
        bool operator()(Source const& source, Expected const& expected) const
        {
            return test_detail::run<
                test_detail::can_copy<T>
            >(source, expected) && test_detail::run<
                test_detail::can_convert_using<test_detail::can_copy>::to<T>
            >(source, expected) && test_detail::run<
                test_detail::can_construct_from_elements<T>
            >(source, expected);
        }
    };
} // test_detail

BOOST_FUSION_ADAPT_STRUCT(test_detail::adapted_sequence, (int, data))

template <template <typename> class Scenario>
void test()
{
    BOOST_TEST((
        boost::fusion::traits::is_sequence<
            test_detail::adapted_sequence
        >::value
    ));
    BOOST_TEST((boost::fusion::size(test_detail::adapted_sequence()) == 1));
    BOOST_TEST((
        test_detail::run< Scenario< FUSION_SEQUENCE< FUSION_SEQUENCE<> > > >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<> >()
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE< FUSION_SEQUENCE<>, int> >
        >(FUSION_SEQUENCE< FUSION_SEQUENCE<>, int>(FUSION_SEQUENCE<>(), 325))
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<int, FUSION_SEQUENCE<> > >
        >(FUSION_SEQUENCE<int, FUSION_SEQUENCE<> >(325, FUSION_SEQUENCE<>()))
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<int, FUSION_SEQUENCE<>, float> >
        >(
            FUSION_SEQUENCE<int, FUSION_SEQUENCE<>, float>(
                325, FUSION_SEQUENCE<>(), 2.0f
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE< FUSION_SEQUENCE<int> > >
        >(FUSION_SEQUENCE< FUSION_SEQUENCE<int> >(FUSION_SEQUENCE<int>(400)))
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<test_detail::adapted_sequence> >
        >(
            FUSION_SEQUENCE<test_detail::adapted_sequence>(
                test_detail::adapted_sequence(400)
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE< FUSION_SEQUENCE<int>, int> >
        >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<int>, int>(
                FUSION_SEQUENCE<int>(325), 400
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<test_detail::adapted_sequence, int> >
        >(
            FUSION_SEQUENCE<test_detail::adapted_sequence, int>(
                test_detail::adapted_sequence(325), 400
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<int, FUSION_SEQUENCE<int> > >
        >(
            FUSION_SEQUENCE<int, FUSION_SEQUENCE<int> >(
                325, FUSION_SEQUENCE<int>(400)
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<int, test_detail::adapted_sequence> >
        >(
            FUSION_SEQUENCE<int, test_detail::adapted_sequence>(
                325, test_detail::adapted_sequence(450)
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<int, FUSION_SEQUENCE<int>, int> >
        >(
            FUSION_SEQUENCE<int, FUSION_SEQUENCE<int>, int>(
                500, FUSION_SEQUENCE<int>(350), 200
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE<int, test_detail::adapted_sequence, int>
            >
        >(
            FUSION_SEQUENCE<int, test_detail::adapted_sequence, int>(
                300, test_detail::adapted_sequence(500), 400
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE< FUSION_SEQUENCE<int, int> > >
        >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<int, int> >(
                FUSION_SEQUENCE<int, int>(450, 500)
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE< FUSION_SEQUENCE<int, int>, int> >
        >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<int, int>, int>(
                FUSION_SEQUENCE<int, int>(450, 500), 150
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<int, FUSION_SEQUENCE<int, int> > >
        >(
            FUSION_SEQUENCE<int, FUSION_SEQUENCE<int, int> >(
                450, FUSION_SEQUENCE<int, int>(500, 150)
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario< FUSION_SEQUENCE<int, FUSION_SEQUENCE<int, int>, int> >
        >(
            FUSION_SEQUENCE<int, FUSION_SEQUENCE<int, int>, int>(
                150, FUSION_SEQUENCE<int, int>(250, 350), 450
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE< FUSION_SEQUENCE<>, FUSION_SEQUENCE<> >
            >
        >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<>, FUSION_SEQUENCE<> >(
                FUSION_SEQUENCE<>(), FUSION_SEQUENCE<>()
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE< FUSION_SEQUENCE<int>, FUSION_SEQUENCE<> >
            >
        >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<int>, FUSION_SEQUENCE<> >(
                FUSION_SEQUENCE<int>(150), FUSION_SEQUENCE<>()
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE< FUSION_SEQUENCE<>, FUSION_SEQUENCE<int> >
            >
        >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<>, FUSION_SEQUENCE<int> >(
                FUSION_SEQUENCE<>(), FUSION_SEQUENCE<int>(500)
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE< FUSION_SEQUENCE<int>, FUSION_SEQUENCE<int> >
            >
        >(
            FUSION_SEQUENCE< FUSION_SEQUENCE<int>, FUSION_SEQUENCE<int> >(
                FUSION_SEQUENCE<int>(155), FUSION_SEQUENCE<int>(255)
            )
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE<
                    FUSION_SEQUENCE<int, int>
                  , FUSION_SEQUENCE<int>
                >
            >
        >(
            FUSION_SEQUENCE<
                FUSION_SEQUENCE<int, int>
              , FUSION_SEQUENCE<int>
            >(FUSION_SEQUENCE<int, int>(222, 333), FUSION_SEQUENCE<int>(444))
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE<
                    FUSION_SEQUENCE<int>
                  , FUSION_SEQUENCE<int, int>
                >
            >
        >(
            FUSION_SEQUENCE<
                FUSION_SEQUENCE<int>
              , FUSION_SEQUENCE<int, int>
            >(FUSION_SEQUENCE<int>(100), FUSION_SEQUENCE<int, int>(300, 400))
        )
    ));
    BOOST_TEST((
        test_detail::run<
            Scenario<
                FUSION_SEQUENCE<
                    FUSION_SEQUENCE<int, int>
                  , FUSION_SEQUENCE<int, int>
                >
            >
        >(
            FUSION_SEQUENCE<
                FUSION_SEQUENCE<int, int>
              , FUSION_SEQUENCE<int, int>
            >(
                FUSION_SEQUENCE<int, int>(600, 700)
              , FUSION_SEQUENCE<int, int>(800, 900)
            )
        )
    ));

    // Ignore desired scenario, and cheat to make these work
    BOOST_TEST((
        test_detail::run<
            test_detail::can_lvalue_construct<
                FUSION_SEQUENCE< FUSION_SEQUENCE<>&>
            >
        >(
            FUSION_SEQUENCE<>()
          , FUSION_SEQUENCE< FUSION_SEQUENCE<> >()
        )
    ));
    BOOST_TEST((
        test_detail::run<
            test_detail::can_construct<
                FUSION_SEQUENCE< FUSION_SEQUENCE<> const&>
            >
        >(
            FUSION_SEQUENCE<>()
          , FUSION_SEQUENCE< FUSION_SEQUENCE<> >()
        )
    ));
    BOOST_TEST((
        test_detail::run<
            test_detail::can_lvalue_construct<
                FUSION_SEQUENCE<FUSION_SEQUENCE<int>&>
            >
        >(
            FUSION_SEQUENCE<int>(300)
          , FUSION_SEQUENCE< FUSION_SEQUENCE<int> >(FUSION_SEQUENCE<int>(300))
        )
    ));
    BOOST_TEST((
        test_detail::run<
            test_detail::can_construct<
                FUSION_SEQUENCE< FUSION_SEQUENCE<int> const&>
            >
        >(
            FUSION_SEQUENCE<int>(400)
          , FUSION_SEQUENCE< FUSION_SEQUENCE<int> >(FUSION_SEQUENCE<int>(400))
        )
    ));
}

#endif  // include guard

