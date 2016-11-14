#include "mylist.h"
#include <unistd.h>

int main(int argc, char **argv)
{
  struct s_node** head;
  struct s_node* node;
  void* elem;
  char *s;
  int i;
  char c;

  my_str("----------------MY LIST----------------\n");

  read(0, s, 100);
  my_str("\n");
  my_str(s); 
  
  /*s = (char*)malloc(1);
  c = 'c';
  *s = c;
  node = new_node((void*)s, NULL, NULL);
  head = &node;

  s = (char*)malloc(1);
  *s = 'b';
  add_node(new_node((void*)s, NULL, NULL), head);

  s = (char*)malloc(1);
  *s = 'a';
  add_elem((void*)s, head);

  s = (char*)malloc(1);
  *s = 'e';
  append(new_node((void*)s, *head, *head), head);

  s = (char*)malloc(1);
  *s = 'd';
  add_node_at(new_node((void*)s, NULL, NULL), head, 3);

  traverse_char(*head);
  my_str("\n");
  debug_char(*head);
  my_str("\n");

  remove_node(head);
  remove_last(head);
  remove_node_at(head, 1);

  traverse_char(*head);			my_str("\t\t[b, d]\n");

  i = count_s_nodes(*head);
  my_int(i);				my_str("\t\t2\n");

  node = node_at(*head, 0);
  print_char(node);			my_str("\t\tb\n");
  
  elem = elem_at(*head, 1);
  my_char(*((char*)elem));		my_str("\t\td\n");

  empty_list(head);

  debug_char(*head);*/

  return 0;
}
