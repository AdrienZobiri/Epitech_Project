/*
** EPITECH PROJECT, 2020
** navy
** File description:
** selection attack
*/

#include "navy.h"

void test_attack12(struct navy *p)
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

void test_attack21(struct navy *p)
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

int test_input(struct navy *p)
{
    if (p->shoot[0] < 65 || p->shoot[0] > 72)
        return (-1);
    int a = p->shoot[1];
    if (a < 49 || a > 56)
        return (-1);

    return (0);
}

void selection_attack(struct navy *p)
{
    int a = -1;
    p->shoot = malloc(sizeof(char) * 3);
    while (a == -1) {
        my_printf("attack: ");
        read(0, p->shoot, 3);
        a = test_input(p);
        if (a == -1)
            write(1, "wrong position\n", 15);
    }
    if (p->terminal == 2)
        test_attack12(p);
    else if (p->terminal == 3)
        test_attack21(p);
    send_signal(p);
}