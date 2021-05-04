/*
** EPITECH PROJECT, 2021
** dante
** File description:
** error_handling
*/

#include "../include/dante.h"

void error_handling(dante_t *p)
{
    if (p->argc < 3 || p->argc > 4)
        error(84, 0, "expected 2 or 3 parameters\n");
    if (my_str_isnum(p->argv[1]) != 1 || my_str_isnum(p->argv[2]) != 1)
        error(84, 0, "width and height must be numbers\n");
    if ((p->argc == 4) && strcmp("perfect", p->argv[3]) != 0 && \
    strcmp("imperfect", p->argv[3]) != 0)
        error(84, 0, "choose if you want a perfect or imperfect maze");
    p->width = atoi(p->argv[1]);
    p->height = atoi(p->argv[2]);
    if ((p->argc == 4) && strcmp("perfect", p->argv[3]) == 0)
        p->perfect = true;
    else
        p->perfect = false;
}