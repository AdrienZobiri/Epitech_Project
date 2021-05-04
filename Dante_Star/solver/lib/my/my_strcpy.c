/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    int t = 0;

    for (t = 0;src[t] != '\0'; t++)
        dest[t] = src[t];
    dest[t] = '\0';
    return (dest);
}