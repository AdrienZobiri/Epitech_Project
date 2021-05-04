/*
** EPITECH PROJECT, 2020
** navy
** File description:
** load position
*/

int test_format_map(char *pos)
{
    if (pos[1] != ':' || pos[4] != ':')
        return (84);
    if (pos[9] != ':' || pos[12] != ':')
        return (84);
    if (pos[17] != ':' || pos[20] != ':')
        return (84);
    if (pos[25] != ':' || pos[28] != ':')
        return (84);
    if (pos[0] == pos[8] || pos[0] == pos[16] || pos[0] == pos[24])
        return (84);
    if (pos[8] == pos[16] || pos[8] == pos[24] || pos[16] == pos[24])
        return (84);
    return (0);
}