#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, c;
  float numerator, denominator, first, second;

  printf("======= Quadratic formula =======\n");
  printf("ax^2+bx+c = 0\n");
  //6, -5, 1 -> 1/3 and 1/2

  //a
  printf("a = ");
  scanf("%d", &a);

  //b
  printf("b = ");
  scanf("%d", &b);

  //c
  printf("c = ");
  scanf("%d", &c);

  //calculate the first number
  first = (-b+sqrt(b*b-4*a*c))/(2*a);

  //calculate the second number
  second = (-b-sqrt(b*b-4*a*c))/(2*a);

  printf("x = %g, x = %g\n", first, second);
  return 0;
}
