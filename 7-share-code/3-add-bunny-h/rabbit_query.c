#include <stdio.h>
#include <stdlib.h>
#include "bunny.h"

int main(int argc, char** argv) {
  if (argc < 2) {
    printf("Usage: %s <generation>\n", argv[0]);
    return 1;
  }
  int generation = (int)strtol(argv[1], 0, 0);
  int bunny_count = bunny_count_for(generation);
  printf("Generation %i: population %i\n", generation, bunny_count);

  return 0;
}
