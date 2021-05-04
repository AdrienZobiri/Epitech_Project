/*
** EPITECH PROJECT, 2020
** navy
** File description:
** statut checker
*/

#include "navy.h"

void check_statut(struct navy *p)
{
    if (p->player == 1 && p->hit == true)
        p->scorep1++;
    else if (p->player == 2 && p->hit == true)
        p->scorep2++;
    if (p->scorep1 == 14)
        p->statut = 1;
    if (p->scorep2 == 14)
        p->statut = 2;
}