#include "pch.h"
#include "../primefactor/prime-factors.cpp"

#include <vector>

using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime.of(2));
}