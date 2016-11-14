#include "mylist.h"

/*
 Adds a node to the end of a list. DO NOT add a NULL pointer or
 a node with a NULL elem.
 Parse once
*/
void append(struct s_node* node, struct s_node** head)
{
  struct s_node* next_node;

  assert(head != NULL && node != NULL && node->elem != NULL);

  if (*head == NULL)
  {
    add_node(node, head);
    return;
  } 

  for (next_node = *head; next_node->next != NULL; next_node = next_node->next)
    ;

  next_node->next = node;
  node->prev = next_node;
  node->next = NULL;
}
