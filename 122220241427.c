#include <stdio.h>
#include <stdlib.h>

unsigned char is_prime(unsigned int x) {
  int count = 0;
  for (int i = 0; i <= x; i++) {
    if (x % i == 0) {
      count++;
    }
  }
}

int main() {
  int c = 0;
  while (c <= 100) {
    if (is_prime(c)) {
      printf("%d", c);
    }
  }
}