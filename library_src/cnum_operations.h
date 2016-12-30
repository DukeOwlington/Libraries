#ifndef CNUM_OPERATIONS_H_INCLUDED
#define CNUM_OPERATIONS_H_INCLUDED

#include <stdio.h>

typedef struct ComplexNumber {
  double real_number;
  double imaginary_unit;
} ComplexNumber;

ComplexNumber Assign(ComplexNumber number);
ComplexNumber Add(ComplexNumber number1, ComplexNumber number2);
ComplexNumber Subtract(ComplexNumber number1, ComplexNumber number2);
ComplexNumber Multiply(ComplexNumber number1, ComplexNumber number2);
ComplexNumber Divide(ComplexNumber number1, ComplexNumber number2);
void PrintNumber(ComplexNumber result);

#endif // CNUM_OPERATIONS_H_INCLUDED
