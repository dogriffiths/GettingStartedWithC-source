#include <stdio.h>

int bunny_count_for(int gen) 
{
  int population0 = 0, population1 = 1;
  int bunny_count;

  if (gen == 0) {
    bunny_count = population0;
  }
  else if (gen == 1) {
    bunny_count = population1;
  }
  else {
    bunny_count = population0 + population1;

    for (int i = 3; i <= gen; i++) {
      population0 = population1;
      population1 = bunny_count;
      bunny_count = population0 + population1;
    }
  }

  return bunny_count;
}

int main() {
  for (int generation = 0; generation < 10; generation++) {
    int bunny_count = bunny_count_for(generation);
    printf("Generation %i: population %i\n", generation, bunny_count);
  }

  return 0;
}

