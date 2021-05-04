/*
** EPITECH PROJECT, 2020
** bsq.c
** File description:
** main & string for write
*/

#include "bsq.h"

void testfile(struct bsq *p)
{
    p->no_empty = 0;
    for (int i = 0; p->buffer[i] != '\0'; i++)
        if (p->buffer[i] == '.')
            p->no_empty = 1;
}

void remplacer_cross(struct bsq *p)
{
    int yh = 0;

    if (p->no_empty == 1) {
        for (int a = 0; a <= p->max_square; a++)
            for (int b = 0; b <= p->max_square; b++)
                p->temp[p->max_l + a][p->max_c + b] = 'x';
    }
    p->finalstring = malloc(sizeof(char) * my_strlen(p->buffer));
    for (int i = 0; p->temp[i] != NULL; i++) {
        for (int ii = 0; p->temp[i][ii] != '\0'; ii++) {
            p->finalstring[yh] = p->temp[i][ii];
            yh++;
        }
        p->finalstring[yh] = '\n';
        yh++;
    }
    p->finalstring[yh] = '\0';
}

void test_square(struct bsq *p)
{
    for (p->start_l = 0; p->temp[p->start_l] != NULL; p->start_l++) {
        for (p->start_c = 0; p->temp[p->start_l][p->start_c] != '\0' \
        ; p->start_c++) {
            counter(p);
        }
    }
}

int redirect(struct bsq *p)
{
    get_lens(p);
    if (fs_open_file(p) == 84)
        return (84);
    if (fs_understand_return_of_read(p) == 84)
        return (84);
    build_double_board(p);
    test_square(p);
    if (p->max_square == 0)
        testfile(p);
    remplacer_cross(p);
    return (0);
}

int main(int argc, char const **argv)
{
    struct bsq p = {0};
    int r = 0;

    if (argc != 2)
        return (84);
    p.file = (char*)argv[1];
    if (redirect(&p) == 84)
        return (84);
    write(1, p.finalstring, my_strlen(p.finalstring));
    r = close(p.fd);
    return (0);
}