/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** my_find_prime_sup.c
*/

int my_find_prime_sup(int nb)
{
    for (int t = 2; t != nb; t++) {
        if ((nb % t) == 0)
            return (t);
    }
    return (0);
}