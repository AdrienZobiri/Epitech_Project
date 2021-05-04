/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my_swap.c
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char const *str)
{
    if (str == NULL)
        return;
    for (int t = 0; str[t] != '\0'; t++)
        my_putchar(str[t]);
    return;
}