/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** my_strupcase.c
*/

char *my_strupcase(char *str)
{
    for (int t = 0; str[t] != '\0'; t++) {
        if ((str[t] >= 'a') && (str[t] <= 'z'))
            str[t] -= 32;
    }
    return (str);
}