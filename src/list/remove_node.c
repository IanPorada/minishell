#include "mylist.h"

/* 
 Removes the first node from the list. Returns elem and frees the 
 node from memory.
 DOES NOT PARSE.
*/
void* remove_node(struct s_node** node)
{
  struct s_node* prev_node;
  struct s_node* next_node;
  void* elem;

  assert(node != NULL && *node != NULL);

  elem = (*node)->elem;
  next_node = (*node)->next;
  prev_node = (*node)->prev;
  free(*node);
  *node = next_node;

  if (prev_node != NULL)
    prev_node->next = next_node;

  if (next_node != NULL)
    next_node->prev = prev_node;

  return elem;
}
