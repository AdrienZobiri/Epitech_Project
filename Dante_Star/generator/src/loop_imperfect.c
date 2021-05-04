/*
** EPITECH PROJECT, 2021
** dante
** File description:
** loop for imperfect waze
*/

#include "../include/dante.h"

void create_loop(dante_t *p)
{
    int line = (rand() % p->height);
    int colm = (rand() % p->width);

    if (line == p->height-1 || colm == p->width-1 || line == 0 || colm == 0)
        create_loop(p);
    else {
        p->map[line + 1][colm] = '*';
        p->map[line - 1][colm] = '*';
        p->map[line][colm + 1] = '*';
        p->map[line][colm - 1] = '*';
        p->map[line + 1][colm - 1] = '*';
        p->map[line - 1][colm - 1] = '*';
        p->map[line + 1][colm + 1] = '*';
        p->map[line - 1][colm + 1] = '*';
        p->map[line][colm] = 'X';
    }
}