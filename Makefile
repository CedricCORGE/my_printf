##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC				=	src/my_put_binary_nbr.c		\
					src/my_put_hexa_nbr.c		\
					src/my_put_long_nbr.c		\
					src/my_put_octal_nbr.c		\
					src/my_put_octal_string.c	\
					src/my_put_unsigned_int.c	\
					src/space_in_flags.c		\
					src/my_print_modulo.c		\
					src/my_printf.c

OBJ				=	$(SRC:.c=.o)

NAME			=	libmy.a

CFLAGS			+=	-Wall -Werror -Wshadow -I include/

UNIT_TEST_NAME	=	unit_tests

all:				$(NAME)

$(NAME):			$(OBJ)
					ar rc $(NAME) $(OBJ)

unit_tests:
					make re -C lib/my/
					make re -C tests/

run_tests:
					make unit_tests
					./tests/unit_tests

clean:
					rm -f $(OBJ)

fclean:				clean
					rm -f $(NAME)
					make fclean -C tests/
					make fclean -C lib/my/

re:					fclean all