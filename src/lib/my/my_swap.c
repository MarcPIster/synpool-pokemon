/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap two intigers
*/

#include "../library.h"

void my_swap(int *a, int *b)
{
    int swap_a = *a;
    int swap_b = *b;

    *a = swap_b;
    *b = swap_a;
}
