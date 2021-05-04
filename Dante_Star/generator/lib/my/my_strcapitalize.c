/*
** EPITECH PROJECT, 2020
** My_strcapitalize
** File description:
** le capitalizme vainqura
*/

char *secondary_condition(char *str, int i)
{
    if ((str[i - 1] < 'A' || str [i - 1] > 'Z') &&\
    (str[i - 1] < 'a' || str [i - 1] > 'z') &&\
    (str[i - 1] < '0' || str [i - 1] > '9'))
        if (str[i] >= 'a' && str [i] <= 'z')
            str[i] = str[i] - 32;
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i;

    for (i = 0; str[i] != 0; i++)
        if (str[i] >= 'A' && str [i] <= 'Z')
            str[i] = str[i] + 32;
    for (i = 0; str[i] != 0; i++)
        secondary_condition(str, i);
    return (str);
}