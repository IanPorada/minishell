#include "mylist.h"

/*
 Prints all the elems as chars separated by a space
*/
void traverse_char(struct s_node* head)
{
  struct s_node* node;

  if (head == NULL)
    return;

  for (node = head; node->next != NULL; node = node->next)
  {
    print_char(node);
    my_char(' ');
  }

  print_char(node);
}
