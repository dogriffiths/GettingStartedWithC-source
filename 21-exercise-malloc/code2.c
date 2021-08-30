#include <stdlib.h>
#include <string.h>

int main()
{
  char *p = malloc(5 * sizeof(*p));
  strcpy(p, "leak");
  free(p);

  return 0;
}
