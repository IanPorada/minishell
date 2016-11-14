#include "mylist.h"

/*
 Prints the elem of node as a string
*/
void print_string(struct s_node* node)
{
  assert(node != NULL);

  my_str( (char*)(node->elem) );
}
