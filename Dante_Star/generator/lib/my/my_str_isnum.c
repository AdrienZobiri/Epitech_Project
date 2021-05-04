/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** my_str_isnum.c
*/

int my_str_isnum(char const *str)
{
    char c;

    for (int t = 0; str[t] != '\0' && str[t] != '\n'; t++) {
        c = str[t];
        if ((c < '0' || c > '9'))
            return (0);
    }
    return (1);
}