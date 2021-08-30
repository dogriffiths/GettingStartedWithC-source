#include <stdio.h>

int main() 
{
  char s[]= "Hello";
  printf("*(s) is %c\n", *(s));
  printf("*(s + 1) is %c\n", *(s + 1));
  printf("s[o] is %c\n", s[0]);
  printf("s[1] is %c\n", s[1]);

  return 0;
}
