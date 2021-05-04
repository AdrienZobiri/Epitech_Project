/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** my_str_isupper.c
*/

int my_str_isupper(char const *str)
{
    for (int t = 0; str[t] != '\0'; t++)
    {
        if (str[t] < 'A' || str[t] > 'Z')
            return (0);
    }
    return (1);
}