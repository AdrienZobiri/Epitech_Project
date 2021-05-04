/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** redirect
*/

#include "matchstick.h"

int redirect(matchstick_t *p)
{
    int player = 0;
    int max = my_getnbr(p->argv[2]);

    create_map(p);
    while (end_game(p) == false) {
        for (int y =0; p->map[y]; y++)
            my_printf("%s\n", p->map[y]);
        if (player == 0) {
            if (playerzeor(p, max) == 84)
                return (0);
            player = 1;
        } else {
            my_printf("\nAI's turn...\n");
            playerone(p);
            player = 0;
        }
    }
    for (int y =0; p->map[y]; y++)
        my_printf("%s\n", p->map[y]);
    return (end_statut(player));
}