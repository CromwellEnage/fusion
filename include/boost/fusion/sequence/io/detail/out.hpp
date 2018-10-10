/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 1999-2003 Jeremiah Willcock
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(FUSION_OUT_05052005_0121)
#define FUSION_OUT_05052005_0121

#include <boost/fusion/sequence/io/detail/manip.hpp>
#include <boost/mpl/bool.hpp>

namespace boost { namespace fusion { namespace detail
{
    template <typename Tag>
    struct delimiter_out
    {
        // print a delimiter
        template <typename OS>
        static void
        print(
            OS& os
          , char const* delim
          , ::boost::mpl::false_ = ::boost::mpl::false_()
        )
        {
            ::boost::fusion::detail::string_ios_manip<Tag, OS> manip(os);
            manip.print(delim);
        }

        template <typename OS>
        static void print(OS&, char const*, ::boost::mpl::true_)
        {
        }
    };
}}}

#include <boost/fusion/iterator/deref.hpp>
#include <boost/fusion/iterator/next.hpp>
#include <boost/fusion/iterator/equal_to.hpp>

namespace boost { namespace fusion { namespace detail
{
    struct print_sequence_loop
    {
        template <typename OS, typename First, typename Last>
        static void call(OS&, First const&, Last const&, ::boost::mpl::true_)
        {
        }

        template <typename OS, typename First, typename Last>
        static void
        call(
            OS& os
          , First const& first
          , Last const& last
          , ::boost::mpl::false_
        )
        {
            ::boost::fusion::result_of::equal_to<
                typename ::boost::fusion::result_of::next<First>::type
              , Last
            > is_last;

            os << *first;
            ::boost::fusion::detail::delimiter_out<
                ::boost::fusion::detail::tuple_delimiter_tag
            >::print(os, " ", is_last);
            ::boost::fusion::detail::print_sequence_loop
            ::call(os, ::boost::fusion::next(first), last, is_last);
        }

        template <typename OS, typename First, typename Last>
        static void call(OS& os, First const& first, Last const& last)
        {
            ::boost::fusion::detail::print_sequence_loop::call(
                os
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
    template <typename OS, typename Sequence>
    inline void
    print_sequence(OS& os, Sequence const& seq)
    {
        ::boost::fusion::detail::delimiter_out<
            ::boost::fusion::detail::tuple_open_tag
        >::print(os, "(");
        ::boost::fusion::detail::print_sequence_loop::call(
            os
          , ::boost::fusion::begin(seq)
          , ::boost::fusion::end(seq)
        );
        ::boost::fusion::detail::delimiter_out<
            ::boost::fusion::detail::tuple_close_tag
        >::print(os, ")");
    }
}}}

#endif  // include guard

