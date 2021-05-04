/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** player
*/

#include "matchstick.h"

int playerzeor(matchstick_t *p, int max)
{
    int first = 0;
    my_printf("\nYour turn:\n");
    while (err_line(p, first) == 1 || err_matches(p, max, first) == 1) {
        first++;
        if (reader(p, 0) == 84)
            return (84);
        if (err_line(p, first) == 0) {
            if (reader(p, 1) == 84)
                return (84);
        } else
            first = 0;
    }
    remove_stick(p);
    my_printf("Player removed %d match(es) from line %d\n",\
    p->matches, p->line);
    return (0);
}