#include "my.h"

/* returns the int equivalent of the ascii string */
int my_atoi(char *x)
{
  int i;
  int start;
  int len;
  int sign;
  int final;

  if (x == NULL)
    return 0;

  final = 0;
  sign = 1;
  for (i = 0; (x[i] - '0') >= 10 || (x[i] - '0') < 0; i++)
  {
    if (x[i] == '-')
      sign *= -1;
    else if (x[i] == '\0')
      return 0;
  }
  start = i;
  for (i = 0; (x[start + i] - '0') < 10 && (x[start + i] - '0') >= 0; i++)
    ;
  len = i;
  for (i = 0; i < len; i++)
    final += my_pow(10, len - i - 1) * (x[start + i] - '0') * sign;
  
  return final;
}
