/*
 * @Author: Zhisheng Zeng
 * @Date: 2021-09-17 11:51:30
 * @Description:
 * @LastEditors: Zhisheng Zeng
 * @LastEditTime: 2022-01-25 19:31:31
 * @FilePath: Training/test/test_training.cpp
 */

#include <unistd.h>

#include "Variable.h"
#include "gtest/gtest.h"

using namespace training;

/**
 * @brief calculate y = a + b
 *
 */
TEST(BasicTest, test1)
{
  Variable a(5);
  Variable b(5);
  // y = a + b
  Variable y = a.plus(b);

  std::cout << "---------------------------------------------------" << std::endl;
  std::cout << "5 + 5:                               " << 5 + 5 << std::endl;
  std::cout << "y.result():                          " << y.result() << std::endl;
  std::cout << "---------------------------------------------------" << std::endl;

  EXPECT_EQ(5 + 5, y.result());
}

/**
 * @brief calculate y = a * x + b
 *
 */
TEST(BasicTest, test2)
{
  Variable a(3.5);
  Variable x(6);
  Variable b(2.9);
  // y = a * x + b
  Variable y = a.multipliedBy(x).plus(b);

  std::cout << "---------------------------------------------------" << std::endl;
  std::cout << "3.5 * 6 + 2.9:                    " << 3.5 * 6 + 2.9 << std::endl;
  std::cout << "y.result():                       " << y.result() << std::endl;
  std::cout << "---------------------------------------------------" << std::endl;

  EXPECT_EQ(3.5 * 6 + 2.9, y.result());
}

double getNumber()
{
  return rand() % 10;
}

/**
 * @brief calculate y = a * x + b
 *
 */
TEST(RandomTest, test1)
{
  srand((unsigned) time(NULL));

  int n = 10;

  while (n--) {
    double num_a = getNumber();
    double num_x = getNumber();
    double num_b = getNumber();

    Variable a(num_a);
    Variable x(num_x);
    Variable b(num_b);

    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "num_a * num_x + num_b:              " << num_a * num_x + num_b << std::endl;
    std::cout << "a.multipliedBy(x).plus(b).result(): " << a.multipliedBy(x).plus(b).result() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    EXPECT_EQ(num_a * num_x + num_b, a.multipliedBy(x).plus(b).result());
  }
}

/**
 * @brief calculate y = a / x + b
 *
 */
TEST(RandomTest, test2)
{
  srand((unsigned) time(NULL));

  int n = 10;

  while (n--) {
    double num_a = getNumber();
    double num_x = getNumber();
    double num_b = getNumber();

    Variable a(num_a);
    Variable x(num_x);
    Variable b(num_b);

    if (num_x == 0) {
      n++;
      continue;
    }

    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "num_a / num_x + num_b:           " << num_a / num_x + num_b << std::endl;
    std::cout << "a.dividedBy(x).plus(b).result(): " << a.dividedBy(x).plus(b).result() << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    EXPECT_EQ(num_a / num_x + num_b, a.dividedBy(x).plus(b).result());
  }
}

// EXPECT_EQ