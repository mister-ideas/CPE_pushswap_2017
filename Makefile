##
## EPITECH PROJECT, 2017
## PushSwap
## File description:
## Makefile
##

SRC_DIR=	.

SRC=		$(SRC_DIR)/push_swap.c		\
		$(SRC_DIR)/linked_list.c	\
		$(SRC_DIR)/operations.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-W -Wall -fno-builtin

CPPFLAGS=	-I include/

LFLAGS=		-L lib/my/ -l my

NAME=		push_swap

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/src
		gcc -o $(NAME) $(OBJ) $(LFLAGS)

clean:
		rm -f $(OBJ)
		make clean -C lib/src

fclean:		clean
		rm -f $(NAME)
		make fclean -C lib/src

re:		fclean all

.PHONY:		all clean fclean re
