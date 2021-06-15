/*
** EPITECH PROJECT, 2020
** header for duostumper
** File description:
** mybsq
*/

#ifndef BSQ_LIBRARY_H
#define BSQ_LIBRARY_H

#include "../lib/library.h"
#include "stdlib.h"
#include "stdio.h"
#include "libc.h"
#include <dirent.h>
#include <time.h>


#endif //BSQ_LIBRARY_H

typedef struct csv {
    char ***data;
    char **labels;
    int n_columns;
    int n_rows;
} csv;

typedef struct mydir {
    char **name;
    int files;
} mydir;

typedef struct pokemon_one {
    char *name;
    char *sortname;
    int attack;
    int defense;
    int speed;
    int health;
} pokemone_one;

typedef struct pokemon_all {
    int max;
    pokemone_one **pokemon;
    char *player_one;
    char *player_two;
} pokemon_all;

void free_parsed_csv(csv *parsed_csv);
void free_char_table(char **table);
csv *parse_csv(char *filepath);
mydir *open_dir(char *directory);
pokemon_all *init_game(void);
void sort_pokemon(pokemon_all *game);
char **get_input(int ac, char **av);
void combat(pokemon_all *game, char **player);
int get_random_num (int min, int max);
void print_beginning(char **names, pokemon_all *game);
void free_all(pokemon_all *game, char **user);
int calc_attack(const pokemon_all *game, int player_attack, \
int player_def, int turn);
int attack_move(const pokemon_all *game, int player_attack, int player_def);
int check_speed(pokemon_all *game, int player1, int player2);
int get_index(pokemon_all *game, char *string);
void check_malloc_mainstruct(pokemon_all *game, csv **my_csvs);