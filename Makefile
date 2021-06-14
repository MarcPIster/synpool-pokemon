##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

CFLAGS = -g3 -W -Wall -Wextra -I./include

SRC = src/main.c \
	src/init/free.c \
	src/init/read_file.c \
	src/init/read_dir.c \
	src/output/print_start.c \
	src/sorting/sort.c \
	src/init/pokemons.c \
	src/init/get_input.c \
	src/combat/get_ran_num.c \
	src/combat/loop.c

OBJ = $(SRC:.c=.o)

NAME = pokemon

all:  $(NAME) clean

$(NAME): $(OBJ)
	cd src/lib/my/ && make
	cd ../../
	gcc -o $(NAME) $(OBJ) -L./src/lib -lmy

clean:
	cd src/lib/my && make clean
	cd ../../
	rm -f $(OBJ)

fclean: clean
	cd src/lib/my && make fclean
	cd ../../
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re