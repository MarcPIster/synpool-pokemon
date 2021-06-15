/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** read the file
*/

#include "../include/pokemon.h"

void combat(pokemon_all *game, char **player)
{
    int player_one = get_index(game, player[0]);
    int player_two = get_index(game, player[1]);
    int live = 1;
    int turn = check_speed(game, player_one, player_two);

    while (live) {
        turn = calc_attack(game, player_one, player_two, turn);
        if (game->pokemon[player_one]->health <= 0 || \
        game->pokemon[player_two]->health <= 0)
            live = 0;
    }
}