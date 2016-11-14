#include "my.h"

/* sticks b onto the end of a and returns a; presupposes a has enough memory for both */
char *my_strcat(char *a, char *b)
{
  int i;
  int j;

  if (a == NULL || b == NULL || b[0] == '\0')
    return a;

  i = 0;
  while (a[i] != '\0')
    i++;
  j = 0;
  while (b[j] != '\0')
    a[i++] = b[j++];
  a[i] = '\0';
  return a;
}
