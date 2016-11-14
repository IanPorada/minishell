#include "my.h"

void my_int(int i)
{  
  int ld; /* left digit */
  if (i < 0)
    my_char('-');
  for (ld = 1; (i / ld) <= -10 || (i / ld) >= 10; ld *= 10)
    ;
  for (ld = (i < 0) ? ld * -1 : ld; ld != 0; ld /= 10)
  {
    my_char('0' + (i / ld));
    i -= (i / ld) * ld;
  }
}
