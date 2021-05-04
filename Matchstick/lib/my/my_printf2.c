/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** Printf2
*/

#include "my.h"

void flag_min(va_list(ap), struct my_printf *p)
{
    if (p->flag == 'c') {
        char m = va_arg(ap, int);
        my_putchar (m);
        return;
    }
    if (p->flag == 'd' || p->flag == 'i') {
        my_put_nbr (va_arg(ap, int));
        return;
    }
    if (p->flag == 'e')
        return;
    if (p->flag == 'f')
        return;
    if (p->flag == 'i')
        return;
}

void flag_min2(va_list(ap), struct my_printf *p)
{
    if (p->flag == 'o') {
        my_putstr(my_switch_to_base(va_arg(ap, int), 8));
        return;
    }
    if (p->flag == 's') {
        my_putstr(va_arg(ap, char*));
        return;
    }
    if (p->flag == 'u') {
        my_put_nbr (va_arg(ap, int));
        return;
    }
    if (p->flag == 'x')
        return;
}