#include "my.h"

int my_revstr(char *str)
{
  int i;
  int len;
  char tmp;

  len = my_strlen(str);

  if (len <= 0)
    return len;

  for (i = 0; i < len / 2; i++)
  {
    tmp = str[len - i - 1];
    str[len - i - 1] = str[i];
    str[i] = tmp;
  }
  return len;
}
