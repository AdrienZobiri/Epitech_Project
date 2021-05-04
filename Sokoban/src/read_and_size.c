/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** read faile and get size map
*/

#include "sokoban.h"

void keep_object_position(sokoban *p)
{
    int a = 0;
    int b = 0;

    for (p->y = 0; p->map[p->y]; p->y++)
        for (p->x = 0; p->map[p->y][p->x] != '\0'; p->x++) {
            if (p->map[p->y][p->x] == 'O') {
                p->hole[a][0] = p->y;
                p->hole[a][1] = p->x;
                a++;
            }
            if (p->map[p->y][p->x] == 'X') {
                p->box[b][0] = p->y;
                p->box[b][1] = p->x;
                b++;
            }
            if (p->map[p->y][p->x] == 'P') {
                p->origin[0] = p->y;
                p->origin[1] = p->x;
            }
        }
}

void switch_double_board(sokoban *p, char *buffer, int size)
{
    int w = 0;

    for (p->size_x = 0; buffer[p->size_x] != '\n'; p->size_x++);
    p->size_x++;
    p->map = malloc(sizeof(char*) * ((size + 1) / p->size_x + 2));
    p->size_y = ((size + 1) / p->size_x + 1) - 1;
    p->map[p->size_y] = NULL;
    for (p->y = 0; p->y < p->size_y; p->y++, w++) {
        p->map[p->y] = malloc(sizeof(char) * (p->size_x + 2));
        my_memset(p->map[p->y], (p->size_x + 1), '\0');
        p->map[p->size_y] = NULL;
        for (p->x = 0; buffer[w] != '\n' && buffer[w] != '\0'; p->x++, w++)
            p->map[p->y][p->x] = buffer[w];
        p->map[p->y][p->x] = '\0';
    }
}

void test_format_map(sokoban *p, char *bf)
{
    int h = 0;
    int b = 0;
    int pl = 0;

    for (int x = 0; bf[x] != '\0'; x++) {
        pl += bf[x] == 'P' ? 1 : 0;
        h += bf[x] == 'O' ? 1 : 0;
        b += bf[x] == 'X' ? 1 : 0;
        if (bf[x] != '\n' && bf[x] != '#' && bf[x] != 'X' && bf[x] != ' '\
        && bf[x] != 'O' && bf[x] != 'P')
            exit (84);
    }
    if (pl != 1 || h != b)
        exit(84);
    p->hole = malloc(sizeof(int*) * (h + 1));
    p->box = malloc(sizeof(int*) * (h + 1));
    p->origin = malloc(sizeof(int) * 2);
    for (int x = 0; x < h; p->hole[x] = malloc(sizeof(int) * 2),\
    p->box[x++] = malloc(sizeof(int) * 2));
}

int size_file(char *map_select)
{
    struct stat k;
    int result = 0;

    result = stat(map_select, &k);
    if (result == -1)
        exit (84);
    return (k.st_size);
}

void read_map(sokoban *p)
{
    int r;
    int fd;
    int size;
    char *buffer;

    fd = open(p->argv[1], O_RDONLY);
    if (fd == -1)
        exit (84);
    size = size_file(p->argv[1]);
    buffer = malloc(sizeof(char) * (size + 1));
    r = read(fd, buffer, size);
    buffer[size] = '\0';
    if (r == -1)
        exit (84);
    test_format_map(p, buffer);
    switch_double_board(p, buffer, size);
    keep_object_position(p);
    free(buffer);
    p->py = p->origin[0];
    p->px = p->origin[1];
}