#include "my.h"

/* returns pointer to the last b in string a */
char *my_strrindex(char *a, char b)
{
  int i;
  i = my_rfind(a, b);
  if (i < 0)
    return NULL;
  return &a[i];
}
