#include "mylist.h"

/*
 Prints all the elems as strings separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL) 
*/
void debug_string(struct s_node* head)
{
  struct s_node* node;

  if (head == NULL)
    return;

  for (node = head; node != NULL; node = node->next)
  {
    my_char('(');
    if (node->prev == NULL)
    {
      my_str("NULL");
    }
    else
    {
      print_string(node->prev);
    }
    my_str(" <- ");
    print_string(node);
    my_str(" -> ");
    if (node->next == NULL)
    {
      my_str("NULL");
    }
    else
    {
      print_string(node->next);
    }
    my_char(')');
    if (node->next != NULL)
      my_str(", ");
  }
}
