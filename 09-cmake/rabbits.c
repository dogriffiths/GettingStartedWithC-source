#include <stdio.h>
#include "bunny.h"

int main() {
  for (int generation = 0; generation < 10; generation++) {
    int bunny_count = bunny_count_for(generation);
    printf("Generation %i: population %i\n", generation, bunny_count);
  }

  return 0;
}
