#include <stdio.h>

int main() 
{
  const char *s = "Hello";
  // This line will not compile because s is a const char *
  s[0] = 'B';
  puts(s);
  return 0;
}
