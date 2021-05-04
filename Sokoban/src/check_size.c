/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** check if the size of terminal si correctly adapted for read all the map
*/

#include "sokoban.h"

int check_size_term(sokoban *p)
{
    if (p->size_y > LINES || p->size_x > COLS) {
        mvprintw((LINES / 2), ((COLS / 2) - 9), "expand the terminal");
        return (1);
    }
    return (0);
}