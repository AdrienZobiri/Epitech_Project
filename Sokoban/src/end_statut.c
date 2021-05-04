/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** main and redirect
*/

#include "sokoban.h"

int cannot_moove(sokoban *p, int y, int x)
{
        if (p->map[y - 1][x] == '#' && p->map[y][x - 1] == '#')
            return (1);
        if (p->map[y + 1][x] == '#' && p->map[y][x + 1] == '#')
            return (1);
        if (p->map[y + 1][x] == '#' && p->map[y][x - 1] == '#')
            return (1);
        if (p->map[y - 1][x] == '#' && p->map[y][x + 1] == '#')
            return (1);
    return (0);
}

void condition_loose(sokoban *p)
{
    int mooving_box = 0;
    int blocked_box = 0;

    for (int y = 0; p->map[y]; y++)
        for (int x = 0; p->map[y][x]; x++)
            if (p->map[y][x] == 'X') {
                mooving_box++;
                blocked_box += cannot_moove(p, y, x) == 1 ? 1 : 0;
            }
    if (mooving_box == blocked_box) {
        printer_map(p);
        endwin();
        exit(1);
    }
}

bool condition_win(sokoban *p)
{
    for (int x = 0; p->hole[x]; x++)
        if (p->map[p->hole[x][0]][p->hole[x][1]] != 'X')
            return (false);
    return (true);
}

bool end_statut(sokoban *p)
{
    if (condition_win(p))
        return (true);
    condition_loose(p);
    return (false);
}