/*
** EPITECH PROJECT, 2020
** navy
** File description:
** start maps
*/

#include "navy.h"

int size_maps(char *map_select)
{
    struct stat k;
    int result = 0;

    result = stat(map_select, &k);
    if (result == -1)
        return (84);
    return (k.st_size);
}

void read_void_maps(struct navy *p)
{
    int r;
    int fd;
    int size;

    fd = open("src/void_maps.txt", O_RDONLY);
    if (fd == -1)
        return ;
    size = size_maps("src/void_maps.txt");
    p->buffer = malloc(sizeof(char) * (size + 1));
    r = read(fd, p->buffer, size);
    p->buffer[size] = '\0';
    if (r == -1)
        return ;
}
