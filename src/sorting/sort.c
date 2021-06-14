/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** read the file
*/

#include "../include/pokemon.h"

char **create_array(pokemon_all *game)
{
    char **output = malloc(sizeof(char *)* (game->max+1));
    output[game->max] = NULL;
    for (int x = 0; x < game->max; x++) {
        output[x] = malloc(sizeof(char)* (my_strlen(game->pokemon[x]->sortname)));
        strcpy(output[x], game->pokemon[x]->sortname);
    }
    return output;
}
//alles in ein str array packen und von dort gemeinsam sortieren, danach id der reinfolge nach zuordnen
//char **array_name; --> sort -->id zuordnen
void sort_pokemon(pokemon_all *game)
{
    char **names = create_array(game);
    char tmp_name[100];
    if (!names)
        exit(84);
    for (int x = 0; x < game->max; x++) {
        printf("%s\n", names[x]);
    }

    for (int x = 0; x < game->max - 1; x++)
        for (int y = 0; y < game->max - x - 1; y++)
            if (my_strcmp(names[y], names[y + 1]) > 0) {
                strcpy(tmp_name, names[y]);
                strcpy(names[y], names[y + 1]);
                strcpy(names[y + 1], tmp_name);
            }

    printf("Zweite runde\n");
    for (int x = 0; x < game->max; x++) {
        printf("%s\n", names[x]);
    }

}




void sort_pokemon1(pokemon_all *game)
{
    int temp_diff = 0;
    int tmp_index = 0;
    int tmp_swap = 0;
    int max = game->max;
    int check = 0;

    check = 0;
    while (check != game->max) {
        for (int x = 0; x < game->max; x++) {
            if (game->pokemon[x]->id == check) {
                printf("Pokemon %s with id %i\n", game->pokemon[x]->name, game->pokemon[x]->id);
                check++;
            }
        }
    }
        for (int x = 0; x < game->max - 1; x++) {
            temp_diff = my_strcmp(game->pokemon[x]->sortname, game->pokemon[x + 1]->sortname);
            printf("1: %s %i vs 2:%s %i = diff %i\n", game->pokemon[x]->sortname, game->pokemon[x]->id,
                   game->pokemon[x + 1]->sortname, game->pokemon[x + 1]->id, temp_diff);
            if (temp_diff > 0) {
                tmp_swap = game->pokemon[x]->id;
                game->pokemon[x]->id = game->pokemon[x + 1]->id;
                game->pokemon[x + 1]->id = tmp_swap;
            }
            if (temp_diff < 0)
                check++;
        }
    check = 0;
    while (check != game->max) {
        for (int x = 0; x < game->max; x++) {
            if (game->pokemon[x]->id == check) {
                printf("Pokemon %s with id %i\n", game->pokemon[x]->name, game->pokemon[x]->id);
                check++;
            }
        }
    }
}