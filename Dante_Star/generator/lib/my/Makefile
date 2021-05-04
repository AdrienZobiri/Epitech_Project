##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## libmy.a
##

## -fsanitize=address

CC	=	gcc

SRC	=	$(wildcard *.c)

OBJS	=	$(SRC:.c=.o)

NBR_OF_FILES := $(words $(SRCS))

LIB	=	libmy.a

CFLAGS = -W -Wall -Wextra -Werror

all:	$(LIB)

$(LIB): $(OBJS)
	@ cp ../../include/my.h ./
	@ echo "\033[1;32mCOPY my.h OK \033[0m"
	@ ar rsc $(LIB) $(OBJS)
	@ echo "\033[1;36m[ LIB COMPILED ] \033[0m \033[1;34mOK\033[0m"
	@ cp $(LIB) ../

clean:
	@ echo "\033[1;36m[ REMOVING LIB ] \033[0m"
	@ echo "\033[3;31m$(OBJS)\033[0m" | tr ' ' '\n'
	@ $(RM) $(OBJS)
	@ echo "\033[1;32mCLEAN OK \033[0m"

fclean: clean
	@ echo "\033[1;36m[ FREMOVING LIB] \033[0m"
	@ echo "\033[3;31m$(LIB) ../$(LIB)\033[0m" | tr ' ' '\n'
	@ $(RM) $(LIB)
	@ $(RM) ../$(LIB)
	@ echo "\033[1;32mFCLEAN OK \033[0m"

re:	fclean all
