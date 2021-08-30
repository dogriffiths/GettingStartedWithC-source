#include <stdio.h>
#include <string.h>

int main() 
{
  char a[10] = "World";
  char b[] = "wide";
  strcat(a, b);

  printf("a contains '%s'\n", a);

  return 0;
}
