#include <stdio.h>

void increase_count(int *c)
{
  *c = *c + 1;
}

int main()
{
  int count = 3;
  printf("The count is %i\n", count);
  increase_count(&count);
  printf("The count is now %i\n", count);

  return 0;
}
