/*============================================================================
    Copyright (c) 2001-2011 Joel de Guzman
    Copyright (c) 2011 Eric Niebler

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/container/generation/make_vector.hpp>
#include <boost/fusion/algorithm/iteration/for_each.hpp>
#include <boost/fusion/sequence/comparison.hpp>
#include <boost/core/lightweight_test.hpp>
#include "../sequence/tree.hpp"
#include "increment_and_print.hpp"

namespace test
{
    template <typename F, typename Tree>
    void equality(Tree tree, Tree const& expected)
    {
        boost::fusion::for_each(tree, F());
        BOOST_TEST_EQ(tree, expected);
    }
}

int main()
{
    {
        boost::fusion::for_each(
            boost::fusion::make_tree(
                boost::fusion::make_vector(double(0), 'B')
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(1, 2, long(3))
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('a', 'b', 'c')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(short('d'), 'e', 'f')
                    )
                )
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(4, 5, 6)
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(float(1), 'h', 'i')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('j', 'k', 'l')
                    )
                )
            )
          , test::print()
        );
    }

    {
        test::equality<test::increment>(
            boost::fusion::make_tree(
                boost::fusion::make_vector(double(0), 'B')
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(1, 2, long(3))
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('a', 'b', 'c')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(short('d'), 'e', 'f')
                    )
                )
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(4, 5, 6)
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(float(1), 'h', 'i')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('j', 'k', 'l')
                    )
                )
            )
          , boost::fusion::make_tree(
                boost::fusion::make_vector(double(1), 'C')
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(2, 3, long(4))
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('b', 'c', 'd')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(short('e'), 'f', 'g')
                    )
                )
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(5, 6, 7)
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(float(2), 'i', 'j')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('k', 'l', 'm')
                    )
                )
            )
        );
    }

    {
        test::equality<test::mutable_increment>(
            boost::fusion::make_tree(
                boost::fusion::make_vector(double(0), 'B')
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(1, 2, long(3))
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('a', 'b', 'c')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(short('d'), 'e', 'f')
                    )
                )
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(4, 5, 6)
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(float(1), 'h', 'i')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('j', 'k', 'l')
                    )
                )
            )
          , boost::fusion::make_tree(
                boost::fusion::make_vector(double(1), 'C')
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(2, 3, long(4))
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('b', 'c', 'd')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(short('e'), 'f', 'g')
                    )
                )
              , boost::fusion::make_tree(
                    boost::fusion::make_vector(5, 6, 7)
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector(float(2), 'i', 'j')
                    )
                  , boost::fusion::make_tree(
                        boost::fusion::make_vector('k', 'l', 'm')
                    )
                )
            )
        );
    }

    return boost::report_errors();
}

