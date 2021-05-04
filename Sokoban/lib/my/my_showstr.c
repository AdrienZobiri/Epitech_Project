/*
** EPITECH PROJECT, 2020
** my_showstr.c
** File description:
** my_showstr.c
*/

#include <unistd.h>

#include "my.h"

void my_showstr(char const *str)
{
    char hex[] = "00";

    for (int t = 0; str[t] != '\0'; t++) {
        if (str[t] < 32) {
            my_putchar(92);
            my_putstr(my_dectohex(str[t], hex));
        } else {
            my_putchar(str[t]);
        }
        hex[0] = '0';
        hex[1] = '0';
    }
}