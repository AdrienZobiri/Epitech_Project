/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** my_strdup.c
*/

#include "my.h"

char *my_strdup(char *src)
{
    char *dest;

    dest = malloc(sizeof(char) * my_strlen(src) + 1);
    if(dest == NULL)
        return (NULL);
        for (int i = 0; src[i] != 0; i++) {
        dest[i] = src[i];
    }
    dest[my_strlen(src)] = '\0';
    return (dest);
}