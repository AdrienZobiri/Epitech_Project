/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** my_strlowcase.c
*/

char *my_strlowcase(char *str)
{
    for (int t = 0; str[t] != '\0'; t++) {
        if ((str[t] >= 'A') && (str[t] <= 'Z'))
            str[t] += 32;
    }
    return (str);
}