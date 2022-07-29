/*
 * @Author: Zhisheng Zeng
 * @Date: 2021-09-17 11:51:30
 * @Description:
 * @LastEditors: Zhisheng Zeng
 * @LastEditTime: 2022-01-25 19:31:31
 * @FilePath: Training/src/Variable.cpp
 */

#include "Variable.h"

#include <iostream>

namespace training {

Variable Variable::plus(Variable variable)
{
  return Variable(_number + variable.get_number());
}

Variable Variable::minus(Variable variable)
{
  return Variable(_number - variable.get_number());
}

Variable Variable::multipliedBy(Variable variable)
{
  return Variable(_number * variable.get_number());
}

Variable Variable::dividedBy(Variable variable)
{
  return Variable(_number / variable.get_number());
}

void Variable::print()
{
  std::cout << "The Variable is " << _number << std::endl;
}

}  // namespace training