/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include <unistd.h>

int my_putchar(char c);

void my_put_nbr(int nb)
{
    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    if (nb < 0) {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else
        my_putchar(nb + '0');
}