#include <stdio.h>
#include <string.h>

int main()
{

char str1[27];
 for (i = 0; i < 26; i++) {
  str1[i] = 'a' + i;
 }

 char * mstr = str1

 for (i = 0; i < 26; i++) {
  str1[i] = str1[i] -  32;
 }

char str2[27] = "abcdefghijklmnopqrstuvwxyz";

 if (strcmp(mstr, str2) == 0)
  printf("These strings are identical\n");
 else
  printf("These strings are different");

char str3[50];

strcat(str3, mstr);

strcat(str3, str2);

printf("Str1: %s\n Str2: %s\n Str3: %s\n", str1, mstr, str3);
}
