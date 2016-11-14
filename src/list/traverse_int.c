#include "mylist.h"

/*
 Prints all the elems as ints separated by a space
*/
void traverse_int(struct s_node* head)
{
  struct s_node* node;

  if (head == NULL)
    return;

  for (node = head; node != NULL; node = node->next)
  {
    print_int(node);
    if (node->next != NULL)
      my_char(' ');
  }
}
