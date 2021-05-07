##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile for unit_test
##

SRC		=	my_printf.c				\
			my_put_long_nbr.c		\
			my_put_nbr.c			\
			my_put_octal_nbr.c		\
			my_put_binary_nbr.c		\
			my_put_hexa_nbr.c		\
			my_put_octal_string.c	\
			space_in_flags.c		\
			my_put_unsigned_int.c	\
			test_my_put_nbr.c		\
			test_my_put_hexa_nbr.c	\
			test_octal_string.c		\
			test_my_put_long_nbr.c	\
			test_my_put_address.c	\
			test_my_printf.c

OBJ     =	$(SRC:.c=.o)

NAME	=	unit_tests

CFLAGS  =	-Wall -Werror -Wshadow -Wextra -I ../include/ --coverage -lcriterion

all:		$(NAME)

$(NAME):	$(OBJ)
			cc $(OBJ) -o $(NAME) $(CFLAGS) -L../ -lmy

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)
			rm -f *.gcno
			rm -f *.gcda
			rm -f .c.gcov

re:			fclean all
