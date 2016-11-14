#include "mylist.h"

/*
 Prints the elem of node as a int
*/
void print_int(struct s_node* node)
{
  assert(node != NULL);

  my_int( *((int*)(node->elem)) );
}
