#include <stdio.h>
#include <stdlib.h>

void countDigits(int userNum) {
  int count = 0;
  while (userNum != 0) {
    userNum /= 10;
    count++;
  }
  printf("Number of digits: %d\n", count);
}

int main() {
  int a;
  scanf("%d", &a);
  countDigits(a);
}