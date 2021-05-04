/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** restarter maps
*/

#include "sokoban.h"

void reset_map(sokoban *p)
{
    for (int y = 0; p->map[y]; y++)
        for (int x = 0; p->map[y][x]; x++)
            if (p->map[y][x] == 'O' || p->map[y][x] == 'X')
                p->map[y][x] = ' ';
    p->map[p->py][p->px] = ' ';
    for (int x = 0; p->hole[x]; x++)
        p->map[p->hole[x][0]][p->hole[x][1]] = 'O';
    for (int x = 0; p->box[x]; x++)
        p->map[p->box[x][0]][p->box[x][1]] = 'X';
    p->map[p->origin[0]][p->origin[1]] = 'P';
    p->py = p->origin[0];
    p->px = p->origin[1];
}

int restarter(sokoban *p)
{
    if (p->key == 32) {
        reset_map(p);
        return (1);
    }
    return (0);
}