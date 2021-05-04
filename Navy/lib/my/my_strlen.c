/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my_strlen
*/

#include <unistd.h>

int my_strlen(char *str)
{
    int nb;

    if (str == NULL)
        return (0);
    for (nb = 0; str[nb] != '\0'; nb++);
    return (nb);
}