##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## libmy.a
##

CC	=	gcc

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

LIB	=	libmy.a

all:	copymy $(LIB) clean

$(LIB):	$(OBJ)
	ar rsc $(LIB) $(OBJ)
	echo "lib OK"
	cp $(LIB) ../
	echo "lib moov"
	mkdir -p ../../include/
	echo "my.h moov"

copymy:
	cp ../../include/my.h ./
	echo "copy my.h OK"

clean:
	rm -f $(OBJ)
	echo "clean OK"

fclean: clean
	rm -f $(LIB)
	rm -f ../$(LIB)

re:	fclean all clean
