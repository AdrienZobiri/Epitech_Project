/*
** EPITECH PROJECT, 2020
** B-CPE-110-MPL-1-1-antman-adrien.zobiri
** File description:
** open read
*/

#include "../include/dante.h"

int size_file(char *filepath)
{
    struct stat k;
    int result = 0;

    result = stat(filepath, &k);
    if (result == -1)
        return (84);
    return (k.st_size);
}

int open_read(dante_t *p)
{
    int fd = 0;
    int size = 0;
    int r = 0;

    if (p->argv[1] == NULL)
        my_printf("Please can you select a file to load\n");
    fd = open(p->argv[1], O_RDONLY);
    if (fd == -1)
        return (84);
    size = size_file(p->argv[1]);
    p->buff = malloc(sizeof(char) * (size + 1));
    my_memset(p->buff, size, '\0');
    r = read(fd, p->buff, size);
    if (r == -1)
        return (84);
    close(fd);
    return (0);
}