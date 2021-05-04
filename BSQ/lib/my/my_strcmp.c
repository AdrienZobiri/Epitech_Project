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
        return (0);
    if (s1[0] == '\0' && s2[0] == '\0')
        return (2);
    if (s1[0] == s2[0])
        return (my_strcmp(s1 + 1, s2 + 1));
    if (s1[0] > s2[0])
        return (1);
    if (s2[0] > s1[0])
        return (0);
    return (84);
}

// ci s1 > s2 on renvoie 1 sinon 0, retourne 2 si s1 == s2.