/*
** EPITECH PROJECT, 2021
** dante
** File description:
** redirect
*/

#include "../include/dante.h"

void redirect(dante_t *p)
{
    srand(time(NULL));
    error_handling(p);
    alloc_maps(p);
    setpath(p);
    for (int x = 0; p->map[x]; x++)
        if (write(1, p->map[x], strlen(p->map[x])) == -1)
            exit (84);
}