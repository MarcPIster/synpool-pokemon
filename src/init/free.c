/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** read the file
*/

#include "../include/pokemon.h"

void free_parsed_csv(csv *parsed_csv)
{
    for (int i = 0; parsed_csv->labels[i]; i++)
        free(parsed_csv->labels[i]);
    for (int i = 0; parsed_csv->data[i]; i++)
        free(parsed_csv->data[i]);
    free(parsed_csv->labels);
    free(parsed_csv->data);
}

void free_char_table(char **table)
{
    for (int i = 0; table[i]; i++)
        free(table[i]);
    free(table);
}

void free_user(char **user)
{
    for (int x = 0; x < 2; x++) {
        free(user[x]);
    }
    free(user);
}

void free_all(pokemon_all *game, char **user)
{
    for (int x = 0; x < game->max; x++) {
        free(game->pokemon[x]->name);
        free(game->pokemon[x]->sortname);
        free(game->pokemon[x]);
        game->pokemon[x] = NULL;
    }
    free(game->pokemon);
    free(game);
    free_user(user);
}