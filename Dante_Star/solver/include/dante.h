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

typedef struct dante_s
{
    int argc;
    char **argv;
    char **map;
    char *buff;
    int height;
    int width;
    int x;
    int y;
} dante_t;

void redirect(dante_t *p);
void error_handling(dante_t *p);
void alloc_maps(dante_t *p);
int open_read(dante_t *p);
void find_path(dante_t *p);
void set_point_tow(dante_t *p);
