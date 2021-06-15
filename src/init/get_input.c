/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** read the file
*/

#include "../include/pokemon.h"

char **get_input(int ac, char **av)
{
    char **output = malloc(sizeof(char *) * (ac));

    if (ac != 3 || !output)
        exit(84);
    if (ac == 3) {
        output[0] = malloc(sizeof(char)* my_strlen(av[1])+1);
        strcpy(output[0], av[1]);
        output[1] = malloc(sizeof(char)* my_strlen(av[2])+1);
        strcpy(output[1], av[2]);
        output[ac-1] = NULL;

    }
    if (!output[0] || !output[1])
        exit(84);
    return output;
}