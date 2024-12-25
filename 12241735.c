#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("make a right-angle triangle");
  int count;
  scanf("%d", &count);
  int asterixCount = 1;
  for (int i = 1; i <= count; i++) {
    for (int j = 1; j <= asterixCount; j++) {
      printf("*");
    }
    asterixCount++;
    printf("\n");
  }
}