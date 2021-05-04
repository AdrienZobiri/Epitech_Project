/*
** EPITECH PROJECT, 2021
** dante
** File description:
** main
*/

#include "../include/dante.h"

void helper(void)
{
    printf("solver a maze map :\n\n");
    printf("./solver filepath_map.txt\n");
    exit(0);
}

int main(int argc, char **argv)
{
    dante_t p = {0};
    p.argc = argc;
    p.argv = argv;
    if (argc == 2)
        if (strcmp(argv[1], "-h") == 0)
            helper();
    redirect(&p);
    return (0);
}
