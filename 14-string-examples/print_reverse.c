#include <stdio.h>
#include <string.h>

void print_reverse(char* s)
{
  size_t len = strlen(s);
  char *t = s + len;
  while (--t >= s) printf("%c", *t);
  puts("");
}

int main()
{
  print_reverse("Smart desserts");

  return 0;
}
