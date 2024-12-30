#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findCharacter(char a[], char c) {
  int wlen = strlen(a);
  for (int i = 0; i < wlen; i++) {
    if (a[i] == c) {
      printf("Character found\n");
    }
  }
}

int main() {
  char x[100];
  char y;

  printf("String: ");
  scanf("%s", x);
  printf("\n\n");

  printf("Character: ");
  scanf(" %c", &y);
  printf("\n\n");

  findCharacter(x, y);
}