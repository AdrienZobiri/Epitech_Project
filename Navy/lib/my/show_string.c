/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my_swap.c
*/

#include <unistd.h>
#include "my.h"

void show_string(char const *str)
{
    if (str == NULL)
        return;
    for (int l = 0; str[l] != '\0'; l++)
        my_putchar(str[l]);
    return;
}