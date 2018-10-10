/*============================================================================
    Copyright (c) 1999-2003 Jaakko Jarvi
    Copyright (c) 1999-2003 Jeremiah Willcock
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_IN_05042005_0120)
#define BOOST_IN_05042005_0120

#include <boost/fusion/sequence/io/detail/in.hpp>
#include <istream>

namespace boost { namespace fusion
{
    template <typename Sequence>
    inline std::istream& in(std::istream& is, Sequence& seq)
    {
        ::boost::fusion::detail::read_sequence(is, seq);
        return is;
    }
}}

#include <boost/fusion/support/is_sequence.hpp>
#include <boost/core/enable_if.hpp>

namespace boost { namespace fusion { namespace operators
{
    template <typename Sequence>
    inline typename ::boost::enable_if<
        ::boost::fusion::traits::is_sequence<Sequence>
      , ::std::istream&
    >::type
    operator>>(::std::istream& is, Sequence& seq)
    {
        return ::boost::fusion::in(is, seq);
    }
}}}

namespace boost { namespace fusion
{
    using ::boost::fusion::operators::operator>>;
}}

#endif  // include guard

