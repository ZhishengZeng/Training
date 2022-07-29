/*
 * @Author: Zhisheng Zeng
 * @Date: 2021-09-17 11:51:30
 * @Description:
 * @LastEditors: Zhisheng Zeng
 * @LastEditTime: 2022-01-25 19:31:31
 * @FilePath: Training/test/main.cpp
 */

#include <iostream>

#include "Variable.h"

using namespace training;

int main()
{
  Variable a(3.5);
  Variable b(6);
  Variable c(2.9);
  Variable d(1.5);

  std::cout << "--------------------------------------------------------" << std::endl;
  std::cout << "3.5 * 6 / 2.9 + 1.5:                             " << 3.5 * 6 / 2.9 + 1.5 << std::endl;
  std::cout << "a.multipliedBy(b).dividedBy(c).plus(d).result(): " << a.multipliedBy(b).dividedBy(c).plus(d).result() << std::endl;
  std::cout << "--------------------------------------------------------" << std::endl;

  return 0;
}