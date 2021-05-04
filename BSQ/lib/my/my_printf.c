/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** Printf
*/

#include "my.h"

void flag_maj(va_list(ap), struct my_printf *p)
{
    if (p->flag == 'C') {
        char m = va_arg(ap, int);
        my_putchar (m);
        return;
    }
    if (p->flag == 'S') {
        my_putstr(va_arg(ap, char*));
        return;
    }
    if (p->flag == 'X') {
        return;
    }
}

void exception(va_list(ap), struct my_printf *p)
{
    return;
}

void what_flags(char const *str, va_list(ap), struct my_printf *p)
{
    p->i++;
    p->flag = str[p->i];
    if (p->flag == '%') {
        my_putchar('%');
        return;
    }
    flag_maj(ap, p);
    flag_min(ap, p);
    flag_min2(ap, p);
    return;
}

int my_printf(char const *argv, ...)
{
    va_list ap;
    va_start(ap, argv);
    struct my_printf p;

    for (p.i = 0; argv[p.i]; p.i++) {
        if (argv[p.i] == '%') {
            what_flags(argv, ap, &p);
        } else {
            my_putchar(argv[p.i]);
        }
    }
    va_end(ap);
}