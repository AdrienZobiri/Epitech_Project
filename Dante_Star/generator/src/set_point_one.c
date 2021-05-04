/*
** EPITECH PROJECT, 2021
** dante
** File description:
** set point 1
*/

#include "../include/dante.h"

bool condition_end(dante_t *p)
{
    if (p->y < p->height-2 || p->x < p->width-2)
        return (true);
    if (p->y == p->height-2 && p->x == p->width-2 && \
    (p->map[p->height-1][p->width-2] == 'X' || \
    p->map[p->height-2][p->width-1] == 'X')) {
        return (true);
    }
    if (p->y == p->height-1 && p->x == p->width-2 && \
    p->map[p->height-2][p->width-1] == 'X') {
        p->map[p->height-1][p->width-1] = '2';
        return (true);
    }
    if (p->y == p->height-2 && p->x == p->width-1 && \
    p->map[p->height-1][p->width-2] == 'X') {
        p->map[p->height-1][p->width-1] = '2';
        return (true);
    }
    return (false);
}

void set_point_one(dante_t *p)
{
    int path = 0;

    path += ((p->y < p->height - 1) && (p->map[p->y + 1][p->x] != 'X')) ? 1 : 0;
    path += ((p->y > 0) && (p->map[p->y - 1][p->x] != 'X')) ? 1 : 0;
    path += ((p->x < p->width - 1) && (p->map[p->y][p->x + 1] != 'X')) ? 1 : 0;
    path += ((p->x > 0) && (p->map[p->y][p->x - 1] != 'X')) ? 1 : 0;

    if (path == 1 && condition_end(p) == true)
        p->map[p->y][p->x] = '1';
}