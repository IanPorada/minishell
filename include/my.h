#ifndef _MY_H_
#define _MY_H_

#include <stdlib.h>

#ifndef NULL
#define NULL (void*)0
#endif /* NULL */

/* write the contents of c to the file descriptor 1 */
void my_char(char c);

/* print a char pointer  */
void my_str(char *str);

/* print an integer */
void my_int(int i);

/* print i in the language str */
void my_num_base(int i, char *str);

/* prints A to Z in upper case */
void my_alpha();

/* prints all digits */
void my_digits();

/* returns the first index of c in str */
int my_find(char *str, char c);

/* returns the last index of c in str */
int my_rfind(char *str, char c);

/* returns the length of str not including null terminator */
int my_strlen(char *str);

/* reverses the str in place and returns its length */
int my_revstr(char *str);

/* subsititute pow */
int my_pow(int base, int exp);

/* returns pointer to first b in string a */
char *my_strindex(char *a, char b);

/* returns pointer to the last b in string a */
char *my_strrindex(char *a, char b);

/* sticks b onto the end of a and returns a; presupposes a has enough memory for both */
char *my_strcat(char *a, char *b);

/* compares strings lexographically: 0 for a = b, negative for a < b, positive otherwise */
int my_strcmp(char *a, char *b);

/* compares strings up to n chars */
int my_strncmp(char *a, char *b, int n);

/* allocates new memory, puts concatenated strings in that new memory, and returns pointer to it */
char *my_strconcat(char *a, char *b);

/* allocates new memory, puts all of a and n chars of b, returns pointer to it */
char *my_strnconcat(char *a, char *b, int n);

/* copies the chars from b into a, overwriting what's already there */
char *my_strcpy(char *a, char *b);

/* copies up to n chars from b into a */
char *my_strncpy(char *a, char *b, int n);

/* allocates memory and copies string into that new memory; returns pointer to it */
char *my_strdup(char *x);

/* allocates a new string, copies each string from array into new string separated by a single space,
   until NULL string is found; returns new string */
char *my_vect2str(char **x);

/* takes a string, allocates a new array of strings, splits apart the input string x at each space,
   returns the newly allocated array of strings */
char **my_str2vect(char*);

/*returns the int equivalent of the ascii string */
int my_atoi(char *x);

#endif /* _MY_H_ */
