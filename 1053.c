#include <stdint.h>
#include <stdio.h>

int calc(int firstNum, int secondNum, char op) {
  int result;
  switch (op) {
    case '+':
      result = firstNum + secondNum;
      break;
    case '-':
      result = firstNum - secondNum;
      break;
    case '*':
      result = firstNum * secondNum;
      break;
    case '/':
      result = firstNum / secondNum;
      break;
  }
  printf("Result: %d\n", result);
}

int main() {
  int x;
  printf("Enter the first number: ");
  scanf("%d", &x);
  printf("\n");
  int y;
  printf("Enter the second number: ");
  scanf("%d", &y);
  printf("\n");
  char z;
  printf("Enter the operation: ");
  scanf(" %c", &z);
  printf("\n");

  calc(x, y, z);

  return 0;
}