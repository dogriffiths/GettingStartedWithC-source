#include <stdio.h>

int main()
{
  char ex[20];
  puts("Enter boyfriend's name: ");
  fgets(ex, sizeof(ex), stdin);
  printf("Dear %s\n\n\nYou're history.\n", ex);
}
