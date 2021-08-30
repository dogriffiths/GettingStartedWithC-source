#include <stdio.h>

int main()
{
  char cards[] = "JQK";

  // Outputs "Contents of the memory at location cards is J"
  printf("Contents of the memory at location cards is %c", *cards);

  return 0;
}
