#include "my.h"

/* compares strings up to n chars */
int my_strncmp(char *a, char *b, int n)
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

  if (n <= 0)
    return 0;

  for(i = 0; i < (n - 1) && a[i] != '\0' && b[i] != '\0' && a[i] == b[i]; i++)
    ;

  return a[i] - b[i];
}
