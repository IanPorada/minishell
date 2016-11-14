NAME = my_select
SRC = main.c my_draw.c
OBJ = $(SRC:.c=.o)

CFLAGS = -I../../include -Wall -Werror -pedantic
LDFLAGS = 

all: $(OBJ)
	cc -L../../lib $(OBJ) -o $(NAME) -lmy -lmylist -lmy -lcurses

clean:
	rm -f $(OBJ)
	rm 0f $(NAME)
