/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** test what's commands put in
*/

#include "sokoban.h"

bool test_o(sokoban *p)
{
    for (int x = 0; p->hole[x]; x++) {
        if (p->hole[x][0] == p->py && p->hole[x][1] == p->px)
            return (true);
    }
    return (false);
}

void action_move(sokoban *p, int my, int mx)
{
    if (p->map[p->py + my][p->px + mx] == 'X' && \
    p->map[p->py + (2*my)][p->px + (2*mx)] != 'X' && \
    p->map[p->py + (2*my)][p->px + (2*mx)] != '#') {
        if (test_o(p) == true)
            p->map[p->py][p->px] = 'O';
        else
            p->map[p->py][p->px] = ' ';
        p->map[p->py + (2*my)][p->px + (2*mx)] = 'X';
        p->map[p->py + my][p->px + mx] = 'P';
        p->py += my;
        p->px += mx;
    } else if (p->map[p->py + my][p->px + mx] != 'X') {
        if (test_o(p) == true)
            p->map[p->py][p->px] = 'O';
        else
            p->map[p->py][p->px] = ' ';
        p->map[p->py + my][p->px + mx] = 'P';
        p->py += my;
        p->px += mx;
    }
}

void move_player(sokoban *p, int action)
{
    p->x = p->px;
    p->y = p->py;
    if (action == 8)
        action_move(p, -1, 0);
    if (action == 2)
        action_move(p, 1, 0);
    if (action == 6)
        action_move(p, 0, 1);
    if (action == 4)
        action_move(p, 0, -1);
}