#include "mylist.h"

/*
 Removes the node at index n or the last node.
 Parse once
*/
void* remove_node_at(struct s_node** head, int n)
{
  int i;
  struct s_node* prev_node;
  struct s_node* node;
  struct s_node* next_node;
  void* elem;

  assert(head != NULL && *head != NULL);
  assert(n >= 0);

  node = *head;
  if (node->next == NULL || n <= 0)
    return remove_node(head);

  node = node->next;
  for (i = 1; i < n && node->next != NULL; i++)
  {
    node = node->next;
  }

  prev_node = node->prev;
  next_node = node->next;
  elem = node->elem;
  free(node);
  prev_node->next = next_node;
  if (next_node != NULL)
    next_node->prev = prev_node;

  return elem; 
}
