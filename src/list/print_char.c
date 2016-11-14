#include "mylist.h"

/*
 Prints the elem of node as a char
*/
void print_char(struct s_node* node)
{
  assert(node != NULL);

  my_char( *((char*)(node->elem)) );
}
