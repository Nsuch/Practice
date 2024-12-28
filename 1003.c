#include <stdio.h>
#include <stdlib.h>

void sum(int n) {
  int m = 0;
  int p = 1;
  for (int i = 0; i < n; i++) {
    m = m + p;
    p++;
  }
  printf("%d\n", m);
}

int main() {
  int x;
  printf("Enter a number: ");
  scanf(" %d\n", &x);
  sum(x);
}