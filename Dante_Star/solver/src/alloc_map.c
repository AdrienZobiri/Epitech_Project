/*
** EPITECH PROJECT, 2021
** dante
** File description:
** redirect
*/

#include "dante.h"

void alloc_maps(dante_t *p)
{
    int z = 0;

    for (; p->buff[p->width] != '\n'; p->width++);
    for (int x = 0; p->buff[x] != '\0'; x++)
        p->height += p->buff[x] == '\n'? 1 : 0;
    p->height++;
    p->map = malloc(sizeof(char *) * (p->height + 1));
    p->map[p->height] = NULL;
    for (int x = 0; x < p->height; x++, z++) {
        p->map[x] = malloc(sizeof(char) * (p->width + 2));
        for (int y = 0; y < p->width; y++, z++)
            p->map[x][y] = p->buff[z];
        p->map[x][p->width] = '\n';
        p->map[x][p->width+1] = '\0';
    }
    p->map[p->height-1][p->width] = '\0';
}