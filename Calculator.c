#include <stdio.h>
int main() {
  char op;
  //Input Operators
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
    //Addition
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
    //Subtraction
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
    //Multiplication
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
    //Division
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
