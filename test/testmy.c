#include "my.h"

int main(int argc, char **argv) 
{
  /* I pledge my honor that I've abided by the Stevens honor system. */

  int int_max;
  int int_min;

  char str_empty[] = {'\0', 'X', 'X', 'X'};
  char str_abc[] = {'a', 'b', 'c', '\0', 'Y', 'Y', 'Y'};
  char str_abcd[] =  {'a', 'b', 'c', 'd', '\0', 'Z', 'Z'};
  char str_123[] = {'1', '2', '3', '\0'};
  char str_long [100];
  char *vect [100];

  int_min = 1 << ((sizeof(int) * 8) - 1);
  int_max = (int_min + 1) * -1;

  /* my_strcmp */
  my_str("\nmy_strcmp\n");
  my_int(my_strcmp(NULL, NULL));		my_str("\t\t0\n");
  my_int(my_strcmp(NULL, str_empty));		my_str("\t\t-\n");
  my_int(my_strcmp(str_abc, NULL));		my_str("\t\t+\n");
  my_int(my_strcmp(str_abc, str_empty));	my_str("\t\t+\n");
  my_int(my_strcmp(str_empty, str_abc));	my_str("\t\t-\n");
  my_int(my_strcmp(str_empty, str_empty));	my_str("\t\t0\n");
  my_int(my_strcmp(str_abc, str_abc));		my_str("\t\t0\n");
  my_int(my_strcmp(str_abc, str_123));		my_str("\t\t+\n");

  /* my_strncmp */
  my_str("\nmy_strncmp\n");
  my_int(my_strncmp(NULL, NULL, int_max));	my_str("\t\t0\n");
  my_int(my_strncmp(NULL, str_empty, 2));	my_str("\t\t-\n");
  my_int(my_strncmp(str_abc, NULL, int_min));	my_str("\t\t+\n");
  my_int(my_strncmp(str_abc, str_empty, 1));	my_str("\t\t+\n");
  my_int(my_strncmp(str_empty, str_abc, 1));	my_str("\t\t-\n");
  my_int(my_strncmp(str_empty, str_empty, 0));	my_str("\t\t0\n");
  my_int(my_strncmp(str_abc, str_abc, -5));	my_str("\t\t0\n");
  my_int(my_strncmp(str_abc, str_123, 1));	my_str("\t\t+\n");
  my_int(my_strncmp(str_abc, str_abcd, 2));	my_str("\t\t0\n");
  my_int(my_strncmp(str_abc, str_abcd, 3));	my_str("\t\t0\n");
  my_int(my_strncmp(str_abc, str_abcd, 4));	my_str("\t\t-\n");

  /* my_strcpy */
  my_str("\nmy_strcpy\n");
  my_str(my_strcpy(NULL, str_long)); 		my_str("\t\t[NULL]\n");
  my_str(my_strcpy(str_empty, NULL)); 		my_str("\t\t[\\0]\n");
  my_str(my_strcpy(str_long, str_empty));	my_str("\t\t[\\0]\n");
  my_str(my_strcpy(str_long, str_abc));		my_str("\t\tabc\n");
  my_str(my_strcpy(str_empty, str_123)); 	my_str("\t\t123\n");
  my_str(my_strcpy(str_empty, str_abc)); 	my_str("\t\tabc\n");
  my_str(my_strcpy(str_empty, "\0XXX")); 	my_str("\t\t[\\0]\n");

  /* my_strncpy */
  my_str("\nmy_strncpy\n");
  my_str(my_strncpy(NULL, str_long, int_max));	my_str("\t\t[NULL]\n");
  my_str(my_strncpy(str_empty, NULL, int_min));	my_str("\t\t[\\0]\n");
  my_str(my_strncpy(str_long, str_empty, 1));	my_str("\t\t[\\0]\n");
  my_str(my_strncpy(str_long, str_abc, 4));	my_str("\t\tabc\n");
  my_str(my_strncpy(str_empty, str_123, 10)); 	my_str("\t\t123\n");
  my_str(my_strncpy(str_empty, str_abc, 2)); 	my_str("\t\tab\n");
  my_str(my_strncpy(str_empty, "\0XXX", 4));	my_str("\t\t[\\0]\n");
  my_str(my_strncpy(str_long, NULL, 0));	my_str("\t\tabc\n");

  /* my_strconcat */
  my_str("\nmy_strconcat\n");
  my_str(my_strconcat(NULL, NULL));		my_str("\t\t[NULL]\n");
  my_str(my_strconcat(str_empty, NULL));	my_str("\t\t[\\0]\n");
  my_str(my_strconcat(NULL, str_empty));	my_str("\t\t[\\0]\n");
  my_str(my_strconcat(NULL, str_abc));		my_str("\t\tabc\n");
  my_str(my_strconcat(str_abc, str_empty));	my_str("\t\tabc\n");
  my_str(my_strconcat(str_empty, str_abcd));	my_str("\t\tabcd\n");
  my_str(my_strconcat(str_123, str_abc));	my_str("\t\t123abc\n");
  my_str(my_strconcat("Hello ", "World"));	my_str("\tHello World\n");

  /* my_strnconcat */
  my_str("\nmy_strconcat\n");
  my_str(my_strnconcat(NULL, NULL, int_min));		my_str("\t\t[NULL]\n");
  my_str(my_strnconcat(str_empty, NULL, int_max));	my_str("\t\t[\\0]\n");
  my_str(my_strnconcat(NULL, str_empty, 0));		my_str("\t\t[\\0]\n");
  my_str(my_strnconcat(NULL, str_abc, 3));		my_str("\t\tabc\n");
  my_str(my_strnconcat(str_abc, str_empty, 10));	my_str("\t\tabc\n");
  my_str(my_strnconcat(str_empty, str_abcd, 4));	my_str("\t\tabcd\n");
  my_str(my_strnconcat(str_123, str_abc, 3));		my_str("\t\t123abc\n");
  my_str(my_strnconcat("Hello ", "World", int_max));	my_str("\tHello World\n");
  my_str(my_strnconcat(str_123, str_abc, 0));		my_str("\t\t123\n");
  my_str(my_strnconcat(str_123, str_abc, 1));		my_str("\t\t123a\n");
  my_str(my_strnconcat(str_123, str_abc, 2));		my_str("\t\t123ab\n");
  my_str(my_strnconcat(str_123, str_empty, 0));		my_str("\t\t123\n");
  my_str(my_strnconcat(str_123, str_empty, 1));		my_str("\t\t123\n");
  my_str(my_strnconcat(str_123, str_abcd, 1));		my_str("\t\t123a\n");

  /* my_strdup */
  my_str("\nmy_strdup\n");
  my_str(my_strdup(NULL));		my_str("\t\t[NULL]\n");
  my_str(my_strdup(str_empty));		my_str("\t\t[\\0]\n");
  my_str(my_strdup(str_abc));		my_str("\t\tabc\n");

  /* my_strindex */
  my_str("\nmy_strindex\n");
  
  my_strcpy(str_empty, "X");
  my_strcpy(str_empty, "");
  my_strcpy(str_long, "Hello World");

  my_strindex(NULL, '\0');
  my_strindex(str_empty, 'a');
  *my_strindex(str_empty, '\0') = '0';
  my_str(str_empty);			my_str("\t\t0\n");

  *my_strindex(str_long, 'l') = 'X';
  *my_strindex(str_long, 'H') = 'Y';
  *my_strindex(str_long, '\0') = '\0';
  *my_strindex(str_long, 'd') = '\0';
  my_str(str_long);			my_str("\tYeXlo Worl\n");

  my_strcpy(str_empty, "");

  /* my_strrindex */
  my_str("\nmy_strrindex\n");
  
  my_strcpy(str_empty, "X");
  my_strcpy(str_empty, "");
  my_strcpy(str_long, "Hello World");

  my_strrindex(NULL, '\0');
  my_strrindex(str_empty, 'a');
  *my_strrindex(str_empty, '\0') = '0';
  my_str(str_empty);			my_str("\t\t0\n");

  *my_strrindex(str_long, 'l') = 'X';
  *my_strrindex(str_long, 'H') = 'Y';
  *my_strrindex(str_long, '\0') = '\0';
  *my_strrindex(str_long, 'd') = '\0';
  my_str(str_long);			my_str("\tYello WorX\n");

  my_strcpy(str_empty, "");

  /* my_strcat */
  my_str("\nmy_strcat\n");
  my_str(my_strcat(NULL, NULL));		my_str("\t\t[NULL]\n");
  my_str(my_strcat(str_abc, NULL));		my_str("\t\tabc\n");
  my_str(my_strcat(NULL, str_abc));		my_str("\t\t[NULL]\n");
  my_str(my_strcat(str_empty, str_empty));	my_str("\t\t[\\0]\n");
  my_str(my_strcat(str_abc, str_empty));	my_str("\t\tabc\n");
  my_str(my_strcat(str_empty, str_abc));	my_str("\t\tabc\n");
  my_str(my_strcat(str_abc, str_123));		my_str("\t\tabc123\n");

  /* my_vect2str */
  my_str("\nmy_vect2str\n");
  my_str(my_vect2str(NULL));		my_str("\t\t[NULL]\n");
  vect[0] = NULL;
  my_str(my_vect2str(vect));		my_str("\t\t[\\0]\n"); 
  vect[0] = "";
  vect[1] = "";
  vect[2] = NULL;
  my_str(my_vect2str(vect));		my_str("\t\t\" \"\n");
  vect[0] = "abc";
  my_str(my_vect2str(vect));		my_str("\t\tabc \n"); 
  vect[1] = "123";
  my_str(my_vect2str(vect));		my_str("\t\tabc 123\n");
  vect[0] = "";
  my_str(my_vect2str(vect));		my_str("\t\t 123\n"); 
  vect[0] = "abc";
  vect[2] = "def";
  vect[3] = NULL;
  my_str(my_vect2str(vect));		my_str("\t\tabc 123 def\n");
 
  /* my_str2vect */
  my_str("\nmy_str2vect\n");
  my_str(my_vect2str(my_str2vect(NULL)));	my_str("\t\t[NULL]\n");
  my_str(my_vect2str(my_str2vect("")));			my_str("\t\t[\\0]\n");
  my_str(my_vect2str(my_str2vect(" ")));			my_str("\t\t[\\0]\n");
  my_str(my_vect2str(my_str2vect(" \n ")));		my_str("\t\t[\\0]\n");
  my_str(my_vect2str(my_str2vect("\na\n")));		my_str("\t\ta\n");
  my_str(my_vect2str(my_str2vect("a\n\na \t ")));	my_str("\t\ta a\n");
  my_str(my_vect2str(my_str2vect("\n\n0123    \n45\n678")));			my_str("\t\t0123 45 678\n");
  my_str(my_vect2str(my_str2vect(" 0123 45  678    ")));				my_str("\t\t0123 45 678\n");
  my_str(my_vect2str(my_str2vect("To be \n\nor   not to be.  \n That is    the \n\n\n question.\n")));	my_str("\t\tTo be or not to be. That is the question.\n");
  my_str(my_vect2str(my_str2vect("               x")));			my_str("\t\tx\n");
  my_str(my_vect2str(my_str2vect(" what ")));			my_str("\t\twhat\n");
  my_str(my_vect2str(my_str2vect(" what about ")));			my_str("\t\twhat about\n");
  my_str(my_vect2str(my_str2vect(" what about ? ")));			my_str("\t\twhat about ?\n");
  my_str(my_vect2str(my_str2vect("x                  \t")));		my_str("\t\tx\n");
  
  /* my_atoi */
  my_str("\nmy_atoi\n");
  my_int(my_atoi(NULL));		my_str("\t\t0\n");
  my_int(my_atoi(""));			my_str("\t\t0\n");
  my_int(my_atoi("0"));			my_str("\t\t0\n");
  my_int(my_atoi("-1"));		my_str("\t\t-1\n");
  my_int(my_atoi("1"));			my_str("\t\t1\n");
  my_int(my_atoi("-10"));		my_str("\t\t-10\n");
  my_int(my_atoi("--10"));		my_str("\t\t10\n");
  my_int(my_atoi("-2147483648"));	my_str("\t-2147483648\n");
  my_int(my_atoi("2147483647"));	my_str("\t2147483647\n");
  my_int(my_atoi("aaa42"));		my_str("\t\t42\n");
  my_int(my_atoi("42asfeafsdf"));	my_str("\t\t42\n");
  my_int(my_atoi("asfd$%@#42!@#$#"));	my_str("\t\t42\n");
  my_int(my_atoi("-asdfdasdf-a201"));	my_str("\t\t201\n");
  my_int(my_atoi("---a---b---33---"));	my_str("\t\t-33\n");

  return 0;
}
