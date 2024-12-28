#include <stdio.h>
#include <stdlib.h>

void findCharacter(char a[], char c) {
  int wlen = strlen(a);
  for (int i = 0; i < wlen; i++) {
    if (a[i] == c) {
      printf("Character found");
    }
  }
}

int main() {
  char x[100];
  char y;

  printf("String: ");
  scanf("%c\n", &x);

  printf("Character: ");
  scanf("%c\n\n", &y);

  findCharacter(x, y);
}