/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int t = 0;
    int moins = 0;
    int sto = 0;

    for (; str[t] == '+' || str[t] == '-'; t++) {
        if (str[t] == '-')
            moins++;
    }
    for (; str[t] >= '0' && str[t] <= '9'; t++) {
        sto *= 10;
        sto += str[t];
        sto -= 48;
    }
    if ((moins % 2) != 0)
        sto = sto * -1;
    return (sto);
}