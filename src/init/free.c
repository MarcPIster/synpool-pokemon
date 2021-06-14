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