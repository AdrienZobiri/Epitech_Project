/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** convert txt in XPM
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size_file(char *filepath)
{
    struct stat k;
    int result = 0;

    result = stat(filepath, &k);
    if (result == -1)
        return (84);
    return (k.st_size);
}

char *open_read(char *filepath)
{
    int fd = 0;
    int size = 0;
    int r = 0;
    char *buff;

    if (filepath == NULL)
        printf("Please can you select a file to load\n");
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        exit(84);
    size = size_file(filepath);
    buff = malloc(sizeof(char) * (size + 1));
    memset(buff, '\0', size);
    r = read(fd, buff, size);
    if (r == -1)
        exit(84);
    close(fd);
    return (buff);
}

char** alloc_map(char *buff)
{
    char **map;
    int height = 0;
    int width = 0;
    int z = 0;

    for (; buff[width] != '\n'; width++);
    for (int x = 0; buff[x] != '\0'; x++)
        height += buff[x] == '\n'? 1 : 0;
    height++;
    map = malloc(sizeof(char *) * (height + 1));
    map[height] = NULL;
    for (int x = 0; x < height; x++, z++) {
        map[x] = malloc(sizeof(char) * (width + 2));
        for (int y = 0; y < width; y++, z++)
            map[x][y] = buff[z];
        map[x][width] = '\n';
        map[x][width+1] = '\0';
    }
    map[height-1][width] = '\0';
    return (map);
}

int write_header_generator(char *filepath, char *name, char *x, char *y)
{
    int fd = open(filepath, O_CREAT | O_WRONLY, 777);
    dprintf(fd, "/* XPM */\nstatic char * %s[] = {\n\"%s %s 2 1\",\n\"* c white\",\n\"X c red\",\n", name, x, y);
    return (fd);
}

int write_header_solver(char *filepath, char *name, char *x, char *y)
{
    int fd = open(filepath, O_CREAT | O_WRONLY, 777);
    dprintf(fd, "/* XPM */\nstatic char * %s[] = {\n\"%s %s 3 1\",\n\"* c white\",\n\"X c red\",\"o c blue\",\n", name, x, y);
    return (fd);
}

void compled_file(int fd, char **map)
{
    for (int x = 0; map[x] != NULL; x++) {
        if (map[x+1] != NULL)
            map[x][strlen(map[x])-1] = '\0';
        write(fd, "\"", 1);
        write(fd, map[x], strlen(map[x]));
        if (map[x+1] != NULL)
            write(fd, "\",\n", 3);
        else
            write(fd, "\"", 1);
    }
    write(fd, "};", 3);
}

int main(int argc, char **argv)
{
    if (argc != 5)
        exit (84);
    char *name = malloc(sizeof(char) * strlen(argv[1]) + 2);
    memset(name, '\0', strlen(argv[1]) + 1);
    strcpy(name, argv[1]);
    char *filepath = strdup(argv[1]);
    char *buff = open_read(filepath);
    char **map = alloc_map(buff);
    filepath = strcat(filepath, ".xpm");

    int fd = 0;
    if (atoi(argv[4]) == 1) // generateur
        fd = write_header_generator(filepath, name, argv[2], argv[3]);
    else // solver
        fd = write_header_solver(filepath, name, argv[2], argv[3]);
    compled_file(fd, map);
    return (0);
}