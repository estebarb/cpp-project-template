#include <gtest/gtest.h>

#include <fibonacci.hpp>

TEST(Fibonacci, FibonacciZero) { EXPECT_EQ(0, fibonacci(0)); }

TEST(Fibonacci, FibonacciOne) { EXPECT_EQ(1, fibonacci(1)); }

TEST(Fibonacci, FibonacciTwo) { EXPECT_EQ(1, fibonacci(2)); }

TEST(Fibonacci, FibonacciThree) { EXPECT_EQ(2, fibonacci(3)); }
