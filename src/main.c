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
    printf("\ntest id %i\n", game->pokemon[0]->id);
    printf("next test = %s\n", game->pokemon[0]->sortname);

    combat(game, user_input);
    return 0;
}
