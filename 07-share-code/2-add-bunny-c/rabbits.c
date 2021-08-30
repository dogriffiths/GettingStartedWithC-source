#include <stdio.h>

int bunny_count_for(int gen);

int main() {
  for (int generation = 0; generation < 10; generation++) {
    int bunny_count = bunny_count_for(generation);
    printf("Generation %i: population %i\n", generation, bunny_count);
  }

  return 0;
}

int bunny_count_for(int gen) 
{
  if (gen == 0) return gen;
  if (gen == 1) return gen;

  return bunny_count_for(gen - 2) + bunny_count_for(gen - 1);
}
