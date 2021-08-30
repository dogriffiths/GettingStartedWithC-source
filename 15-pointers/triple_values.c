#include <stdio.h>

void triple_values(float* p)
{
  p[0] = p[0] * 3.0f;
  p[1] = p[1] * 3.0f;
  p[2] = p[2] * 3.0f;
}

int main()
{
  float arr[] = {1.1f, 2.1f, 3.1f};

  triple_values(arr);

  for (size_t i = 0; i < 3; i++) {
    printf("arr[%zu] = %.1f\n", i, arr[i]);
  }

  return 0;
}
