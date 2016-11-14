#include "my_select.h"

/* override the SIGINT signal */
void my_sigint(int sig)
{
  return;
}

int main(int argc, char *argv[])
{
  int i;
  int fin; /* finished selecting */
  int ch;  /* for reading input */
  int nrows;
  int ncols;
  int max_len; /* col length */
  int num_items;
  struct my_item *first_item;
  struct my_item *prev_item;
  struct my_item *item;
  char *fin_str; /* output string */

  if (argc < 2)
  {
    printf("Usage: ./my_select [gobble]\n");
    exit(1);
  }

  /* create a doubly linked list of items */
  num_items = argc - 1;
  max_len = 0;
  prev_item = NULL;
  for (i = 1; i < argc; i++)
  {
    item = (struct my_item *)malloc(sizeof(struct my_item));
    item->highlighted = 0;
    item->selected = 0;
    item->str = argv[i];
    item->len = my_strlen(item->str);
    item->prev = prev_item;
    item->next = NULL;
    if (prev_item != NULL)
      prev_item->next = item;
    
    if (item->len > max_len)
      max_len = item->len;

    if (i == 1)
      first_item = item;

    prev_item = item;
  }

  item = first_item;
  item->selected = 1;

  /* setup the screen */
  initscr();
  signal(SIGINT, my_sigint);
  noecho();
  keypad(stdscr, 1);
  my_draw(first_item, max_len, num_items);

  fin = 0;
  while (!fin)
  {
    /* wait for the next button, then act accordingly */
    getmaxyx(stdscr, nrows, ncols);
    ncols = ncols / (max_len + 1);

    ch = getch();
    switch (ch)
    {
      case ' ':
        if(item->highlighted)
        {
          item->highlighted = 0;
        }
        else
        {
          item->highlighted = 1;
          item->selected = 0;
          item = item->next;
          if (item == NULL)
            item = first_item;
          item->selected = 1;
        }
        break;
      case 27:
        fin = 2;
        break;
      case '\n':
        fin = 1;
        break;
      case KEY_UP:
        item->selected = 0;
        item = item->prev;
        if (item == NULL)
          item = prev_item;
        item->selected = 1;
        break;
      case KEY_DOWN:
        item->selected = 0;
        item = item->next;
        if (item == NULL)
          item = first_item;
        item->selected = 1;
        break;
      case KEY_LEFT:
        item->selected = 0;
        for (i = 0; i < nrows && item->prev != NULL; i++)
          item = item->prev;
        item->selected = 1;
        break;
      case KEY_RIGHT:
        item->selected = 0;
        for (i = 0; i < nrows && item->next != NULL; i++)
          item = item->next;
        item->selected = 1;
        break;
      default:
        break;
    }

    my_draw(first_item, max_len, num_items);
  }

  endwin(); 

  if (fin == 1)
  {
    max_len = 1;
    item = first_item;
    while (item != NULL)
    {
      if (item->highlighted)
      {
        max_len += (item->len + 1);
      }
      item = item->next;
    }
    
    fin_str = (char *)malloc(sizeof(char)*max_len);
    
    i = 0;
    item = first_item;
    while (item != NULL)
    {
      if (item->highlighted)
      {
        my_strcpy(fin_str + i, item->str);
        i += item->len;
        fin_str[i++] = ' ';
      }
      item = item->next;
    }
    fin_str[i] = '\0';
    if (i > 0)
      fin_str[--i] = '\0';
    my_str(fin_str);
    free(fin_str);
  }

  /* free all items */
  item = first_item;
  while (item != NULL)
  {
    prev_item = item;
    item = item->next;
    free(prev_item);
  }

  return 0;
}
