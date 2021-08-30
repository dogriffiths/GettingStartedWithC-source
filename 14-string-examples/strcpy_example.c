#include <stdio.h>
#include <string.h>

int main() 
{
  char c[] = "Hello";
  char d[6];
  strcpy(d, c);
  printf("d contains '%s'\n", d);

  return 0;
}
