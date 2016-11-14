#include "my.h"

/* copies up to n chars from b into a */
char *my_strncpy(char *a, char *b, int n)
{
  int i;
  
  if (a == NULL || b == NULL)
    return a;

  for (i = 0; b[i] != '\0' && i < n; i++)
    a[i] = b[i];
  a[i] = '\0';
  return a; 
}
