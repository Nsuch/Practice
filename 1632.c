#include <stdio.h>
#include <stdlib.h>

float calculate_simple_interest(float principle, float rate, float time) {
  float si = (principle * time) * (rate / 100);
  printf("Simple Interest: %0.0f\n", si);
}

int main() {
  float x;
  float y;
  float z;

  printf("Principal: ");
  scanf("%f", &x);
  printf("\n");
  printf("Rate: ");
  scanf("%f", &y);
  printf("\n");
  printf("Time: ");
  scanf(" %f", &z);
  printf("\n\n");

  calculate_simple_interest(x, y, z);
}