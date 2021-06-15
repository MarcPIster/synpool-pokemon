/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** read the file
*/

#include "../include/pokemon.h"

char **create_array(pokemon_all *game)
{
    char **output = malloc(sizeof(char *) * (game->max+1));

    if (!output)
        exit(84);
    output[game->max] = NULL;
    for (int x = 0; x < game->max; x++) {
        output[x] = malloc(sizeof(char) * \
        (my_strlen(game->pokemon[x]->sortname) + 1));
        strcpy(output[x], game->pokemon[x]->sortname);
    }
    return output;
}

void sort_pokemon(pokemon_all *game)
{
    char **names = create_array(game);
    char tmp_name[100];
    if (!names)
        exit(84);
    for (int x = 0; x < game->max - 1; x++)
        for (int y = 0; y < game->max - x - 1; y++)
            if (my_strcmp(names[y], names[y + 1]) > 0) {
                strcpy(tmp_name, names[y]);
                strcpy(names[y], names[y + 1]);
                strcpy(names[y + 1], tmp_name);
            }
    print_beginning(names, game);
}