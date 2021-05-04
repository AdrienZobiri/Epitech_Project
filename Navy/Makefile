##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Printf
##

CC	=	gcc

LIB	=	lib/my/libmy.a

CLIB	=	-L ./lib/my/ -lmy

SRC	=	$(wildcard src/*.c)
OBJ	=	$(src:.c=.o)

NOM	=	navy

FLAG = -W -Wall -Wextra

SAY	= 	say

all:	$(LIB) clean

$(LIB):	comp
	$(CC) -c *.c $(OBJ) -I ./include -L ./lib/my -lmy -g3
	$(CC)  *.o -o $(NOM) -I ./include -L ./lib/my -lmy -g3 $(FLAG)

comp:
	make -C ./lib/my/

copy:
	cp lib/libmy.a ./
	echo "copy libmy.a OK"

clean:
	$(lib)
	$(RM) *.o
	make clean -C ./lib/my/

fclean: clean
	$(RM) $(NOM)
	make fclean -C ./lib/my/

re:	fclean all
