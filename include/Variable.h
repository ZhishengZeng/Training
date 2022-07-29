/*
 * @Author: Zhisheng Zeng
 * @Date: 2021-09-17 11:51:30
 * @Description:
 * @LastEditors: Zhisheng Zeng
 * @LastEditTime: 2022-01-25 19:31:31
 * @FilePath: Training/include/Variable.h
 */
#ifndef TRAINING_INCLUDE_VARIABLE_H_
#define TRAINING_INCLUDE_VARIABLE_H_

namespace training {

class Variable
{
 public:
  Variable() = default;
  explicit Variable(double number) { _number = number; }
  ~Variable() = default;

  // getter
  double get_number() const { return _number; }
  // setter
  void set_number(const double number) { _number = number; }
  // function
  Variable plus(Variable variable);
  Variable minus(Variable variable);
  Variable multipliedBy(Variable variable);
  Variable dividedBy(Variable variable);
  void print();

 private:
  double _number = 0;
};

}  // namespace training
#endif  // TRAINING_INCLUDE_VARIABLE_H_