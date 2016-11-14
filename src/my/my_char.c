#include "my.h"
#include <unistd.h>

void my_char(char c)
{
  write(1, &c, 1); /* write the contents of c to the file descriptor 1 */
}
