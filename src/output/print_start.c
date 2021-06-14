/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** print the start
*/

#include "../include/pokemon.h"

void print_beginning(char **names, pokemon_all *game)
{
    for (int x = 0; x < game->max; x++) {
        for (int y = 0; y < game->max; y++)
            if (my_strcmp(names[x], game->pokemon[y]->sortname) == 0) {
                printf("Pokemon %s has %i attack, %i defense ", \
                    game->pokemon[y]->name, game->pokemon[y]->attack, \
                    game->pokemon[y]->defense);
                printf("%i speed and %i health\n", game->pokemon[y]->speed, game->pokemon[y]->health);
            }
    }
}