/*
** EPITECH PROJECT, 2020
** navy
** File description:
** load position
*/

#include "navy.h"

static struct position
{
    char *posit;
    char *posit2;
    int size_boat;
    int x1;
    int y1;
    int z;
} position;

int place_boat2(struct navy *p, struct position *L)
{
    if (L->posit2[L->z + 2] == L->posit2[L->z + 5]) {
        if (L->x1 != 1)
            L->x1 += (L->x1 - 1);
        for (int ii = 0; ii < L->size_boat; ii ++) {
            if (p->boat2[L->y1 + 1 + ii][L->x1 + 1] != '.')
                return (84);
            p->boat2[L->y1 + 1 + ii][L->x1 + 1] = (L->size_boat + '0');
        }
    }
    if (L->posit2[L->z + 3] == L->posit2[L->z + 6]) {
        if (L->x1 != 1)
            L->x1 += (L->x1 - 1);
        for (int ii = 0; ii < L->size_boat*2; ii += 2) {
            if (p->boat2[L->y1 + 1][L->x1 + 1 + ii] != '.')
                return (84);
            p->boat2[L->y1 + 1][L->x1 + 1 + ii] = (L->size_boat + '0');
        }
    }
    return (0);
}

int place_boat(struct navy *p, struct position *L)
{
    if (L->posit[L->z + 2] == L->posit[L->z + 5]) {
        if (L->x1 != 1)
            L->x1 += (L->x1 - 1);
        for (int ii = 0; ii < L->size_boat; ii ++) {
            if (p->boat[L->y1 + 1 + ii][L->x1 + 1] != '.')
                return (84);
            p->boat[L->y1 + 1 + ii][L->x1 + 1] = (L->size_boat + '0');
        }
    }
    if (L->posit[L->z + 3] == L->posit[L->z + 6]) {
        if (L->x1 != 1)
            L->x1 += (L->x1 - 1);
        for (int ii = 0; ii < L->size_boat*2; ii += 2) {
            if (p->boat[L->y1 + 1][L->x1 + 1 + ii] != '.')
                return (84);
            p->boat[L->y1 + 1][L->x1 + 1 + ii] = (L->size_boat + '0');
        }
    }
    return (0);
}

int clock_place_boat(struct navy *p, struct position * L, int m)
{
    if (m == 1) {
        for (int i = 0; i < 4; i++, L->z += 8) {
            L->size_boat = (L->posit[L->z]) - '0';
            L->x1 = L->posit[L->z + 2] - 64;
            L->y1 = L->posit[L->z + 3] - 48;
            if (place_boat(p, L) == 84)
                return (84);
        }
    } else {
        for (int i = 0; i < 4; i++, L->z += 8) {
            L->size_boat = (L->posit2[L->z]) - '0';
            L->x1 = L->posit2[L->z + 2] - 64;
            L->y1 = L->posit2[L->z + 3] - 48;
            if (place_boat2(p, L) == 84)
                return (84);
        }
    }
    return (0);
}

int recup_position_boat(struct navy *p, struct position *L, int m)
{
    int r;
    int fd;
    int size;

    if (m == 1) {
        fd = open(p->filepath, O_RDONLY);
        size = size_maps(p->filepath);
        L->posit = malloc(sizeof(char) * (size + 1));
        r = read(fd, L->posit, size);
        L->posit[size] = '\0';
    } else {
        fd = open(p->filepath2, O_RDONLY);
        size = size_maps(p->filepath2);
        L->posit2 = malloc(sizeof(char) * (size + 1));
        r = read(fd, L->posit2, size);
        L->posit2[size] = '\0';
    }
    if (size != 32)
        return (84);
    return (0);
}

int generate_position(struct navy *p)
{
    struct position L = {0};
    if (recup_position_boat(p, &L, 1) == 84 || test_format_map(L.posit) == 84)
        return (84);
    if (clock_place_boat(p, &L, 1) == 84)
        return (84);
    L.z = 0;
    L.x1 = 0;
    L.y1 = 0;
    if (recup_position_boat(p, &L, 2) == 84 || test_format_map(L.posit2) == 84)
        return (84);
    if (clock_place_boat(p, &L, 2) == 84)
        return (84);
}