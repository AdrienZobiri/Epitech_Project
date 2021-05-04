/*
** EPITECH PROJECT, 2020
** navy
** File description:
** attack round
*/

#include "navy.h"

void modifboat1(struct navy *p)
{
    p->shoot_x = p->shoot[0] - 'A' + 1;
    p->shoot_y = p->shoot[1] - '0';
    if (p->shoot_x != 1)
        p->shoot_x += (p->shoot_x - 1);
    if (p->hit == true)
        p->boat[p->shoot_y + 1][p->shoot_x + 1] = 'x';
    else
        p->boat[p->shoot_y + 1][p->shoot_x + 1] = 'o';
}

void modifattack1(struct navy *p)
{
    p->shoot_x = p->shoot[0] - 'A' + 1;
    p->shoot_y = p->shoot[1] - '0';
    if (p->shoot_x != 1)
        p->shoot_x += (p->shoot_x - 1);
    if (p->hit == true)
        p->attacks[p->shoot_y + 1][p->shoot_x + 1] = 'x';
    else
        p->attacks[p->shoot_y + 1][p->shoot_x + 1] = 'o';
}

void modifboat2(struct navy *p)
{
    p->shoot_x = p->shoot[0] - 'A' + 1;
    p->shoot_y = p->shoot[1] - '0';
    if (p->shoot_x != 1)
        p->shoot_x += (p->shoot_x - 1);
    if (p->hit == true)
        p->boat2[p->shoot_y + 1][p->shoot_x + 1] = 'x';
    else
        p->boat2[p->shoot_y + 1][p->shoot_x + 1] = 'o';
}

void modifattack2(struct navy *p)
{
    p->shoot_x = p->shoot[0] - 'A' + 1;
    p->shoot_y = p->shoot[1] - '0';
    if (p->shoot_x != 1)
        p->shoot_x += (p->shoot_x - 1);
    if (p->hit == true)
        p->attacks2[p->shoot_y + 1][p->shoot_x + 1] = 'x';
    else
        p->attacks2[p->shoot_y + 1][p->shoot_x + 1] = 'o';
}

void action_post_attack(struct navy *p)
{
    if (p->terminal == 2) {
        if (p->player == 1) {
            modifboat2(p);
            modifattack1(p);
        } else if (p->player == 2) {
            modifboat1(p);
            modifattack2(p);
        }
    } else if (p->terminal == 3) {
        if (p->player == 1) {
            modifboat1(p);
            modifattack2(p);
        } else if (p->player == 2) {
            modifboat2(p);
            modifattack1(p);
        }
    }
}