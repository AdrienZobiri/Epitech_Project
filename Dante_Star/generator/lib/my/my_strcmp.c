/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** my_strcmp.c
*/

#include "my.h"

int my_strcmp(char *s1, char *s2)
{
    if (my_strlen(s1) > my_strlen(s2))
        return (1);
    if (my_strlen(s2) > my_strlen(s1))
        return (2);
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return (3);
    return (0);
}