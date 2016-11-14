#include "my.h"

/* copies the chars from b into a, overwriting what's already there */
char *my_strcpy(char *a, char *b)
{
  int i;
  
  if (a == NULL || b == NULL)
    return a;

  for (i = 0; b[i] != '\0'; i++)
    a[i] = b[i];
  a[i] = '\0';
  return a;
}
