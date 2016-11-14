#include "mylist.h"

/*
 Frees all the nodes in the list.
 CHALLENGE: Write in two lines (allowed to use other methods in 
 this assignment)
*/
void empty_list(struct s_node** head)
{
  assert(head != NULL);

  while (*head != NULL)
    remove_node(head);
}
