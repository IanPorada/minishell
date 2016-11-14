#include "my.h"

int my_find(char *str, char c)
{
  int i;

  if (str == NULL)
    return -1;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == c)
      return i;
    i++;
  }

  return (c == '\0') ? i : -1;
}
