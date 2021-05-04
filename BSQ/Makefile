##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## BSQ
##

CC	=	gcc

LIB	=	lib/my/libmy.a

CLIB	=	-L ./lib/my/ -lmy

NOM	=	bsq

FLAG = -W -Wall -Wextra

SAY	= 	say

all:	$(LIB) clean

$(LIB):	comp
	$(CC) -c -O3 *.c -I ./include -L ./lib/my -lmy -g3
	$(CC)  *.o -o $(NOM) -O3 -I ./include -L ./lib/my -lmy -g3 $(FLAG)

comp:
	make -C ./lib/my/

clean:
	$(lib)
	$(RM) *.o
	make clean -C ./lib/my/

fclean: clean
	$(RM) $(NOM)
	make fclean -C ./lib/my/

re:	fclean all clean
