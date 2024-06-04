#include <gtest/gtest.h>

#include <fibonacci.hpp>

TEST(Fibonacci, FibonacciZero) { EXPECT_EQ(0, fibonacci(0)); }
