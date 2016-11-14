#ifndef _MY_SELECT_H_
#define _MY_SELECT_H_

#include <signal.h>
#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "mylist.h"

struct my_item
{
  int selected;
  int highlighted;
  int len;
  char *str;
  struct my_item *prev;
  struct my_item *next;
};

/* draws the current linked list to the screen */
void my_draw(struct my_item *first_item, int max_len, int num_items);

#endif /* _MY_SELECT_H_ */
