#include "mylist.h"

/*
 Returns a pointer to the elem at index n or the last node.
 Parse once.
*/
void* elem_at(struct s_node* head, int n)
{
  struct s_node* node;
  void* elem;

  assert(head != NULL);

  node = node_at(head, n);
  elem = node->elem;

  return elem;
}
