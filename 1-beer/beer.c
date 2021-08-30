#include <stdio.h>                                                

short total = 99;                                                   

int main ()
{
  int beerNum = total;                                            
  const char* word = "bottles";                                   
  while (beerNum > 0) {                                           
    printf("%i %s of beer on the wall, ", beerNum, word);         
    printf("%i %s of beer.\n", beerNum, word);                    
    printf("Take one down and pass it around, ");                 
    beerNum = beerNum - 1;                                        
    if (beerNum == 1) {                                           
      word = "bottle"; // singular, as in ONE bottle.             
    }                                                             
    if (beerNum > 0) {                                            
      printf("%i %s of beer on the wall.\n\n", beerNum, word);    
    } else {                                                      
      printf("no more bottles of beer on the wall.\n");           
    }                                                             
  }                                                               
  return 0;
}
