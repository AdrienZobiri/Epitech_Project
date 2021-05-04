/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** my_strncmp.c
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (n == 0)
        return (0);
    if (s1[0] == '\0' && s2[0] == '\0')
        return (0);
    if (s1[0] == s2[0])
        return (my_strncmp(s1 + 1, s2 + 1, n = n - 1));
    return (s1[0] - s2[0]);
}