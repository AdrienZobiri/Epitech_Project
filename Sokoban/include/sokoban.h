/*
** EPITECH PROJECT, 2020
** my_sokoban
** File description:
** sokoban
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ioctl.h>
#include <ncurses.h>

typedef struct sokoban sokoban;

struct sokoban
{
    char **argv;
    char **map;
    char *cmd;
    int **hole;
    int **box;
    int *origin;
    int key;
    int size_x;
    int size_y;
    int x;
    int y;
    int px;
    int py;
    int error;
    int argc;
};

void move_player(sokoban *p, int action);
void error_handling(sokoban *p);
int check_size_term(sokoban *p);
void printer_map(sokoban *p);
int test_command(sokoban *p);
bool end_statut(sokoban *p);
int restarter(sokoban *p);
void redirect(sokoban *p);
void read_map(sokoban *p);
void destroy(sokoban *p);
void helper(void);