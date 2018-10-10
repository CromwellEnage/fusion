/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 1999-2003 Jeremiah Willcock
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_IN_05052005_0121)
#define FUSION_IN_05052005_0121

#include <boost/fusion/sequence/io/detail/manip.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Tag>
    struct delimiter_in
    {
        // read a delimiter
        template <typename IS>
        static void
        read(
            IS& is
          , char const* delim
          , ::boost::mpl::false_ = ::boost::mpl::false_()
        )
        {
            ::boost::fusion::detail::string_ios_manip<Tag, IS> manip(is);
            manip.read(delim);
        }

        template <typename IS>
        static void read(IS&, char const*, ::boost::mpl::true_)
        {
        }
    };
}}}

#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    struct read_sequence_loop
    {
        template <typename IS, typename First, typename Last>
        static void call(IS&, First const&, Last const&, ::boost::mpl::true_)
        {
        }

        template <typename IS, typename First, typename Last>
        static void
        call(
            IS& is
          , First const& first
          , Last const& last
          , ::boost::mpl::false_
        )
        {
            ::boost::fusion::result_of::equal_to<
                typename ::boost::fusion::result_of::next<First>::type
              , Last
            > is_last;

            is >> *first;
            ::boost::fusion::detail::delimiter_in<
                ::boost::fusion::detail::tuple_delimiter_tag
            >::read(is, " ", is_last);
            ::boost::fusion::detail::read_sequence_loop
            ::call(is, ::boost::fusion::next(first), last, is_last);
        }

        template <typename IS, typename First, typename Last>
        static void call(IS& is, First const& first, Last const& last)
        {
            ::boost::fusion::detail::read_sequence_loop::call(
                is
              , first
              , last
              , ::boost::fusion::result_of::equal_to<First, Last>()
            );
        }
    };
}}}

#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/sequence/intrinsic/end.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename IS, typename Sequence>
    inline void read_sequence(IS& is, Sequence& seq)
    {
        ::boost::fusion::detail::delimiter_in<
            ::boost::fusion::detail::tuple_open_tag
        >::read(is, "(");
        ::boost::fusion::detail::read_sequence_loop::call(
            is
          , ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
        ::boost::fusion::detail::delimiter_in<
            ::boost::fusion::detail::tuple_close_tag
        >::read(is, ")");
    }
}}}

#endif  // include guard

