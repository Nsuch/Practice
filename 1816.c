#include <stdint.h>
#include <stdio.h>

void countPositiveNegative(int b[]) {
  int positiveCount = 0;
  int negativeCount = 0;
  for (int j = 0; j < 100; j++) {
    if (b[j] > 0) {
      positiveCount++;
    } else {
      negativeCount++;
    }
  }
  printf("Positive numbers: %d, Negative numbers: %d\n", positiveCount,
         negativeCount);
}

int main(int argc, int **argv) {
  int a[100];
  printf("Enter numbers (-1 to stop): ");
  for (int i = 0; i < argc; i++) {
    scanf(" %d", &a[i]);
    if (a[i] == -1) {
      break;
    }
    printf("\n");
    countPositiveNegative(a);
  }
}