#include "Variable.h"

using namespace training;

int main()
{
  Variable a(5);
  Variable x(5);
  Variable b(5);

  Variable y = a.multipliedBy(x).plus(b);

  y.print();

  return 0;
}