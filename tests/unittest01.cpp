#include <gtest/gtest.h>


TEST (Unittest01, Test1) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a + b, 3);
}

TEST (Unittest01, Test2) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a - b, -1);
}

TEST (Unittest01, Test3) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a * b, 2);
}

TEST (Unittest01, Test4) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a / b, 0);
}

