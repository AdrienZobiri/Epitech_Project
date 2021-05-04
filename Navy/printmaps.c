/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main for project navy
*/

#include "navy.h"

void printmaps(struct navy *p, int argc)
{
    if (p->player == 1 && argc == 2) {
        my_printf("my positions:\n");
        for (int i = 0; p->boat[i] != NULL; i++)
            my_printf("%s\n", p->boat[i]);
        my_printf("enemy's positions:\n");
        for (int i = 0; p->attacks[i] != NULL; i++)
            my_printf("%s\n", p->attacks[i]);
    } else if (p->player == 2 && argc == 3) {
        my_printf("my positions:\n");
        for (int i = 0; p->boat2[i] != NULL; i++)
            my_printf("%s\n", p->boat2[i]);
        my_printf("enemy's positions:\n");
        for (int i = 0; p->attacks2[i] != NULL; i++)
            my_printf("%s\n", p->attacks2[i]);
    }
}