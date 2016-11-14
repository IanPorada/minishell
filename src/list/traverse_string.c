#include "mylist.h"

/*
 Prints all the elems as strings separated by a space
*/
void traverse_string(struct s_node* head)
{
  struct s_node* node;

  if (head == NULL)
    return;

  for (node = head; node->next != NULL; node = node->next)
  {
    print_string(node);
    my_char(' ');
  }

  print_string(node);
}
