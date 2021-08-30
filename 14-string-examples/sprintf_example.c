#include <stdio.h>
#include <string.h>

int main() 
{
  char phone[10];

  char area_code[] = "555";
  char local[] = "1414";

  sprintf(phone, "%s-%s", area_code, local);

  puts(phone);

  return 0;
}
