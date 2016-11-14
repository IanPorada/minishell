NAME = testlist
SRC = testlist.c
OBJ = $(SRC:.c=.o)

CFLAGS = -I../include
LDFLAGS =

all: $(OBJ)
	cc -L../lib $(OBJ) -o $(NAME) -lmy -lmylist -lmy

clean:
	rm -f $(OBJ)
	rm -f $(NAME)
