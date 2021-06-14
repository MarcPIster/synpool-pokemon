/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string into an other
*/

#include "../library.h"

char *small_string(char *string)
{
    int max = my_strlen(string);
    char *output = malloc(sizeof(char)*(max+1));

    for (int x = 0; x < max; x++) {
        if (string[x] <= 90 && string[x] >= 65)
            output[x] = string[x] + 32;
        else
            output[x] = string[x];
    }
    output[max] = '\0';
    return output;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}
