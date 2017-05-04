
//  (C) Copyright John Maddock 2010.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <gmpxx.h>
#include <boost/math/common_factor.hpp>

template mpz_class boost::integer::gcd(const mpz_class&, const mpz_class&);
template mpz_class boost::integer::lcm(const mpz_class&, const mpz_class&);

int main()
{
}
