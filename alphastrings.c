#include <stdio.h>
#include <string.h>

int main()
{

 char str1[27];
 char str2[27] = "abcdefghijklmnopqrstuvwxyz";
 for (i = 0; i < 27; i++) {
  str1[i] -= 97 + i;
 }
 if (strcmp(str1, str2) == 0)
  printf("These strings are identical\n");
 else
  printf("These strings are different");
 for (i = 0; i < 27; i++) {
  str1[i] -= 32;
 }
  printf("Str1: %s\n Str2: %s\n", str1, str2);
}

