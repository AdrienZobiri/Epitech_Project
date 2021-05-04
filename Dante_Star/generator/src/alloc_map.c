/*
** EPITECH PROJECT, 2021
** dante
** File description:
** redirect
*/

#include "../include/dante.h"

void alloc_maps(dante_t *p)
{
    p->map = malloc(sizeof(char *) * (p->height + 1));
    p->map[p->height] = NULL;
    for (int x = 0; x < p->height; x++) {
        p->map[x] = malloc(sizeof(char) * (p->width + 2));
        memset(p->map[x], 'X', p->width);
        p->map[x][p->width] = '\n';
        p->map[x][p->width+1] = '\0';
    }
    p->map[p->height-1][p->width] = '\0';
}