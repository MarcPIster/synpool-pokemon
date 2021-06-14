/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string into an other
*/


#include "../include/pokemon.h"

int get_random_num (int min, int max)
{
    int my_random = 0;

    if (max < 0)
        exit(84);
    max += 1;
    my_random = random() % (max - min) + min;
    return my_random;
}