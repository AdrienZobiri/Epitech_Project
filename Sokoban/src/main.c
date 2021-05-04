/*
** EPITECH PROJECT, 2021
** my_sokoban
** File description:
** main and redirect
*/

#include "sokoban.h"

int main(int argc, char **argv)
{
    sokoban p = {0};
    p.argc = argc;
    p.argv = argv;
    error_handling(&p);
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        helper();
        exit(0);
    }
    redirect(&p);
    return (0);
}
