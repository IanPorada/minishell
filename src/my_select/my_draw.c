#include "my_select.h"

/* prints string at location with styles uline and hili */
void my_print_str(char *str, int x, int y, int uline, int hili)
{
  int i;
  char c;
  move(y, x);
  i = 0;
  while (str[i] != '\0')
  {
    c = str[i];
    addch(c | (uline?A_UNDERLINE:0) | (hili?A_STANDOUT:0));
    i++;
  }
}

/* draws the linked list of my_item to the screen */
void my_draw(struct my_item *first_item, int max_len, int num_items)
{
  int i;
  int r;
  int c;
  int ncols;
  int nrows;
  struct my_item *item;

  getmaxyx(stdscr, r, c);

  nrows = r;
  ncols = c / (max_len + 1);

  clear();

  if (num_items > ncols * nrows)
  {
    my_print_str("please englarge the window", 0, 0, 0, 0);
  }
  else
  {
    i = 0;
    item = first_item;
    while (item != NULL)
    {
      my_print_str(item->str, (i/nrows) * (max_len + 2), i % nrows, item->selected, item->highlighted);  
      i++;
      item = item->next;
    }
  }

  refresh();
  return;
}
