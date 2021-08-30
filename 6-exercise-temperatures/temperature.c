#include <stdio.h>
float toCelsius(double fahrenheit);

int main() {
  float c = toCelsius(37.1);
  printf("Celsius temperature is %.2f\n", c);
}

// TODO: celsius = (fahrenheit - 32) / 1.8
float toCelsius(double fahrenheit)
{
  return (float)((fahrenheit - 32) / 1.8);
}
