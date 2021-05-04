/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** my_is_prime.c
*/

int my_is_prime(int nb)
{
    for (int t = 2; t != nb; t++) {
        if ((nb % t) == 0)
            return (1);
    }
    return (0);
}