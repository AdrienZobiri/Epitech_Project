/*
** EPITECH PROJECT, 2020
** bsq.c
** File description:
** opening & str word array
*/

#include "bsq.h"

void build_double_board(struct bsq *p)
{
    char numb_lign[5];

    my_memset(numb_lign, 5, '\0');
    for (p->c = 0; p->buffer[p->c] != '\n'; p->c++)
        numb_lign[p->c] = p->buffer[p->c];
    p->z = my_getnbr(numb_lign);
    p->c++;
    for (p->w = p->c; p->buffer[p->w] != '\n'; p->w++);
    p->w -= (p->c);
    p->temp = malloc(sizeof(char*) * (p->z + 1));
    p->temp[p->z] = NULL;
    for (p->y = 0; p->y < p->z; p->y++) {
        p->temp[p->y] = malloc(sizeof(char) * (p->w + 1));
        my_memset(p->temp[p->y], p->w, '\0');
        for (p->x = 0; p->x < p->w; p->x++) {
            p->temp[p->y][p->x] = p->buffer[p->c];
            p->c++;
        }
        p->c++;
    }
}

int fs_understand_return_of_read(struct bsq *p)
{
    int r = 0;

    p->buffer = malloc(sizeof(char) * (p->size + 1));
    my_memset(p->buffer, (p->size), '\0');
    r = read(p->fd, p->buffer, p->size);
    if (p->buffer[0] < '0' || p->buffer[0] > '9')
        r = -1;
    p->no_empty = 1;
    if (r == -1)
        return (84);
    return (0);
}

int fs_open_file(struct bsq *p)
{
    if (p->file == NULL)
        my_putstr("Nom de fichier manquant\n");
    p->fd = open(p->file, O_RDONLY);
    if (p->fd == -1 )
        return (84);
    return (0);
}

void get_lens(struct bsq *p)
{
    struct stat k;
    int result = 0;

    result = stat(p->file, &k);
        if (result == -1)
            p->size = -1;
    p->size = k.st_size;
}