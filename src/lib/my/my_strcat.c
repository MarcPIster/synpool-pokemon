/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** give string out
*/

#include "../library.h"

char *my_strcat(char *str1, char *str2)
{
    int str1_l = my_strlen(str1);
    int str2_l = my_strlen(str2);
    char *output = malloc(sizeof(char) * (str1_l + str2_l + 1));

    for (int i = 0; i < str1_l; i++)
        output[i] = str1[i];
    for (int i = str1_l; i < str1_l + str2_l; i++)
        output[i] = str2[i - str1_l];
    output[str1_l + str2_l] = '\0';
    return output;
}