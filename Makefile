##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Compilation file
##

CC	= gcc -g

RM	= rm -f

NAME	= my_ls

SRC	=   src/main.c  \
        src/my_ls.c \
        lib/my/my_putchar.c	\
        lib/my/my_put_nbr.c	\
        lib/my/my_putstr.c	\
        lib/my/my_strlen.c \
        lib/my/my_put_nbr_base.c   \
        lib/my/my_put_nbr_base_long.c  \
        lib/my/my_put_nbr_base_unsigned.c  \
        lib/my/my_put_str_printable_only.c \
        lib/my/my_flag1.c  \
        lib/my/my_flag2.c  \
        lib/my/my_printf.c  \
        src/my_block.c

OBJ	= $(SRC:.c=.o)

CFLAGS	=   -Wall

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ) lib/my/*.gcno lib/my/*.gcda src/*.gcno src/*.gcda

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
