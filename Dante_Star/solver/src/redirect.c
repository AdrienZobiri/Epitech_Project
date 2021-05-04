/*
** EPITECH PROJECT, 2021
** dante
** File description:
** redirect
*/

#include "../include/dante.h"

void redirect(dante_t *p)
{
    error_handling(p);
    open_read(p);
    alloc_maps(p);
    find_path(p);
    for (int x = 0; p->map[x]; x++)
        if (write(1, p->map[x], strlen(p->map[x])) == -1)
            exit (84);
}