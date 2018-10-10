/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 1999-2003 Jeremiah Willcock
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_OUT_05042005_0120)
#define BOOST_OUT_05042005_0120

#include <boost/fusion/sequence/io/detail/out.hpp>
#include <ostream>

namespace boost { namespace fusion
{
    template <typename Sequence>
    inline ::std::ostream& out(::std::ostream& os, Sequence& seq)
    {
        ::boost::fusion::detail::print_sequence(os, seq);
        return os;
    }
}}

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion { namespace operators
{
    template <typename Sequence>
    inline typename ::boost::enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , std::ostream&
    >::type
    operator<<(::std::ostream& os, Sequence const& seq)
    {
        return ::boost::fusion::out(os, seq);
    }
}}}

namespace boost { namespace fusion
{
    using ::boost::fusion::operators::operator<<;
}}

#endif  // include guard

