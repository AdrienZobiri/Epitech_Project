/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int t = 0;

    while (n > t)
    {
        dest[t] = src[t];
        t++;
    }
    return (dest);
}
