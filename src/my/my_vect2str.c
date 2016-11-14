#include "my.h"

/* allocates a new string, copies each string from array into new string separated by a single space,
   until NULL string is found; returns new string */
char *my_vect2str(char **x) {
  int i;
  int j;
  int pos;
  int str_len;
  char *str;

  if (x == NULL)
    return NULL;

  str_len = 1;
  for (i = 0; x[i] != NULL; i++)
    str_len += my_strlen(x[i]) + (x[i+1] == NULL) ? 0 : 1;
  
  str = (char *)malloc(str_len);

  pos = 0;
  for (i = 0; x[i] != NULL; i++)
  {
    for (j = 0; x[i][j] != '\0'; j++)
      str[pos++] = x[i][j];
    if (x[i + 1] != NULL)
      str[pos++] = ' ';
  }
  str[++pos] = '\0';

  return str;
}
