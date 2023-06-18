#include "src/lib.h"

#include "gtest/gtest.h"

namespace {

class CollatzTest : public ::testing::Test {};

TEST_F(CollatzTest, Answer) {
  EXPECT_EQ(::tsdb2::Collatz(42), 8);
  EXPECT_EQ(::tsdb2::Collatz(43), 29);
}

}  // namespace
