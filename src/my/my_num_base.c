#include "my.h"

void my_num_base(int i, char *str)
{
  int ld; /* left digit */
  int len;

  len = my_strlen(str);
  
  if (len < 1)
  {
    my_str("Invalid Input");
    return;
  }

  if (i < 0)
    my_char('-');

  if (len == 1)
  {
    for (ld = 0; (i < 0 && ld >= i) || (i > 0 && ld <= i); ld += (i < 0)?-1:1)
      my_char(str[0]);
    return;
  }

  for (ld = 1; (i / ld) <= -len || (i / ld) >= len; ld *= len)
    ;
  for (ld = (i < 0) ? -ld : ld; ld != 0; ld /= len)
  {
    my_char(str[i / ld]);
    i -= (i / ld) * ld;
  }
}
