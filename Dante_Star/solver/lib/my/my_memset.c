/*
** EPITECH PROJECT, 2020
** my_memset.c
** File description:
** my_memset.c
*/

void my_memset(char *str, int size, char c)
{
    for (int t = 0; t <= size; t++)
        str[t] = c;
}