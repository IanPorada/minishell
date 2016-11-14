#include "mylist.h"

/*
 Removes the last node from the list.
 Parse Once.
*/
void* remove_last(struct s_node** node)
{
  struct s_node* prev_node;
  struct s_node* next_node;
  void* elem;

  assert(node != NULL && *node != NULL);

  if ((*node)->next == NULL)
    return remove_node(node);

  for (next_node = *node; next_node->next != NULL; next_node = next_node->next)
    ;

  elem = next_node->elem;
  prev_node = next_node->prev;
  free(next_node);
  prev_node->next = NULL;

  return elem;
}
