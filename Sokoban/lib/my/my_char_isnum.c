/*
** EPITECH PROJECT, 2020
** my_char_isnum.c
** File description:
** my_char_isnum.c
*/

int my_char_isnum(char n)
{
    if (('0' <= n && n <= '9') || n == '(')
        return (1);
    return (0);
}