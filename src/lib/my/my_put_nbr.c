/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string into an other
*/

#include "../library.h"

int structurese_function_put_nbr(int counter, int temp)
{
    for (; counter >= 0; counter--){
        int potenz = 1;
        for (int temp_counter = counter; temp_counter > 0 ; temp_counter-- ){
            potenz = potenz * 10;
        }
        my_putchar((temp / potenz % 10) + 48);
    }
    return 0;
}

int my_put_nbr(int nb)
{
    int counter = 0;
    int temp = nb;
    int max = 2147483647;

    if (nb < 0){
        temp = temp * (-1);
        nb = nb * (-1);
        my_putchar('-');
    }
    else if (nb > max || nb < (-1 * max)) {
        return -1;
    }
    while ((nb - 10) >= 0){
        nb /= 10;
        counter++;
    }
    structurese_function_put_nbr(counter, temp);
    return 0;
}