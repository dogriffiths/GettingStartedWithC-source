#include "bunny.h"

int bunny_count_for(int gen) 
{
  if (gen == 0) return gen;
  if (gen == 1) return gen;

  return bunny_count_for(gen - 2) + bunny_count_for(gen - 1);
}
