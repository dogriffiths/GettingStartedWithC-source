#include <stdio.h>
#include <string.h>

int main() {
  int less_than = strcmp("Alia", "Bert");
  int equal_to = strcmp("Bert", "Bert");
  int greater_than = strcmp("Bert", "Alia");

  printf("less_than is %i\n", less_than);
  printf("equal_to is %i\n", equal_to);
  printf("greater_than is %i\n", greater_than);
  return 0;
}
