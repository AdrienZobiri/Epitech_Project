/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** destroy and free
*/

#include "sokoban.h"

void destroy(sokoban *p)
{
    endwin();
    for (int x = 0; p->map[x] != NULL; x++)
        free(p->map[x]);
    if (p->map != NULL)
        free(p->map);
    if (p->cmd != NULL)
        free(p->cmd);
    if (p->hole != NULL)
        free(p->hole);
    if (p->box != NULL)
        free(p->box);
}
