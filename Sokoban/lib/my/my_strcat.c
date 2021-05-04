/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** my_strcat.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char *src)
{
    int t = 0;
    char *sto = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    my_memset(sto, (my_strlen(dest) + my_strlen(src)), '\0');
    for (;dest[t] != '\0'; t++)
        sto[t] = dest[t];
    for (int r = 0; src[r] != '\0'; r++, t++)
        sto[t] = src[r];
    return (sto);
}