/*
** EPITECH PROJECT, 2021
** dante
** File description:
** set point 2
*/

#include "../include/dante.h"

int test_around(dante_t *p, int py, int px)
{
    if (px < 0 || py < 0 || px >= p->width || py >= p->height)
        return (0);
    if (p->map[py][px] == '2' || p->map[py][px] == 'X' || p->map[py][px] == '0')
        return (0);
    if (p->map[py][px] == '1' || p->map[py][px] == '*')
        return (1);
    return (1);
}

void set_point_tow(dante_t *p)
{
    int around_not_usable = 0;

    around_not_usable += (test_around(p, p->y+1, p->x) == 0) ? 1 : 0;
    around_not_usable += (test_around(p, p->y-1, p->x) == 0) ? 1 : 0;
    around_not_usable += (test_around(p, p->y, p->x+1) == 0) ? 1 : 0;
    around_not_usable += (test_around(p, p->y, p->x-1) == 0) ? 1 : 0;
    if (around_not_usable == 3 && (p->x != 0 || p->y != 0))
        p->map[p->y][p->x] = '2';
}