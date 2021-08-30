#include <stdio.h>

int main() {
  for (int generation = 0; generation < 10; generation++) {
    int population0 = 0, population1 = 1;
    int bunny_count;

    if (generation == 0) {
      bunny_count = population0;
    }
    else if (generation == 1) {
      bunny_count = population1;
    }
    else {
      bunny_count = population0 + population1;

      for (int i = 3; i <= generation; i++) {
        population0 = population1;
        population1 = bunny_count;
        bunny_count = population0 + population1;
      }
    }
    printf("Generation %i: population %i\n", generation, bunny_count);
  }

  return 0;
}

