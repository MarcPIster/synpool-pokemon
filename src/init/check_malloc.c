/*
** EPITECH PROJECT, 2021
** is_num.c
** File description:
** .
*/

#include "../include/pokemon.h"

void check_malloc_mainstruct(pokemon_all *game, csv **my_csvs)
{
    if (!game || !game->pokemon || !my_csvs)
        exit(84);
}