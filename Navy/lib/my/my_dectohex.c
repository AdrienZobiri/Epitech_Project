/*
** EPITECH PROJECT, 2020
** my_dectohex.c
** File description:
** my_dectohex.c
*/

char *my_dectohex(char c, char *sto)
{
    for (int t = 0; c != t; t++) {
        sto[1] += 1;
        if (sto[1] == 58)
            sto[1] += 39;
        if (sto[1] == 103) {
            sto[1] = '0';
            sto[0] += 1;
        }
    }
    return (sto);
}