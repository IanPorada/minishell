#include "my.h"

/* allocates memory and copies string into that new memory; returns pointer to it */
char *my_strdup(char *x) {
  int len;
  char *dup;

  len = my_strlen(x);
  if (len < 0)
    return NULL;

  dup = (char *)malloc(len + 1);
  my_strcpy(dup, x);
  return dup;
}
