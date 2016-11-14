#include "mylist.h"

/*
 Prints all the elems as chars separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL) 
*/
void debug_char(struct s_node* head)
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
      print_char(node->prev);
    }
    my_str(" <- ");
    print_char(node);
    my_str(" -> ");
    if (node->next == NULL)
    {
      my_str("NULL");
    }
    else
    {
      print_char(node->next);
    }
    my_char(')');
    if (node->next != NULL)
      my_str(", ");
  }
}
