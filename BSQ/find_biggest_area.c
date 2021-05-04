/*
** EPITECH PROJECT, 2020
** bsq.c
** File description:
** find square
*/

#include "bsq.h"

int test_o(struct bsq *p, int a, int b)
{
    if (p->temp[p->start_l + a][p->start_c + b] == 'o') {
        p->square--;
        return (0);
    }
    return (1);
}

int back_zero(struct bsq *p, int a, int b)
{
    if (p->temp[p->start_l + a][p->start_c + b] == '\0') {
        p->square--;
        return (0);
    }
    return (1);
}

int size_test(struct bsq *p, int a)
{
    if ((p->start_l + a) >= p->z) {
        p->square--;
        return (0);
    }
    return (1);
}

int test_par_ligne(struct bsq *p)
{
    int a = 0;
    int b = 0;

    while (a < p->square || b < p->square) {
        if (size_test(p, a) == 0)
            return (-2);
        if (back_zero(p, a, b) == 0)
            return (-1);
        if (test_o(p, a, b) == 0)
            return (0);
        if (b == p->square) {
            a++;
            b = 0;
        } else
            b++;
    }
    if (test_o(p, a, b) == 0)
        return (0);
    return (1);
}

void counter(struct bsq *p)
{
        for (p->square = 1; test_par_ligne(p) == 1; p->square++);
        if (p->square > p->max_square) {
            p->max_c = p->start_c;
            p->max_l = p->start_l;
            p->max_square = p->square;
        }
}