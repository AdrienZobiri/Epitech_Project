/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** my_revstr.c
*/

#include "my.h"
#include <stdio.h>

char *my_revstr(char *str)
{
    int r = 0;
    int i = 0;

    while (str[r] != 0)
        r++;
    char temp[r];

    for (i = 0; i != r; i++) {
        temp[i] = str[r - i - 1];
        if (i == r - 1)
            temp[r] = '\0';
    }
    str = malloc(sizeof(char) * (my_strlen(temp) + 1));
    for (i = 0; temp[i] != 0; i++)
        str[i] = temp[i];
    str[i] = '\0';
    return (str);
}