#include <stdio.h>
// The slides include #include <math.h>. This is not needed

int main() 
{
  float times[7] = {7.5f, 8.1f, 7.4f, 7.6f, 7.2f, 4.5f, 3.2f};
  times[2] = 9.7f;

  size_t length = 7;
  for (size_t i = 0; i < length; i++) {
    float t = times[i];
    // In the slides, we use the format %i. This should be %zu
    printf("Time %zu is %.2f\n", i, t);
  }

  return 0;
}
