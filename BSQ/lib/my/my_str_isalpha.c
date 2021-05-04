/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** my_str_isalpha.c
*/

int my_str_isalpha(char const *str)
{
    char c;

    for (int t = 0; str[t] != '\0'; t++)
    {
        c = str[t];
        if ((c < 'A' || c > 'Z') || (c > 'z' && c < 'a'))
            return (0);
    }
    return (1);
}