/*
** EPITECH PROJECT, 2020
** convnbr.c
** File description:
** switch int to string
*/

#include "my.h"

char *transfo(int i, int nbr, char *str, int neg)
{
    char buffer[100] = {0};

    for (; nbr > 0; i++) {
        buffer[i] = nbr % 10 + 48;
        nbr /= 10;
    }
    if (neg == -1)
        buffer[i] = '-';
    str = malloc(sizeof(char) * (my_strlen(buffer) + 2));
    str = my_revstr(buffer);
    return (str);
}

char *my_convnbr(int nbr, char *str)
{
    int i = 0;
    int neg = 0;

    if (nbr == 0) {
        str = malloc(sizeof(char) * 2);
        str[0] = 48;
        str[1] = '\0';
        return (str);
    } else if (nbr < 0) {
        nbr = nbr * -1;
        neg = -1;
    }
    return (transfo(i, nbr, str, neg));
}