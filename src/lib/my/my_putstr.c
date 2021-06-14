/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** give string out
*/

#include "../library.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int result;

    if (!s1 || !s2)
        return -1;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    if (s1[i] == s2[i])
        return 0;
    if (s1[i] > s2[i] || s1[i] < s2[i]) {
        result = s1[i] - s2[i];
        return result;
    }
    return 0;
}