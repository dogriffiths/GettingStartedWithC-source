#include <stdio.h>

int main()
{
  int j = 2;
  // The type of &j is int*, but we can cast it to
  // an integer value
  unsigned long address_of_j = (unsigned long) &j;

  // Outputs something like "The address of j is 140732855832184"
  printf("The address of j is %lu\n", address_of_j);

  return 0;
}
