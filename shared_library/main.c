#include "main.h"

// constant strings definitions
const static char * const menuChoice = "1: Assignment\n"
    "2: Addition\n"
    "3: Subtraction\n"
    "4: Multiplication\n"
    "5: Division\n"
    "6: Print numbers\n"
    "7: Quit";

const static char * const incorrectMessage = "Incorrect choice";

enum MenuPoints {
  ASSIGNMENT = 1,
  ADDITION,
  SUBTRACTION,
  MULTIPLICATION,
  DIVISION,
  PRINT_NUMBERS,
  QUIT
};

// print menu points string
void PrintMenu(void) {
  puts(menuChoice);
}

int main() {
  MenuPoints menu_point;
  ComplexNumber number1 = {0, 0};
  ComplexNumber number2 = {0, 0};
  ComplexNumber result = {0, 0};
  while (menu_point != QUIT) {
    PrintMenu();
    scanf("%d", (int*) &menu_point);
    getchar();
    switch (menu_point) {
      case ASSIGNMENT:
        number1 = Assign(number1);
        number2 = Assign(number2);
        break;
      case ADDITION:
        result = Add(number1, number2);
        PrintNumber(result);
        break;
      case SUBTRACTION:
        result = Subtract(number1, number2);
        PrintNumber(result);
        break;
      case MULTIPLICATION:
        result = Multiply(number1, number2);
        PrintNumber(result);
        break;
      case DIVISION:
        result = Divide(number1, number2);
        PrintNumber(result);
        break;
      case PRINT_NUMBERS:
        printf("Number 1:");
        PrintNumber(number1);
        printf("Number 2:");
        PrintNumber(number2);
        break;
      case QUIT:
        break;
      default:
        puts(incorrectMessage);
        break;
    }
  }
  return EXIT_SUCCESS;
}
