/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** remove stick
*/

#include "matchstick.h"

void remove_stick(matchstick_t *p)
{
    int z = 2 * my_getnbr(p->argv[1]);
    int x;

    for (int y = 0; y < p->matches; y++) {
        for (x = z; p->map[p->line][x] != '|'; x--);
        p->map[p->line][x] = ' ';
    }
    p->sticks[p->line] -= p->matches;
}