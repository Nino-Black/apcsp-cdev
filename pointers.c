#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  float d = 2;
  float e = 4;
  float* ptrtod;
  float* ptrtoe;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);
  printf("The value of d is %f\n", d);
  printf("The value of e is %f\n", e);
  printf("\n");

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);
  printf("\n");

  *ptrtod = 4;
  printf("The value of d is %f\n", d);

  printf("The value of ptrtod is %p\n", (void*)ptrtod);
  printf("It stores the value %f\n", *ptrtod);
  printf("The address of d is %p\n", (void*)&d);
  printf("\n");

  *ptrtoe = 2;
  printf("The value of e is %f\n", e);

  printf("The value of ptrtoe is %p\n", (void*)ptrtoe);
  printf("It stores the value %f\n", *ptrtoe);
  printf("The address of e is %p\n", (void*)&e);
  printf("\n");
}
