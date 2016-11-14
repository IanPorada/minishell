#include "my.h"

/* allocates new memory, puts all of a and n of b in new array, and returns pointer to it */
char *my_strnconcat(char *a, char *b, int n)
{
  int i;
  int a_len;
  int b_len;
  int c_len;
  char *c;

  if (a == NULL && b == NULL)
    return NULL;

  a_len = ((i = my_strlen(a)) < 0) ? 0 : i;
  b_len = ((i = my_strlen(b)) < 0) ? 0 : i;
  if (b_len > n)
    b_len = (n > 0) ? n : 0;
  c_len = a_len + b_len + 1;
  c = (char *)malloc(c_len);

  for (i = 0; i < c_len; i++)
  {
    if (i < a_len)
    {
      c[i] = a[i];
    }
    else if (i < a_len + b_len)
    {
      c[i] = b[i - a_len];
    }
    else
    {
      c[i] = '\0';
    }
  }
  return c;
}
