#include "my.h"

/* takes a string, allocates a new array of strings,
   splits apart the input string x at each space,
   returns the newly allocated array of strings */
char **my_str2vect(char* str)
{
  int i;
  int j;
  int len;
  int pos;
  int str_start; /* current string start */
  char *cpy;
  char **vect;

  if (str == NULL)
    return NULL;
  
  len = 1;
  str_start = -1;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
      str_start = -1;
    }
    else if (str_start < 0)
    {
      str_start = i;
      len++;
    }
  }

  vect = (char **)malloc(len * sizeof(char *));

  pos = 0;
  str_start = -1;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
      str_start = -1;
    }
    else if (str_start < 0)
    {
      str_start = i;
      for (j = 0; str[str_start + j] != ' ' && str[str_start + j] != '\t' && str[str_start + j] != '\n' && str[str_start + j] != '\0'; j++)
        ;
      len = j;
      cpy = (char *)malloc(len + 1);
      for (j = 0; j < len; j++)
        cpy[j] = str[str_start + j];
      cpy[++j] = '\0';
      vect[pos++] = cpy;
    }
  }

  vect[pos] = NULL;

  return vect;
}
