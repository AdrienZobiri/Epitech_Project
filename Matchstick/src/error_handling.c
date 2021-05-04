/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** error_handling
*/

#include "matchstick.h"

int err_line(matchstick_t *p, int first)
{
    if (first == 0)
        return (1);
    if (my_str_isnum(p->bufferl) == 0 || p->bufferl[0] == '\n') {
        my_printf(ERR_NBR);
        return (1);
    }
    p->line = my_getnbr(p->bufferl);
    if (p->line > my_getnbr(p->argv[1]) || p->line < 1) {
        my_printf(ERR_OUT_RANGE);
        return (1);
    }
    return (0);
}

int err_matches(matchstick_t *p, int max, int first)
{
    if (first == 0)
        return (1);
    if (my_str_isnum(p->bufferm) == 0 || p->bufferm[0] == '\n') {
        my_printf(ERR_NBR);
        return (1);
    }
    p->matches = my_getnbr(p->bufferm);
    if (p->matches > max) {
        my_printf(ERR_MAX_RM, max);
        return (1);
    }
    if (p->matches == 0) {
        my_printf(ERR_MIN_0);
        return (1);
    }
    if (p->matches > p->sticks[p->line]) {
        my_printf(ERR_NO_ENOUGH);
        return (1);
    }
    return (0);
}

int error_handling(matchstick_t *p)
{
    if (p->argc != 3)
        return (84);
    return (0);
}