/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** test what's commands put in
*/

#include "sokoban.h"

int test_command(sokoban *p)
{
    if (p->key == 27) {
        endwin();
        exit(0);
    }
    if (p->key == KEY_UP && p->map[p->py - 1][p->px] != '#')
        return (8);
    if (p->key == KEY_DOWN && p->map[p->py + 1][p->px] != '#')
        return (2);
    if (p->key == KEY_LEFT && p->map[p->py][p->px - 1] != '#')
        return (4);
    if (p->key == KEY_RIGHT && p->map[p->py][p->px + 1] != '#')
        return (6);
    return (5);
}