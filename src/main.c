/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** main file
*/

#include "include/pokemon.h"

int main(int ac, char **av)
{
    char **user_input = get_input(ac, av);
    pokemon_all *game = init_game();
    sort_pokemon(game);
    srandom(time(0));
    combat(game, user_input);
    free_all(game, user_input);
    return 0;
}
