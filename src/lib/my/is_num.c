/*
** EPITECH PROJECT, 2021
** is_num.c
** File description:
** .
*/

#include <stdlib.h>

int is_num(char *str)
{
    if (!str)
        exit(84);
    for (int i = 0; str[i]; i++)
        if (str[i] < '0' || str[i] > '9')
            return 0;
    return 1;
}