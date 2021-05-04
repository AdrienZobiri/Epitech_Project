/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    int t;

    for (t = 0; (t*t) != nb; t++) {
        if ((t*t) > nb)
            return (0);
    }
    return (t);
}