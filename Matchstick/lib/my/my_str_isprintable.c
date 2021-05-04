/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** my_str_isprintable.c
*/

int my_str_isprintable(char const *str)
{
    for (int t = 0; str[t] != '\0'; t++) {
        if (str[t] < ' ')
            return (0);
    }
    return (1);
}