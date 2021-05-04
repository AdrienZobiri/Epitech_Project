/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main for project navy
*/

#include "navy.h"

void what_player(struct navy *p, int argc)
{
    if (argc == 2)
        p->player = 1;
    else if (argc == 3)
        p->player = 2;
}

int file_path_1(struct navy *p)
{
    int fd;
    int size;
    char *buff;

    fd = open("src/filepath1", O_WRONLY);
    write(fd, p->filepath, my_strlen(p->filepath));
    usleep(500);
    fd = open("src/filepath2", O_RDONLY);
    size = size_maps("src/filepath2");
    p->filepath2 = malloc(sizeof(char) * (size + 1));
    fd = read(fd, p->filepath2, size);
    if (fd == -1)
        return (84);
    p->filepath2[size] = '\0';
    return (0);
}

int file_path_2(struct navy *p)
{
    int fd;
    int size;
    char *buff;

    fd = open("src/filepath2", O_WRONLY);
    write(fd, p->filepath, my_strlen(p->filepath));
    usleep(500);
    fd = open("src/filepath1", O_RDONLY);
    size = size_maps("src/filepath1");
    buff = malloc(sizeof(char) * (size + 1));
    fd = read(fd, buff, size);
    if (fd == -1)
        return (84);
    buff[size] = '\0';
    p->filepath2 = p->filepath;
    p->filepath = buff;
    return (0);
}