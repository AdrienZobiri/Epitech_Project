/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** reader
*/

#include "matchstick.h"

int reader(matchstick_t *p, int s)
{
    char *buffer = NULL;
    size_t t = 0;

        if (s == 0)
            my_printf("Line: ");
        else
            my_printf("Matches: ");
        if (getline(&buffer, &t, stdin) == -1)
            return (84);
    if (s == 0)
        p->bufferl = buffer;
    else
        p->bufferm = buffer;
    return (0);
}