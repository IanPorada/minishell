NAME = minishell
SRC = main.c minishell.c
OBJ = $(SRC:.c=.o)

CFLAGS = -I../../include -Wall -Werror -pedantic
LDFLAGS =

all: $(OBJ)
	cc -L../../lib $(OBJ) -o $(NAME) -lmy -lmylist -lmy

clean:
	rm -f $(OBJ)
	rm -f $(NAME)
