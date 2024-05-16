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

TEST_F(PrimeFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime.of(3));
}

TEST_F(PrimeFixture, Of4) {
	expected = { 2,2 };
	EXPECT_EQ(expected, prime.of(4));
}

TEST_F(PrimeFixture, Of5) {
	expected = { 5 };
	EXPECT_EQ(expected, prime.of(5));
}

TEST_F(PrimeFixture, Of6) {
	expected = { 2,3 };
	EXPECT_EQ(expected, prime.of(6));
}

TEST_F(PrimeFixture, Of7) {
	expected = { 7 };
	EXPECT_EQ(expected, prime.of(7));
}


TEST_F(PrimeFixture, Of8) {
	expected = { 2,2,2 };
	EXPECT_EQ(expected, prime.of(8));
}

TEST_F(PrimeFixture, Of9) {
	expected = { 3,3 };
	EXPECT_EQ(expected, prime.of(9));
}