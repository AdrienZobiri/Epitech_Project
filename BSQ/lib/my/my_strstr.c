/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** my_strstr.c
*/

int my_strcmp(char const *, char const *);

char *my_strstr(char *str, char const *to_find)
{
    if (my_strcmp(to_find, str) != 0 && str != 0)
        return (my_strstr(str+1, to_find));
    if (my_strcmp(to_find, str) == 0 && str != 0)
        return str;
    return (0);
}