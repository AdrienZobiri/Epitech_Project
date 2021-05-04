/*
** EPITECH PROJECT, 2020
** my_str_islower.c
** File description:
** my_str_islower.c
*/

int my_str_islower(char const *str)
{
    for (int t = 0; str[t] != '\0'; t++) {
        if (str[t] < 'a' || str[t] > 'z')
            return (0);
    }
    return (1);
}