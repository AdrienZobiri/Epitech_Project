##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## dante generator
##

# -fsanitize=address

NAME 	=	generator

SRCS  	=	src/main.c						\
			src/redirect.c					\
			src/error_handling.c			\
			src/alloc_map.c					\
			src/setpath.c					\
			src/set_point_one.c				\
			src/set_point_tow.c				\
			src/loop_imperfect.c			\


OBJS	=	$(SRCS:.c=.o)

NBR_OF_FILES := $(words $(SRCS))

CC	=	gcc -O2

CFLAGS = -W -Wall -Wextra -I ./include

LIB	=	-L ./lib/my -lmy

all:	$(NAME)

$(NAME): $(OBJS)
	@ echo "\033[1;34mCompile LIB : $(COMP)\033[0m"
	@ make -C ./lib/my/
	@ echo "\033[1;33m$(OBJS)\033[0m" | tr ' ' '\n'
	@ echo "\033[1;33m$(CC) $(CFLAGS) $(OBJS) -o $(NAME)\033[0m"
	@ $(CC) $(OBJS) -O2 -o $(NAME) $(LIB)
	@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;34m$(NBR_OF_FILES)\033[0m"
	@ echo "\033[1;34mBinary : \033[1;32m$(NAME)\033[1;34m created sucesfully.\033[0m"

clean:
	@ echo "\033[1;36m[ REMOVING ] \033[0m"
	@ echo "\033[3;31m$(OBJS)\033[0m" | tr ' ' '\n'
	@ $(RM) $(OBJS)
	@ $(RM) *.g*
	@ make clean -C ./lib/my/

fclean:
	@ echo "\033[1;36m[ FREMOVING ] \033[0m"
	@ echo "\033[3;31m./$(NAME)\033[0m"
	@ $(RM) $(OBJS)
	@ $(RM) $(NAME)
	@ $(RM) *.g*
	@ make fclean -C ./lib/my/


re: fclean all

.PHONY: all clean fclean re
