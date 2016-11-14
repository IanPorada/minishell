NAME = libmylist.a

SRC = new_node.c add_node.c add_elem.c append.c add_node_at.c remove_node.c remove_last.c \
      remove_node_at.c count_s_nodes.c empty_list.c node_at.c elem_at.c traverse_int.c \
      traverse_char.c traverse_string.c debug_int.c debug_char.c debug_string.c print_int.c \
      print_char.c print_string.c  

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
