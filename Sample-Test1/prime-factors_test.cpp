#include "pch.h"
#include "../primefactor/prime-factors.cpp"

#include <vector>

using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime;
	vector<int> expected = {};
  EXPECT_EQ(expected, prime.of(1));
}