#include "cnum_operations.h"

ComplexNumber Assign(ComplexNumber x) {
  printf("\nReal number = ");
  scanf("%lf", &x.real_number);
  printf("\nImaginary unit = ");
  scanf("%lf", &x.imaginary_unit);
  return x;
}

ComplexNumber Add(ComplexNumber x, ComplexNumber y) {
  ComplexNumber result;
  result.real_number = x.real_number + y.real_number;
  result.imaginary_unit = x.imaginary_unit + y.imaginary_unit;
  return result;
}

ComplexNumber Subtract(ComplexNumber x, ComplexNumber y) {
  ComplexNumber result;
  result.real_number = x.real_number - y.real_number;
  result.imaginary_unit = x.imaginary_unit - y.imaginary_unit;
  return result;
}

ComplexNumber Multiply(ComplexNumber x, ComplexNumber y) {
  ComplexNumber result;
  result.real_number = (x.real_number * y.real_number)
      - (x.imaginary_unit * y.imaginary_unit);
  result.imaginary_unit = (x.real_number * y.imaginary_unit)
      + (x.imaginary_unit * y.real_number);
  return result;
}

ComplexNumber Divide(ComplexNumber x, ComplexNumber y) {
  ComplexNumber result;
  result.real_number = (x.real_number * y.real_number
      + x.imaginary_unit * y.imaginary_unit)
      / (x.real_number * x.real_number + x.imaginary_unit * x.imaginary_unit);
  result.imaginary_unit = (x.imaginary_unit * y.real_number
      - x.real_number * y.imaginary_unit)
      / (x.real_number * x.real_number + x.imaginary_unit * x.imaginary_unit);
  return result;
}

void PrintNumber(ComplexNumber result) {
  if (result.imaginary_unit >= 0)
    printf(" %lf + %lfi\n", result.real_number, result.imaginary_unit);
  else
    printf(" %lf %lfi\n", result.real_number, result.imaginary_unit);
}
