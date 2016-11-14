#include "mylist.h"

/*
 Inserts a node at the start of the list. DO NOT add a NULL pointer or
 a node with a NULL elem.
 DOES NOT PARSE
*/
void add_node(struct s_node* node, struct s_node** head)
{
  struct s_node* temp;

  assert(head != NULL && node != NULL && node->elem != NULL);

  node->prev = NULL;
  node->next = *head;
  if (*head != NULL)
  {
    temp = (*head)->prev;
    (*head)->prev = node;
    node->prev = temp;
  }
  *head = node;
}
