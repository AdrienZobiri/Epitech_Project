/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** end_game
*/

#include "matchstick.h"

bool end_game(matchstick_t *p)
{
    for (int x = 0; x <= my_getnbr(p->argv[1]); x++)
        if (p->sticks[x] != 0)
            return (false);
    return (true);
}

int end_statut(int player)
{
    if (player == 0) {
        my_printf("I lost... snif... but I'll get you next time!!\n");
        return (1);
    } else {
        my_printf("You lost, too bad...\n");
        return (2);
    }
}