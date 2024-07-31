#include <gtest/gtest.h>

TEST (Unittest02, Test1) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a + b, 3);
}

TEST (Unittest02, Test2) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a - b, -1);
}

TEST (Unittest02, Test3) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a * b, 2);
}

TEST (Unittest02, Test4) {
  int a = 1;
  int b = 2;

  EXPECT_EQ(a / b, 0);
}

