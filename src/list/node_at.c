#include "mylist.h"

/*
 Returns a pointer to the node at index n or the last node.
 Parse once
*/
struct s_node* node_at(struct s_node* head, int n)
{
  int i;
  struct s_node* node;

  assert(head != NULL);
  assert(n >= 0);

  if (n <= 0)
    return head;

  node = head;
  for (i = 0; i < n && node->next != NULL; i++)
  {
    node = node->next;
  }

  return node;
}
