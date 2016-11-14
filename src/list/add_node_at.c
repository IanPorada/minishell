#include "mylist.h"

/*
 Adds a node at index n of a list or at the end of the list if n is 
 too large.
 Parse once
*/
void add_node_at(struct s_node* node, struct s_node** head, int n)
{
  int i;
  struct s_node* prev_node;
  struct s_node* next_node;

  assert(n >= 0 && head != NULL && node != NULL && node->elem != NULL);

  if (*head == NULL || n <= 0)
  {
    add_node(node, head);
    return;
  }
  
  prev_node = *head;
  for (i = 1; i < n && prev_node->next != NULL; i++)
  {
    prev_node = prev_node->next;
  }

  next_node = prev_node->next;
  prev_node->next = node;
  node->prev = prev_node;
  node->next = next_node;

  if (next_node != NULL)
  {
    next_node->prev = node;
  }
}
