#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  a = 5;
  c = 2;
  printf("Difference of %d subtracted by %d is %d\n", a, b, c);
}
