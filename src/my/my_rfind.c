#include "my.h"

int my_rfind(char *str, char c)
{
  int i;
  int last;
  
  if (str == NULL)
    return -1;

  i = 0;
  last = -1;
  while (str[i] != '\0')
  {
    if (str[i] == c)
      last = i;
    i++;
  }
  return (c == '\0') ? i : last;
}
