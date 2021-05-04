/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** IA
*/

#include "matchstick.h"

void delete_one_by_one(matchstick_t *p)
{
    bool stop = false;

    p->matches = 1;
    p->line = 1;
    while (stop == false) {
        if (p->sticks[p->line] > 0) {
            remove_stick(p);
            stop = true;
        } else
            p->line++;
    }
}

void playerone(matchstick_t *p)
{
    delete_one_by_one(p);
    my_printf("AI removed %d match(es) from line %d\n",\
    p->matches, p->line);
}