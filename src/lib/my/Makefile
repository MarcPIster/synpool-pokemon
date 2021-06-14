##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Day10 Task01
##

SRC = my_putchar.c \
	is_num.c \
	my_getnbr.c \
	my_put_nbr.c \
	my_putstr.c \
	my_revstr.c \
	my_strcat.c \
	my_strlen.c \
	my_swap.c \
	my_str_to_word_array.c \
	array_size.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
#	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	cp	 libmy.a ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re