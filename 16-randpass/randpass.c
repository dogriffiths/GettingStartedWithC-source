#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char number_or_char(int x)
{
  int y = (abs(x) % 62) + 48;
  if (y > 90 || ((y > 57) && (y < 65)))
    y += 7;
  return (char) y;
}

void generate_password()
{
  int len = (rand() % 250) + 5;
  char c[len];

  size_t i;
  for (i = 0; i < len - 1; i++) {
    int r = rand();
    c[i] = number_or_char(r);
  }
  c[i] = 0;
  printf("Password is %s\n", c); 
}

int main()
{
  srand(time(NULL));
  for (int i = 0; i < 3; i++) {
    generate_password();
  }
}
