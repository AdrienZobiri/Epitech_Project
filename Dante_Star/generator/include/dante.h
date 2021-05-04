/*
** EPITECH PROJECT, 2020
** Include
** File description:
** dante
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ioctl.h>

typedef struct dante_s dante_t;

struct dante_s
{
    bool perfect;
    char **map;
    char **argv;
    int argc;
    int height;
    int width;
    int x;
    int y;
};

void redirect(dante_t *p);
void error_handling(dante_t *p);
void alloc_maps(dante_t *p);
void setpath(dante_t *p);
void try_add(dante_t *p, int my, int mx);
void set_point_one(dante_t *p);
void set_point_tow(dante_t *p);
void create_loop(dante_t *p);