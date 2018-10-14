/*============================================================================
    Copyright (c) 2012 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#include <boost/config.hpp>

#if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
#error "Valid only on compilers that support rvalues"
#endif

#include <boost/core/lightweight_test.hpp>
#include <boost/static_assert.hpp>
#include <boost/assert.hpp>
#include <vector>

namespace test_detail
{
    int copies = 0;

    void incr_copy()
    {
        ++test_detail::copies;
    }

    struct x
    {
        int i;

        x() : i(123)
        {
        }

        x(x&& rhs) : i(rhs.i)
        {
        }

        x& operator=(x&& rhs)
        {
            this->i = rhs.i;
            return *this;
        }

        x(x const& /*rhs*/)
        {
            test_detail::incr_copy();
        }

        x& operator=(x const& /*rhs*/)
        {
            test_detail::incr_copy();
            return *this;
        }
    };

    typedef std::vector<test_detail::x> vector_type;
    extern bool disable_rvo; // to disable RVO

    test_detail::vector_type generate_vec()
    {
        test_detail::vector_type v;
        v.push_back(test_detail::x());

        if (test_detail::disable_rvo)
        {
            return v;
        }

        return test_detail::vector_type();
    }


    template <typename T>
    T move_me(T&& val)
    {
        T r(std::move(val));

        if (test_detail::disable_rvo)
        {
            return r;
        }

        return T();
    }

    typedef FUSION_SEQUENCE return_type;

    test_detail::return_type generate()
    {
        test_detail::return_type r(test_detail::generate_vec());

        if (test_detail::disable_rvo)
        {
            return r;
        }

        return test_detail::return_type();
    }

    typedef FUSION_SEQUENCE2 return_type2;

    test_detail::return_type2 generate2()
    {
        test_detail::return_type2 r(
            test_detail::generate_vec()
          , test_detail::x()
        );

        if (test_detail::disable_rvo)
        {
            return r;
        }

        return test_detail::return_type2();
    }
}

void test()
{
    test_detail::return_type v = test_detail
    ::move_me(test_detail::generate());
    BOOST_TEST(test_detail::copies == 0);

    test_detail::return_type2 v2 = test_detail
    ::move_me(test_detail::generate2());
    BOOST_TEST(test_detail::copies == 0);

    v2 = test_detail::move_me(test_detail::generate2());
    BOOST_TEST(test_detail::copies == 0);

    std::cout << "Copies: " << test_detail::copies << std::endl;
}

namespace test_detail
{
    bool disable_rvo = true;
}

