#include "my.h"

void my_str(char *str)
{
  int i;
  
  if (str == NULL)
    return;

  i = 0;
  while (str[i] != '\0')
  {
    my_char(str[i++]);
  }
}
