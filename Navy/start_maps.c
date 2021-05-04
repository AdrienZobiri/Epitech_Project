/*
** EPITECH PROJECT, 2020
** navy
** File description:
** start maps
*/

#include "navy.h"

static struct start_maps
{
    int c;
    int w;
    int x;
    int y;
    int z;
} start_maps;


void void_maps_boat(struct navy *p, struct start_maps *j)
{
    for (j->z = 0; p->buffer[j->z] != '\n'; j->z++);
    j->z++;
    for (j->w = 0; p->buffer[j->w] != '\0'; j->w++);
    j->w++;
    p->boat = malloc(sizeof(char*) * (j->w / j->z + 2));
    j->c = (j->w/j->z + 1);
    p->boat[j->c] = NULL;
    j->w = 0;
    for (j->y = 0; j->y < j->c; j->y++) {
        p->boat[j->y] = malloc(sizeof(char) * (j->z + 2));
        p->boat[j->c] = NULL;
        for (j->x = 0; p->buffer[j->w] != '\n' && p->buffer[j->w] != '\0';\
        j->x++) {
            p->boat[j->y][j->x] = p->buffer[j->w];
            j->w++;
        }
    j->w++;
    p->boat[j->y][j->x] = '\0';
    }
}

void void_maps_boat2(struct navy *p, struct start_maps *j)
{
    for (j->z = 0; p->buffer[j->z] != '\n'; j->z++);
    j->z++;
    for (j->w = 0; p->buffer[j->w] != '\0'; j->w++);
    j->w++;
    p->boat2 = malloc(sizeof(char*) * (j->w / j->z + 2));
    j->c = (j->w/j->z + 1);
    p->boat2[j->c] = NULL;
    j->w = 0;
    for (j->y = 0; j->y < j->c; j->y++) {
        p->boat2[j->y] = malloc(sizeof(char) * (j->z + 2));
        p->boat2[j->c] = NULL;
        for (j->x = 0; p->buffer[j->w] != '\n' && p->buffer[j->w] != '\0';\
        j->x++) {
            p->boat2[j->y][j->x] = p->buffer[j->w];
            j->w++;
        }
    j->w++;
    p->boat2[j->y][j->x] = '\0';
    }
}

void void_maps_attacks(struct navy *p, struct start_maps *j)
{
    for (j->z = 0; p->buffer[j->z] != '\n'; j->z++);
    j->z++;
    for (j->w = 0; p->buffer[j->w] != '\0'; j->w++);
    j->w++;
    p->attacks = malloc(sizeof(char*) * (j->w / j->z + 2));
    j->c = (j->w/j->z + 1);
    p->attacks[j->c] = NULL;
    j->w = 0;
    for (j->y = 0; j->y < j->c; j->y++) {
        p->attacks[j->y] = malloc(sizeof(char) * (j->z + 2));
        p->attacks[j->c] = NULL;
        for (j->x = 0; p->buffer[j->w] != '\n' && p->buffer[j->w] != '\0';\
        j->x++) {
            p->attacks[j->y][j->x] = p->buffer[j->w];
            j->w++;
        }
    j->w++;
    p->attacks[j->y][j->x] = '\0';
    }
}

void void_maps_attacks2(struct navy *p, struct start_maps *j)
{
    for (j->z = 0; p->buffer[j->z] != '\n'; j->z++);
    j->z++;
    for (j->w = 0; p->buffer[j->w] != '\0'; j->w++);
    j->w++;
    p->attacks2 = malloc(sizeof(char*) * (j->w / j->z + 2));
    j->c = (j->w/j->z + 1);
    p->attacks2[j->c] = NULL;
    j->w = 0;
    for (j->y = 0; j->y < j->c; j->y++) {
        p->attacks2[j->y] = malloc(sizeof(char) * (j->z + 2));
        p->attacks2[j->c] = NULL;
        for (j->x = 0; p->buffer[j->w] != '\n' && p->buffer[j->w] != '\0';\
        j->x++) {
            p->attacks2[j->y][j->x] = p->buffer[j->w];
            j->w++;
        }
    j->w++;
    p->attacks2[j->y][j->x] = '\0';
    }
}

void generate_maps(struct navy *p)
{
    struct start_maps j = {0};
    read_void_maps(p);
    void_maps_boat(p, &j);
    void_maps_boat2(p, &j);
    void_maps_attacks(p, &j);
    void_maps_attacks2(p, &j);
}