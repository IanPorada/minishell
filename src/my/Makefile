NAME = libmy.a

SRC = my_char.c my_str.c my_int.c my_num_base.c my_alpha.c my_digits.c my_find.c my_rfind.c \
      my_strlen.c my_revstr.c my_pow.c my_strindex.c my_strrindex.c my_strcat.c \
      my_strcmp.c my_strncmp.c my_strconcat.c my_strnconcat.c my_strcpy.c my_strncpy.c my_strdup.c \
      my_vect2str.c my_str2vect.c my_atoi.c

OBJ = $(SRC:.c=.o)

CFLAGS = -I../../include -Wall -Werror -pedantic
LDFLAGS = -c

all: $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	mv $(NAME) ../../lib

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f ../../lib/$(NAME)

re: fclean all
