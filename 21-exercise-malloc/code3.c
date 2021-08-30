#include <stdlib.h>

int main()
{
  char *p = malloc(5 * sizeof(*p));
  p = "leak";
  free(p);

  return 0;
}
