#include "my.h"

/* compares strings lexographically: 0 for a = b, negative for a < b, positive otherwise */
int my_strcmp(char *a, char *b)
{
  int i;
  
  if (a == NULL)
  {
    if (b == NULL)
    {
      return 0;
    }
    else
    {
      return -1;
    }
  }
  else if (b == NULL)
  {
    return 1;
  }

  for(i = 0; a[i] != '\0' && b[i] != '\0' && a[i] == b[i]; i++)
    ;

  return a[i] - b[i];
}
