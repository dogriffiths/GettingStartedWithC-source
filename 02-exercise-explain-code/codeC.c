#include <stdio.h>

int main()
{
  char suit = 'H';
  switch(suit) {
  case 'C':
    puts("Clubs");
    break;
  case 'D':
    puts("Diamonds");
    break;
  case 'H':
    puts("Hearts");
    break;
  default:
    puts("Spades");
  }
}
