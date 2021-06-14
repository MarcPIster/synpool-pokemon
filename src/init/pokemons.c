/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** read the file
*/

#include "../include/pokemon.h"

int check_valid(char **data)
{
    int tmp = 0;
    int max = array_size(data);

    if (max != 5)
        return 0;
    if (data[0][0] == '#')
        return 0;
    for (int x = 1; x < 5; x++) {
        tmp = my_getnbr(data[x]);
        if (!tmp)
            return 0;
    }
    return 1;
}

int get_max_pokemon(const mydir *my_dir, csv **my_csvs)
{
    int output = 0;
    for (int x = 0; x < my_dir->files; x++) {
        my_csvs[x] = parse_csv(my_dir->name[x]);
        for (int y = 0; y < my_csvs[x]->n_rows; y++) {
            if (check_valid(my_csvs[x]->data[y]) == 1)
                output++;
        }
    }
    return output;
}

pokemone_one *create_pokemon(char **info, int index)
{
    pokemone_one *output = malloc(sizeof(pokemone_one));

    output->name = info[0];
    output->sortname = small_string(output->name);
    output->alive = -1;
    output->attack = my_getnbr(info[1]);
    output->defense = my_getnbr(info[2]);
    output->speed = my_getnbr(info[3]);
    output->health = my_getnbr(info[4]);
    output->id = index;
    return output;
}

pokemon_all *init_game(void)
{
    pokemon_all *output = malloc(sizeof(pokemon_all));
    mydir *my_dir = open_dir("pokecfg");
    csv **my_csvs = malloc(sizeof(csv*)*(my_dir->files +1));
    int max = get_max_pokemon(my_dir, my_csvs);

    my_csvs[my_dir->files] = NULL;
    output->max = max;
    output->pokemon = malloc(sizeof(pokemone_one)*(max+1));
    max = 0;
    for (int x = 0; x < my_dir->files; x++) {
        my_csvs[x] = parse_csv(my_dir->name[x]);
        for (int y = 0; y < my_csvs[x]->n_rows; y++)
            if (check_valid(my_csvs[x]->data[y]) == 1) {
                output->pokemon[max] = create_pokemon(my_csvs[x]->data[y], \
                max);
                max++;
            }
    }
    output->pokemon[max] = NULL;
    return output;
}