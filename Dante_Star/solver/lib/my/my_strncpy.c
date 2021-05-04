/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int t = 0; n > t; t++)
        dest[t] = src[t];
    return (dest);
}
