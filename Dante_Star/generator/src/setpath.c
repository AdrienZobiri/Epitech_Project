/*
** EPITECH PROJECT, 2021
** dante
** File description:
** setpath
*/

#include "../include/dante.h"

void go_to_one(dante_t *p)
{
    if (p->y+1 < p->height && p->map[p->y+1][p->x] == '1') {
        p->y++;
        return ;
    }
    if (p->x+1 < p->width && p->map[p->y][p->x+1] == '1') {
        p->x++;
        return ;
    }
    if (p->y-1 > 0 && p->map[p->y-1][p->x] == '1') {
        p->y--;
        return ;
    }
    if (p->x-1 > 0 && p->map[p->y][p->x-1] == '1') {
        p->x--;
        return ;
    }
}

void try_add(dante_t *p, int my, int mx)
{
    if (p->map[p->y][p->x] == '1')
        set_point_tow(p);
    p->y += my;
    p->x += mx;
    if (p->x < 0 || p->y < 0 || p->x >= p->width || p->y >= p->height \
    || p->map[p->y][p->x] == '2' || \
    (p->map[p->y][p->x] == '1' && p->map[p->y-my][p->x-mx] != '2')) {
        p->y -= my;
        p->x -= mx;
        return ;
    }
    if (p->map[p->y][p->x] == 'X')
        set_point_one(p);
    if (p->map[p->y][p->x] == '1')
        set_point_tow(p);
    if (p->map[p->y][p->x] == 'X') {
        p->y -= my;
        p->x -= mx;
    }
    if (p->map[p->y][p->x] == '2')
        go_to_one(p);
}

void setpath(dante_t *p)
{
    int dir;

    p->map[p->y][p->x] = '1';
    while (p->map[p->height-1][p->width-1] == 'X' || p->x != 0 || p->y != 0) {
        dir = rand() % 4;
        if (dir == 0)
            try_add(p, -1, 0);
        if (dir == 1)
            try_add(p, 0, 1);
        if (dir == 2)
            try_add(p, 1, 0);
        if (dir == 3)
            try_add(p, 0, -1);
    }
    for (int y = 0; p->map[y] != NULL; y++)
        for (int x = 0; p->map[y][x] != '\0'; x++)
            p->map[y][x] = (p->map[y][x] == '1' || p->map[y][x] == '2') ? '*' :\
            p->map[y][x];
    if (p->perfect == false)
        create_loop(p);
}