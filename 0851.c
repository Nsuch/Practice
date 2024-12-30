#include <stdio.h>
#include <stdlib.h>

void even(int a) {
  printf("Even numbers: ");
  for (int j = 2; j <= a; j += 2) {
    // if ((c % 2) == 0) {
    if ((j == a) || (j == (a - 1))) {
      printf("%d", j);
    } else {
      printf("%d, ", j);
    }
    //}
  }
  printf("\n");
}

int main() {
  int evenNum;
  scanf(" %d", &evenNum);
  printf("\n");
  even(evenNum);
}