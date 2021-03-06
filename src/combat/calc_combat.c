/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string into an other
*/


#include "../include/pokemon.h"

int get_index(pokemon_all *game, char *string)
{
    for (int x = 0; x < game->max; x++) {
        if (my_strcmp(game->pokemon[x]->name, string) == 0)
            return x;
    }
    return -1;
}

int check_speed(pokemon_all *game, int player1, int player2)
{

    if (game->pokemon[player1]->speed > game->pokemon[player2]->speed)
        return 1;
    else
        return 2;
}

void hit_enemy(const pokemon_all *game, int player_attack, int player_def, \
int attack)
{
    game->pokemon[player_def]->health -= attack;
    printf("%s loses %i health ", game->pokemon[player_def]->name, \
    attack);
    if (game->pokemon[player_def]->health <= 0)
        printf("(0 left)\n%s is KO\n%s wins the fight!\n", \
        game->pokemon[player_def]->name, \
        game->pokemon[player_attack]->name);
    else
        printf("(%i left)\n", game->pokemon[player_def]->health);
}

int attack_move(const pokemon_all *game, int player_attack, int player_def)
{
    int attack = 0;
    int block = 0;

    attack = get_random_num(0, game->pokemon[player_attack]->attack);
    block = game->pokemon[player_def]->defense;
    printf("%s attacks for %i damage\n", \
    game->pokemon[player_attack]->name, attack);
    printf("%s blocks %i damage\n", game->pokemon[player_def]->name, block);
    attack -= block;
    if (attack > 0)
        hit_enemy(game, player_attack, player_def, attack);
    return 2;
}

int calc_attack(const pokemon_all *game, int player_attack, \
int player_def, int turn)
{

    if (turn == 1)
        return attack_move(game, player_attack, player_def);
    else {
        calc_attack(game, player_def, player_attack, 1);
        return 1;
    }
}