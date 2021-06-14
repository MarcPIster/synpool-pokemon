/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string into an other
*/

#include "../library.h"

int my_strlen(char const *str)
{
    int	i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
