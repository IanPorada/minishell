#include "mylist.h"

/*
 Returns the value the length of the list
 Parse Once.
*/
int count_s_nodes(struct s_node* head)
{
  int i;
  struct s_node* node;

  node = head;
  if (node == NULL)
    return 0;
  for (i = 1; node->next != NULL; i++)
    node = node->next;

  return i;
}
