/*
** EPITECH PROJECT, 2020
** switch_to_base.c
** File description:
** convertor base
*/

#include "my.h"

char *my_switch_to_base(unsigned int origine, int base)
{
    char rest[20];

    for (int i = 0; origine > 0; i++) {
        rest[i] = 48 + (origine % base);
        origine = origine / base;
        rest[i + 1] = '\0';
    }
    return (my_revstr(rest));
}