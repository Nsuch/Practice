#include <stdio.h>
#include <stdlib.h>

void even(int a) {
  int b[100];
  int c = 2;
  for (int j = 2; j <= a; j++) {
    if ((c % 2) == 0) {
      b[j] = c;
      c++;
    }
  }
  printf("Even numbers: ");
  for (int k = 0; k < 100; k++) {
    if (k == 100 - 1) {
      printf("%d", b[k]);
    }
    printf("%d, ", b[k]);
  }
}

int main() {
  int evenNum;
  scanf("%d", &evenNum);
  even(evenNum);
}