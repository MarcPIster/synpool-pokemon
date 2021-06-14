/*
** EPITECH PROJECT, 2021
** is_num.c
** File description:
** .
*/

int array_size(char **table)
{
    int len = 0;

    for (len = 0; table[len]; len++);
    return len;
}
