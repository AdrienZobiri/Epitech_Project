/*
** EPITECH PROJECT, 2020
** navy
** File description:
** selection attack
*/

#include "navy.h"

void test_1attacked(struct navy *p)
{
    p->shoot_x = p->shoot[0] - 'A' + 1;
    p->shoot_y = p->shoot[1] - '0';
    if (p->shoot_x != 1)
        p->shoot_x += (p->shoot_x - 1);
    if (p->boat[p->shoot_y + 1][p->shoot_x + 1] != '.') {
        my_printf("%c%c: hit\n\n", p->shoot[0], p->shoot[1]);
        p->hit = true;
    } else {
        my_printf("%c%c: missed\n\n", p->shoot[0], p->shoot[1]);
        p->hit = false;
    }
    p->shoot_x = p->shoot[0] - 'A' + 1;
}

void test_2attacked(struct navy *p)
{
    p->shoot_x = p->shoot[0] - 'A' + 1;
    p->shoot_y = p->shoot[1] - '0';
    if (p->shoot_x != 1)
        p->shoot_x += (p->shoot_x - 1);
    if (p->boat2[p->shoot_y + 1][p->shoot_x + 1] != '.') {
        my_printf("%c%c: hit\n\n", p->shoot[0], p->shoot[1]);
        p->hit = true;
    } else {
        my_printf("%c%c: missed\n\n", p->shoot[0], p->shoot[1]);
        p->hit = false;
    }
    p->shoot_x = p->shoot[0] - 'A' + 1;
}

void wait_attack(struct navy *p)
{
    my_printf("waiting for enemy's attack...\n");
    receive_signal(p);
    if (p->terminal == 2)
        test_1attacked(p);
    else if (p->terminal == 3)
        test_2attacked(p);
}