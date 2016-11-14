#include "my.h"

/* returns pointer to first b in string a */
char *my_strindex(char *a, char b)
{
  int i;

  i = my_find(a, b);
  if (i < 0)
    return NULL;
  return &a[i];
}
