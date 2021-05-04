/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** create_map
*/

#include "matchstick.h"

void line_star(matchstick_t *p, int y, int z)
{
    for (int x = 0; x < (z + z + 2); x++) {
        p->map[y][x] = '*';
        if (x == (z + z + 1))
            p->map[y][x] = '\0';
    }
}

void star_frame(matchstick_t *p, int y, int z)
{
    for (int x = 0; x < (z + z + 2); x++) {
        if (x == 0 || x == (z + z)) {
            p->map[y][x] = '*';
        } else if (x == (z + z + 1)) {
            p->map[y][x] = '\0';
        } else
            p->map[y][x] = ' ';
    }
}

void set_stick(matchstick_t *p, int z)
{
    int s = z;
    int e = z;

    p->sticks = malloc(sizeof(int) * (z+1));
    for (int a = 0; a <= z; a++)
        p->sticks[a] = 0;
    for (int y = 1; p->map[y][1] != '*'; y++) {
        for (int x = 1; x <= e; x++)
            if (x >= s) {
                p->map[y][x] = '|';
                p->sticks[y] ++;
            }
        s -= 1;
        e += 1;
    }
}

void create_map(matchstick_t *p)
{
    int z = my_getnbr(p->argv[1]);

    p->map = malloc(sizeof(char*) * (z + 3));
    p->map[z + 2] = NULL;
    for (int y = 0; y < (z + 2); y++) {
        p->map[y] = malloc(sizeof(char) * (z + z + 3));
        if (y == 0 || y == (z + 1))
            line_star(p, y, z);
        else
            star_frame(p, y, z);
    }
    set_stick(p, z);
}