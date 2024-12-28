#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float calculate_area(float radius) {
  float a = 3.14 * (radius * radius);
  printf("Area = %0.2f\n", a);
}

int main() {
  float x;
  scanf(" %f", &x);
  calculate_area(x);
}